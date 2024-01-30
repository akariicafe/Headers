@class NSCache, NSDate, _PSSuggester;

@interface PPPeopleSuggesterGuardedData : NSObject {
    _PSSuggester *_suggester;
    NSCache *_cache;
    NSDate *_lastCacheSweepDate;
}

- (void).cxx_destruct;

@end
