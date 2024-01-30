@class NSArray, NSMapTable, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface HKObserverSet : NSObject {
    NSMapTable *_observerMap;
    NSString *_name;
    NSObject<OS_os_log> *_category;
    NSObject<OS_dispatch_queue> *_defaultObserverQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObservers;

- (void)_notifyObserversInGroup:(id)a0 handler:(id /* block */)a1;
- (void)registerObserver:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)notifyObserversInGroup:(id)a0 handler:(id /* block */)a1;
- (void)_notifyObserver:(id)a0 handler:(id /* block */)a1;
- (void)_registerObserver:(id)a0 queue:(id)a1;
- (id)initWithName:(id)a0 loggingCategory:(id)a1;
- (void)unregisterObserver:(id)a0;
- (void)notifyObservers:(id /* block */)a0;
- (void)notifyObserver:(id)a0 handler:(id /* block */)a1;

@end
