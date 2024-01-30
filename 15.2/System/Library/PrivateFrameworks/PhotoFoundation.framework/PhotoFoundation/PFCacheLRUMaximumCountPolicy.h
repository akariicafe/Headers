@class NSMutableArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PFCacheLRUMaximumCountPolicy : PFCachePolicy {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _maximumCount;
    NSMutableSet *_considerationSet;
    NSMutableArray *_orderedConsiderationList;
}

+ (id)policyWithMaximumCount:(unsigned long long)a0;

- (void)didAddCacheEntry:(id)a0;
- (void)didRemoveCacheEntry:(id)a0;
- (id)willAddOrReplaceEntry:(id)a0 add:(BOOL)a1 contents:(id)a2;
- (void)didGetCacheEntry:(id)a0;
- (unsigned long long)capacityHint;
- (void)didRemoveAllCacheEntries;
- (id)_keyToEvict:(id)a0;
- (id)initWithMaximumCount:(unsigned long long)a0;
- (void)_buildConsiderationSet:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
