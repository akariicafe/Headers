@class NSObject;
@protocol OS_dispatch_queue;

@interface PFCacheApproximateLRUMaximumCountPolicy : PFCachePolicy {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _maximumCount;
    unsigned int _seed;
    unsigned long long _tick;
    unsigned long long _tickMaximum;
    unsigned long long _considerationCount;
    id *_considerationKeys;
}

+ (id)policyWithMaximumCount:(unsigned long long)a0;

- (id)cacheEntryWithKey:(id)a0 value:(id)a1;
- (void)didAddCacheEntry:(id)a0;
- (void)didRemoveCacheEntry:(id)a0;
- (id)willAddOrReplaceEntry:(id)a0 add:(BOOL)a1 contents:(id)a2;
- (void)didGetCacheEntry:(id)a0;
- (unsigned long long)capacityHint;
- (void)didRemoveAllCacheEntries;
- (id)initWithMaximumCount:(unsigned long long)a0;
- (void)_rebuildConsiderationKeys:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;

@end
