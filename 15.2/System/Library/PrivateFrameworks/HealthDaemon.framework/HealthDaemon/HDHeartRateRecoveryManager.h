@class NSString, HDAssertionManager, HDPowerAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface HDHeartRateRecoveryManager : NSObject <HDAssertionObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    HDPowerAssertion *_powerAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)assertionManager:(id)a0 assertionTaken:(id)a1;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)a0 sessionStateController:(id)a1;

@end
