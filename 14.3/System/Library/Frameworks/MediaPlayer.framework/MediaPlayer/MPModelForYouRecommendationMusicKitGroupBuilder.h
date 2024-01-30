@class MPModelForYouRecommendationMusicKitItemBuilder, NSDictionary, NSDateFormatter, MPMutableSectionedCollection, MPPropertySet;

@interface MPModelForYouRecommendationMusicKitGroupBuilder : NSObject {
    struct { unsigned char initialized : 1; unsigned char groupType : 1; unsigned char lastUpdatedDate : 1; unsigned char title : 1; unsigned char subgroups : 1; unsigned char loadAdditionalContentURL : 1; unsigned char refreshURL : 1; unsigned char displaysAsGridCellInCarPlay : 1; } _requestedGroupProperties;
    MPModelForYouRecommendationMusicKitItemBuilder *_itemBuilder;
    NSDateFormatter *_lastUpdatedDateFormatter;
    NSDictionary *_storeBagDictionary;
    BOOL _isListenNow;
}

@property (readonly, nonatomic) MPPropertySet *requestedGroupPropertySet;
@property (readonly, nonatomic) MPPropertySet *requestedItemPropertySet;
@property (readonly, nonatomic) NSDictionary *storeItemMetadataResults;
@property (readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems;

+ (id)allSupportedItemProperties;
+ (id)allSupportedGroupProperties;

- (id)initWithRequestedGroupPropertySet:(id)a0 requestedItemPropertySet:(id)a1 storeItemMetadataResults:(id)a2 flatSectionedItems:(id)a3 storeBagDictionary:(id)a4 isListenNow:(BOOL)a5;
- (void).cxx_destruct;
- (void)initializeRequestedGroupProperties;
- (id)modelObjectForItemsArray:(id)a0 userIdentity:(id)a1;
- (id)modelObjectForRecentlyPlayedArray:(id)a0 userIdentity:(id)a1;
- (id)modelObjectForRecommendationDictionary:(id)a0 userIdentity:(id)a1;

@end
