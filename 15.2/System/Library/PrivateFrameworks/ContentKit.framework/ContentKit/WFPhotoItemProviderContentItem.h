@interface WFPhotoItemProviderContentItem : WFNSItemProviderContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemWithItemProviderItem:(id)a0 photoMediaFileRepresentation:(id)a1 assetIdentifier:(id)a2;

- (id)outputTypes;
- (id)defaultSourceForRepresentation:(id)a0;

@end
