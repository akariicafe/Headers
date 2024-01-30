@interface RTMapItemProviderMapsSupportParameters : NSObject

@property (readonly, nonatomic) double favoriteConfidence;
@property (readonly, nonatomic) double historyEntryRouteConfidence;
@property (readonly, nonatomic) double historyEntryPlaceDisplayConfidence;

- (id)description;
- (id)initWithFavoriteConfidence:(double)a0 historyEntryRouteConfidence:(double)a1 historyEntryPlaceDisplayConfidence:(double)a2;
- (id)init;
- (id)initWithDefaultsManager:(id)a0;

@end
