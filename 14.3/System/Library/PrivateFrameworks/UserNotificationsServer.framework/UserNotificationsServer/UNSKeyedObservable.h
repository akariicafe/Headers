@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UNSKeyedObservable : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMutableDictionary *_observersByKey;
}

- (void).cxx_destruct;
- (void)notifyObserversKey:(id)a0 usingBlock:(id /* block */)a1;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (void)addObserver:(id)a0 forKey:(id)a1;
- (void)_queue_addObserver:(id)a0 forKey:(id)a1;
- (void)_callOutQueue_notifyObserversKey:(id)a0 usingBlock:(id /* block */)a1;
- (id)_observersForKey:(id)a0;
- (void)_queue_removeObserver:(id)a0 forKey:(id)a1;
- (id)initWithQueue:(id)a0 callOutQueue:(id)a1;

@end
