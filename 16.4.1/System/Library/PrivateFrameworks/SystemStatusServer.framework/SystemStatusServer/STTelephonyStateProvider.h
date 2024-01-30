@class NSHashTable, NSString, NSArray, CoreTelephonyClient, RadiosPreferences, NSObject, STTelephonySubscriptionContext, CTStewieStateMonitor, CTStewieState;
@protocol OS_dispatch_queue;

@interface STTelephonyStateProvider : NSObject <BSDebugDescriptionProviding, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSuppServicesDelegate, RadiosPreferencesDelegate, CTStewieStateMonitorDelegate, BSInvalidatable> {
    struct __CTServerConnection { } *_serverConnection;
    BOOL _cachedDualSIMEnabled;
    BOOL _cachedRadioModuleDead;
    BOOL _containsCellularRadio;
    BOOL _airplaneModeEnabled;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueryQueue;
    CoreTelephonyClient *_coreTelephonyClient;
    STTelephonySubscriptionContext *_slot1SubscriptionContext;
    STTelephonySubscriptionContext *_slot2SubscriptionContext;
    NSArray *_cachedCTContexts;
    long long _cachedSuppressesCellDataIndicator;
    long long _cachedSuppressesCellIndicators;
    long long _cachedNeedsUserIdentificationModule;
    RadiosPreferences *_radiosPreferences;
    BOOL *_telephonyDaemonRestartHandlerCanceled;
    CTStewieStateMonitor *_stewieStateMonitor;
    CTStewieState *_stewieState;
}

@property (readonly, nonatomic, getter=isDualSIMEnabled) BOOL dualSIMEnabled;
@property (readonly, nonatomic, getter=isRadioModuleDead) BOOL radioModuleDead;
@property (readonly, nonatomic, getter=isCellularRadioCapabilityActive) BOOL cellularRadioCapabilityActive;
@property (readonly, nonatomic) BOOL hasCellularTelephony;
@property (readonly, nonatomic) BOOL needsUserIdentificationModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellChanged:(id)a0 cell:(id)a1;
- (void)currentDataSimChanged:(id)a0;
- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void)operatorBundleChange:(id)a0;
- (void)carrierBundleChange:(id)a0;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)subscriptionInfoDidChange;
- (void)preferredDataSimChanged:(id)a0;
- (void)stateChanged:(id)a0;
- (void)rejectCauseCodeChanged:(id)a0 causeCode:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)airplaneModeChanged;
- (id)succinctDescriptionBuilder;
- (void)dualSimCapabilityDidChange;
- (id)mobileEquipmentInfoForSlot:(long long)a0;
- (void)addObserver:(id)a0;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (BOOL)isSIMPresentForSlot:(long long)a0;
- (void)servingNetworkChanged:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)networkReselectionNeeded:(id)a0;
- (void)networkSelected:(id)a0 success:(BOOL)a1 mode:(id)a2;
- (id)carrierBundleInfoForSlot:(long long)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)signalStrengthChanged:(id)a0 info:(id)a1;
- (void)suppServicesEvent:(id)a0 event:(int)a1 settingsType:(int)a2 data:(id)a3;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)subscriptionInfoForSlot:(long long)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
