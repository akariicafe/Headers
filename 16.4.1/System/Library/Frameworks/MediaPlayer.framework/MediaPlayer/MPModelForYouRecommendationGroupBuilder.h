@class NSDateFormatter, NSDictionary, MPModelForYouRecommendationItemBuilder, MPMutableSectionedCollection, MPPropertySet;

@interface MPModelForYouRecommendationGroupBuilder : NSObject {
    struct { unsigned char initialized : 1; unsigned char groupType : 1; unsigned char lastUpdatedDate : 1; unsigned char title : 1; unsigned char subgroups : 1; unsigned char loadAdditionalContentURL : 1; unsigned char refreshURL : 1; } _requestedGroupProperties;
    MPModelForYouRecommendationItemBuilder *_itemBuilder;
    NSDateFormatter *_lastUpdatedDateFormatter;
}

@property (readonly, nonatomic) MPPropertySet *requestedGroupPropertySet;
@property (readonly, nonatomic) MPPropertySet *requestedItemPropertySet;
@property (readonly, nonatomic) NSDictionary *storeItemMetadataResults;
@property (readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems;

+ (id)allSupportedGroupProperties;
+ (id)allSupportedItemProperties;

- (void).cxx_destruct;
- (id)initWithRequestedGroupPropertySet:(id)a0 requestedItemPropertySet:(id)a1 storeItemMetadataResults:(id)a2 flatSectionedItems:(id)a3;
- (id)modelObjectForRecommendationDictionary:(id)a0 userIdentity:(id)a1;

@end
