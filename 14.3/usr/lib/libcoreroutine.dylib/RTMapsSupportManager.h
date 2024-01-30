@class NSMutableDictionary, RTMapServiceManager;

@interface RTMapsSupportManager : RTService <MapsSync.MapsSyncDataQueryDelegate>

@property (retain, nonatomic) NSMutableDictionary *queryMap;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;

- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)_setup;
- (id)init;
- (void).cxx_destruct;
- (void)clearParkedCarBulletin;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)queryContentsDidChangeWithQuery:(id)a0;
- (id)initWithMapServiceManager:(id)a0;
- (void)fetchReviewedPlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_createQueries;
- (void)_showParkedCarBulletinForEvent:(id)a0;
- (void)_showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)_clearParkedCarBulletin;
- (void)_fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (void)_fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchReviewedPlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchReviewedPlacesWrapperWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (void)fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (long long)_queryTypeForQuery:(id)a0;

@end
