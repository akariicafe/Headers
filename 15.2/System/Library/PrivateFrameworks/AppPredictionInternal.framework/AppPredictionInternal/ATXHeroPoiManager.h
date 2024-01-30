@class BMPOICategoryStream;

@interface ATXHeroPoiManager : NSObject {
    BMPOICategoryStream *_poiCategoryStream;
}

- (id)poiCategoryStreamPublisher;
- (id)currentPoiCategory;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (void)donateHeroPoiPredictions:(id)a0;
- (id)poiCategoryStream;
- (void).cxx_destruct;
- (id)cachedPoiCategory;
- (id)poiCategoryPublisherBookmark;
- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 timeIntervalSince1970:(double)a2;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;
- (void)logCompletion:(id)a0;

@end
