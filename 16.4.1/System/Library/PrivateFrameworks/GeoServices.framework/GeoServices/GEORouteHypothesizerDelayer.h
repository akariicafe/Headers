@class GEORouteHypothesizer, geo_isolater, GEOXPCActivity;

@interface GEORouteHypothesizerDelayer : NSObject {
    struct __CFBinaryHeap { } *_minHeap;
    GEORouteHypothesizer *_nextHypothesizer;
    geo_isolater *_isolater;
    GEOXPCActivity *_activity;
}

+ (void)checkin;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setNextHypothesizer:(id)a0;
- (void)_startValidHypothesizers;
- (void)delayStartOfHypothesizer:(id)a0;

@end
