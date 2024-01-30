@class NSCountedSet, NSString, EFObservable, NSObject;
@protocol OS_dispatch_queue, EFCancelable;

@interface MFPowerController : NSObject <MFDiagnosticsGenerator> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_powerQueue;
    int _pluggedIn;
    int _powerToken;
    NSCountedSet *_identifiers;
    id<EFCancelable> _appStateCancelable;
    BOOL _isForeground;
    struct IONotificationPort { } *_pmPort;
    unsigned int _pmNotifier;
}

@property (readonly, nonatomic) EFObservable *pluggedInObservable;
@property (readonly, nonatomic) EFObservable *lowPowerModeObservable;
@property (readonly, getter=isPluggedIn) BOOL pluggedIn;
@property (readonly, getter=isBatterySaverModeEnabled) BOOL batterySaverModeEnabled;
@property (readonly, getter=isHoldingAssertion) BOOL holdingAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)powerlog:(id)a0 eventData:(id)a1;

- (void).cxx_destruct;
- (void)releaseAssertionWithIdentifier:(id)a0;
- (id)init;
- (id)powerObservable;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (void)retainAssertionWithIdentifier:(id)a0 withAccount:(id)a1;
- (void)_setPluggedIn:(unsigned int)a0;
- (void)_applicationForegroundStateChanged:(BOOL)a0;
- (void)_releasePowerAssertion_nts;
- (void)_retainPowerAssertion_nts;
- (void)_lowPowerModeChangedNotification:(id)a0;
- (double)_assertionTimeout;
- (void)_setupAssertionTimer:(double)a0;
- (void)_retainTaskAssertion_nts;
- (void)retainAssertionWithIdentifier:(id)a0;
- (void)_releaseTaskAssertion_nts;
- (void)_applicationForegroundStateChanged_nts:(BOOL)a0;
- (BOOL)_isHoldingTaskAssertion;
- (void)startListeningForBatterySaverNotifications;

@end
