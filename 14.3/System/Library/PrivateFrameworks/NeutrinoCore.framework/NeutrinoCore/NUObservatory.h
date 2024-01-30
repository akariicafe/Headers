@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUObservatory : NSObject {
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableArray *_observations;
}

- (void)_removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)removeObserver:(id)a0 forKey:(long long)a1;
- (id)addObserverForKey:(long long)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)addObserver:(id)a0 forKey:(long long)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)_addObservation:(id)a0;
- (void)_removeObserver:(id)a0 forKey:(long long)a1;
- (void)notifyAllObserversForKey:(long long)a0 withBlock:(id /* block */)a1;
- (void)_notifyAllObserversForKey:(long long)a0 withBlock:(id /* block */)a1;

@end
