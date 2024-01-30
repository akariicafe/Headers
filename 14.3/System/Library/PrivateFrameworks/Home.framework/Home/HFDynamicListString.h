@class NSArray, NSString;

@interface HFDynamicListString : NSObject <HFStringGenerator>

@property (copy, nonatomic) NSArray *stringList;
@property (copy, nonatomic) NSString *truncationFormat;
@property (copy, nonatomic) NSString *summaryFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithList:(id)a0 truncationFormat:(id)a1 summaryFormat:(id)a2;
- (id)attributeStringsSortedBySize:(id)a0;
- (id)dynamicStringForSize:(struct CGSize { double x0; double x1; })a0 attributes:(id)a1;
- (id)stringWithAttributes:(id)a0;
- (BOOL)prefersDynamicString;

@end
