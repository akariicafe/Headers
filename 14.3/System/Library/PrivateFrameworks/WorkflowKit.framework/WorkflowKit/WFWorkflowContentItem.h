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
+ (id)defaultSourceForRepresentation:(id)a0;

- (id)folderName;
- (id)actionCount;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)workflowIcon;

@end
