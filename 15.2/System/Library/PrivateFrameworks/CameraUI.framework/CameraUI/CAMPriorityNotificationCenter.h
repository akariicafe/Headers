@class NSNotificationCenter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CAMPriorityNotificationCenter : NSObject

@property (readonly, retain, nonatomic) NSNotificationCenter *_notificationCenter;
@property (readonly, retain, nonatomic) NSMutableDictionary *_observersByNameHighPriority;
@property (readonly, retain, nonatomic) NSMutableDictionary *_observersByNameNormalPriority;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue;

+ (id)defaultCenter;

- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)removeObserver:(id)a0;
- (void)_notificationReceiver:(id)a0;
- (void)addObserver:(id)a0 priority:(unsigned long long)a1 selector:(SEL)a2 name:(id)a3 object:(id)a4;
- (id)_observersForPriority:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_entriesByName:(id)a0 forPriority:(unsigned long long)a1 creatingEmptyIfNeeded:(BOOL)a2;
- (void)_mutexQueue_addObserver:(id)a0 priority:(unsigned long long)a1 selector:(SEL)a2 name:(id)a3 object:(id)a4;
- (void)_postNotification:(id)a0 forEntries:(id)a1;
- (void)_removeObserver:(id)a0 fromObserversByName:(id)a1;
- (id)_allSubscriptions;
- (void)dealloc;
- (void)_mutexQueue_removeObserver:(id)a0;

@end
