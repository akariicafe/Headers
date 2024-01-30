@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPPeopleSuggester : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueueForSweeping;
}

+ (id)sharedInstance;

- (id)rankedContactIdentifiers;
- (void)_sweepCache;
- (id)_rankedContactIdentifiersMatchingName:(id)a0;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)init;
- (id)rankedContactIdentifiersMatchingName:(id)a0;
- (void).cxx_destruct;

@end
