@class BMPOICategoryStream;

@interface ATXHeroPoiManager : NSObject {
    BMPOICategoryStream *_poiCategoryStream;
}

- (id)poiCategoryStream;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (void)donateHeroPoiPredictions:(id)a0;
- (id)cachedPoiCategory;
- (void)logCompletion:(id)a0;
- (id)poiCategoryStreamPublisher;
- (id)poiCategoryPublisherBookmark;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;
- (id)currentPoiCategory;
- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 timeIntervalSince1970:(double)a2;
- (void).cxx_destruct;

@end
