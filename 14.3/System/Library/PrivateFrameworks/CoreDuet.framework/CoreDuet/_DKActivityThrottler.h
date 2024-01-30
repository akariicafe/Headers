@class NSCountedSet, NSCache, NSObject;
@protocol OS_dispatch_queue, _DKSimpleKeyValueStore;

@interface _DKActivityThrottler : NSObject {
    NSCountedSet *_minimumIntervalScheduledActions;
    NSCountedSet *_delayScheduledActions;
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_storeQueue;
    id<_DKSimpleKeyValueStore> _store;
}

- (void).cxx_destruct;
- (id)description;

@end
