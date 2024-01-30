@class MPModelForYouRecommendationGroupBuilder, NSDictionary, MPMutableSectionedCollection, MPPropertySet, MPModelStoreBrowseContentItemBuilder;

@interface MPModelForYouRecommendationItemBuilder : NSObject {
    struct { unsigned char initialized : 1; unsigned char itemType : 1; unsigned char backedByStoreItemMetadata : 1; unsigned char album : 1; unsigned char playlist : 1; unsigned char radioStation : 1; unsigned char subgroup : 1; } _requestedItemProperties;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPModelForYouRecommendationGroupBuilder *_subgroupBuilder;
}

@property (readonly, nonatomic) MPPropertySet *requestedPropertySet;
@property (readonly, nonatomic) NSDictionary *storeItemMetadataResults;
@property (readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems;

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)initWithRequestedPropertySet:(id)a0 storeItemMetadataResults:(id)a1 flatSectionedItems:(id)a2;
- (id)modelObjectForRecommendationChildDictionary:(id)a0 parentGroup:(id)a1 subgroupsAccumulator:(id)a2 userIdentity:(id)a3;

@end
