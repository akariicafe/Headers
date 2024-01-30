@class WFWorkflowReference;

@interface WFWorkflowContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFWorkflowReference *workflowReference;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;

- (id)workflowIcon;
- (id)folderName;
- (id)actionCount;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
