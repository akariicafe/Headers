@class NSLock, NSString, CoreTelephonyClient, CXCallObserver, RadiosPreferences, AWDMailNetworkDiagnosticsReport, NSMutableSet, NSMutableArray, NSObject, EFObservable;
@protocol OS_dispatch_queue, EFCancelable;

@interface MFNetworkController : NSObject <RadiosPreferencesDelegate, CXCallObserverDelegate> {
    NSLock *_lock;
    struct __CFRunLoop { } *_rl;
    NSMutableArray *_observers;
    unsigned int _flags;
    BOOL _dns;
    unsigned long long _activeCalls;
    NSMutableSet *_backgroundWifiClients;
    struct __SCPreferences { } *_wiFiPreferences;
    BOOL _hasCellDataCapability;
    BOOL _hasWiFiCapability;
    BOOL _isWiFiEnabled;
    BOOL _isRoamingAllowed;
    BOOL _alternateAdviceState;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    int _symptomsToken;
    CoreTelephonyClient *_ctc;
    NSObject<OS_dispatch_queue> *_dataStatusQueue;
    BOOL _cellularDataAvailable;
    id<EFCancelable> _stateCancelable;
    struct __SCNetworkReachability { } *_reachability;
    struct __SCDynamicStore { } *_store;
    struct __CFRunLoopSource { } *_store_source;
    CXCallObserver *_callObserver;
}

@property (nonatomic) void *wifiManager;
@property (readonly) BOOL isDataAvailable;
@property (readonly) BOOL isNetworkUp;
@property (readonly) BOOL isFatPipe;
@property (readonly) BOOL isOnWWAN;
@property (readonly) BOOL inAirplaneMode;
@property (readonly) BOOL is3GConnection;
@property (readonly) BOOL is4GConnection;
@property (readonly) int dataIndicator;
@property (readonly) long long transportType;
@property (readonly) BOOL hasAlternateAdvice;
@property (readonly, nonatomic) EFObservable *networkObservable;
@property (readonly, nonatomic) EFObservable *wifiObservable;
@property (readonly, nonatomic) AWDMailNetworkDiagnosticsReport *awdNetworkDiagnosticReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)networkAssertionWithIdentifier:(id)a0;

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)dealloc;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)copyCarrierBundleValue:(id)a0;
- (void)_registerStateCaptureHandler;
- (int)dataStatus;
- (void)_checkKeys:(id)a0 forStore:(struct __SCDynamicStore { } *)a1;
- (id)addNetworkObserverBlock:(id /* block */)a0 queue:(id)a1;
- (void)_inititializeWifiManager;
- (void)_setupSymptons;
- (void)_setDataStatus_nts:(id)a0;
- (void)_updateActiveCalls;
- (void)_initializeDataStatus;
- (BOOL)_isNetworkUp_nts;
- (BOOL)_simulationOverrideForType:(unsigned long long)a0 actualValue:(BOOL)a1;
- (id)_networkAssertionWithIdentifier:(id)a0;
- (void)removeNetworkObserver:(id)a0;
- (void)_updateWifiClientType;
- (void)_carrierBundleDidChange;
- (void)_setFlags:(unsigned int)a0 forReachability:(struct __SCNetworkReachability { } *)a1;
- (void)_handleWiFiNotification:(unsigned int)a0;
- (void)addBackgroundWifiClient:(id)a0;
- (void)removeBackgroundWifiClient:(id)a0;
- (void)preferredDataSimChanged:(id)a0;
- (void)connectionActivationError:(id)a0 connection:(int)a1 error:(int)a2;
- (void)invalidate;

@end
