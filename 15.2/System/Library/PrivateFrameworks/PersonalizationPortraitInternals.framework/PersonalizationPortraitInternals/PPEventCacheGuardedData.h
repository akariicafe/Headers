@class NSMutableDictionary, NSMutableArray, NSMutableIndexSet;

@interface PPEventCacheGuardedData : NSObject {
    NSMutableArray *_cachedEvents;
    NSMutableIndexSet *_cachedRanges;
    unsigned long long _extraSecondsToBackfill;
    NSMutableDictionary *_cachedEventHighlights;
}

- (void).cxx_destruct;

@end
