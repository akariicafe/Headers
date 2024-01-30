@interface WFLocationContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (BOOL)includesFileRepresentationInSerializedItem;
- (id)preferredFileType;
- (void)getMKMapSnapshotImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 named:(id)a2 withCompletionHandler:(id /* block */)a3;

@end
