@class NSHashTable;

@interface PXEventCoalescer : NSObject {
    NSHashTable *_observers;
}

+ (id)delayedCoalescerWithDelay:(double)a0;
+ (id)rateLimitingCoalescerWithRate:(double)a0;

- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)cancel;
- (void)inputEvent;
- (void)signalObservers;

@end
