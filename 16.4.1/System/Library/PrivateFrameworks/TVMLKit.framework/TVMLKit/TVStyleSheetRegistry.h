@class NSMutableArray, NSMutableDictionary;

@interface TVStyleSheetRegistry : NSObject

@property (retain, nonatomic) NSMutableArray *rootNodes;
@property (retain, nonatomic) NSMutableDictionary *nodesByTemplateName;

+ (id)_urlForStyleSheetName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_commitTemplateTreeNode:(id)a0 withParentStyleSheetURLs:(id)a1;
- (void)_createDefaultRootNodes;
- (void)commitStyleSheets;
- (void)registerStyleSheetURLs:(id)a0 forTemplateName:(id)a1 basedOnTemplateName:(id)a2;

@end
