@class _PASLock, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface PPNotificationManager : NSObject {
    _PASLock *_lockedData;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNotificationCenter *_notificationCenter;
}

+ (id)sharedInstance;
+ (id)addCalendarVisibilityObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (void)addPortraitInvalidationObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (id)new;
+ (void)addSuggestionsObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (void)addPortraitChangeObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (void)addContactsObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (void)addMeCardObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (void)addEventKitObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;

- (void)stopListening;
- (id)addCalendarVisibilityChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)waitOnQueueToDrain;
- (void)addPortraitInvalidationBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)simulatePortraitInvalidation;
- (void)addPortraitChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void).cxx_destruct;
- (id)initWithQueueName:(const char *)a0 notificationCenter:(id)a1;
- (id)init;
- (void)addEventKitChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)_registerForEventKitChangeTrackingWithGuardedData:(id)a0;
- (void)addContactsChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)dealloc;
- (void)addSuggestionsChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)simulatePortraitChange;
- (void)addMeCardChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;

@end
