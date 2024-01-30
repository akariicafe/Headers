@class NSString, HDAssertionManager, HDAssertion, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDPowerSavingModeManager : NSObject <HDAssertionObserver> {
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    BOOL _powerSavingModeEnabled;
    BOOL _supportsCellularTelephony;
    HDAssertion *_disableAOTAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)assertionManager:(id)a0 assertionTaken:(id)a1;
- (BOOL)supportsPowerSavingForActivityType:(unsigned long long)a0;
- (id)takeSessionAssertionForOwnerIdentifier:(id)a0 activityType:(unsigned long long)a1;

@end
