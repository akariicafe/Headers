@interface WFPhotoItemProviderContentItem : WFNSItemProviderContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)defaultSourceForRepresentation:(id)a0;
+ (id)itemWithItemProviderItem:(id)a0 photoMediaFileRepresentation:(id)a1 assetIdentifier:(id)a2;

- (id)outputTypes;

@end
