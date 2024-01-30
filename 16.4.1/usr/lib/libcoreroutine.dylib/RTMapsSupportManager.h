@class RTMapServiceManager;

@interface RTMapsSupportManager : RTService

@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;

+ (BOOL)prepareQuery:(id)a0 error:(id *)a1;

- (void)_fetchReviewedPlacesWrapperWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (void)_fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (id)initWithMapServiceManager:(id)a0;
- (void)_fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (void)_fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchReviewedPlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchReviewedPlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_clearParkedCarBulletin;
- (void)clearParkedCarBulletin;
- (void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_showParkedCarBulletinForEvent:(id)a0;

@end
