@class NSCache, EKEventStore, NSObject;
@protocol OS_dispatch_queue;

@interface CUIKNotificationConflictCache : NSObject {
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    EKEventStore *_store;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_eventForNotification:(id)a0;
- (BOOL)_updateNotification:(id)a0 withCacheObject:(id)a1;
- (id)conflictsForNotification:(id)a0;
- (void)updateConflictsForNotification:(id)a0 synchronously:(BOOL)a1 withCompletion:(id /* block */)a2;

@end
