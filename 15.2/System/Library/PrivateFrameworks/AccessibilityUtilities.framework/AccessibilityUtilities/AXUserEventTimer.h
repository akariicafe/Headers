@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AXUserEventTimer : NSObject {
    NSObject<OS_dispatch_queue> *_assertionQueue;
    NSHashTable *_assertions;
}

+ (id)sharedInstance;

- (void)userEventOccurred;
- (void)_stopTrackingPoorMansAssertion:(id)a0;
- (void)_startTrackingPoorMansAssertion:(id)a0;
- (BOOL)_canUseIdleTimerServices;
- (id)acquireAssertionToDisableIdleTimerWithReason:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
