@class NSMutableDictionary, CMGestureManager;

@interface SBFMotionGestureController : NSObject {
    NSMutableDictionary *_observersByPriority;
    CMGestureManager *_motionGestureManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_removeGestureManager;
- (void)addGestureObserver:(id)a0 withPriority:(unsigned long long)a1;
- (void)_addGestureObserver:(id)a0 withPriority:(unsigned long long)a1;
- (void)_updateGestureManager;
- (void)_removeGestureObserver:(id)a0;
- (void)_enumerateObserversByPriority:(id /* block */)a0;
- (id)_highestPriorityObservers;
- (void)_addGestureManager;
- (void)_notifyObserversOfGesture:(int)a0;
- (void)addGestureObserver:(id)a0;
- (void)removeGestureObserver:(id)a0;
- (BOOL)_hasObservers;
- (id)_observersForPriority:(unsigned long long)a0;

@end
