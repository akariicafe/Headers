@class NSString, NSArray, NSMutableArray;

@interface _TVTemplateTreeNode : NSObject {
    NSMutableArray *_derivedTemplateNodes;
}

@property (readonly, copy, nonatomic) NSString *templateName;
@property (readonly, copy, nonatomic) NSArray *styleSheetURLs;
@property (readonly, nonatomic) BOOL isAbstract;
@property (copy, nonatomic) NSArray *finalURLs;
@property (readonly, copy, nonatomic) NSArray *derivedTemplateNodes;

- (void).cxx_destruct;
- (void)addDerivedTemplateNode:(id)a0;
- (id)initWithTemplateName:(id)a0 styleSheetURLs:(id)a1;
- (id)initWithTemplateName:(id)a0 styleSheetURLs:(id)a1 abstract:(BOOL)a2;

@end
