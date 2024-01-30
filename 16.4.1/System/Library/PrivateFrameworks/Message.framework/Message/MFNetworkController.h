@class MFLock, NSString, CXCallObserver, CoreTelephonyClient, RadiosPreferences, AWDMailNetworkDiagnosticsReport, NSObject, EFObservable;
@protocol OS_dispatch_queue, EFCancelable;

@interface MFNetworkController : NSObject <RadiosPreferencesDelegate, CXCallObserverDelegate> {
    id<EFCancelable> _stateCancelable;
    struct __SCNetworkReachability { } *_reachability;
    struct __SCDynamicStore { } *_store;
    struct __CFRunLoopSource { } *_store_source;
    CXCallObserver *_callObserver;
    MFLock *_lock;
    struct __CFRunLoop { } *_rl;
    unsigned int _flags;
    BOOL _hasDNS;
    unsigned long long _activeCalls;
    struct __SCPreferences { } *_wiFiPreferences;
    BOOL _hasCellDataCapability;
    BOOL _hasWiFiCapability;
    BOOL _isWiFiEnabled;
    BOOL _isRoamingAllowed;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    int _symptomsToken;
    CoreTelephonyClient *_ctc;
    NSObject<OS_dispatch_queue> *_dataStatusQueue;
    BOOL _cellularDataAvailable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataStatusInitializerLock;
    BOOL _dataStatusInitialized;
    BOOL _callObserverInitialized;
}

@property (class, readonly, nonatomic) MFNetworkController *sharedInstance;

@property (readonly) BOOL isDataAvailable;
@property (readonly) BOOL isNetworkUp;
@property (readonly) BOOL isFatPipe;
@property (readonly) BOOL isOnWWAN;
@property (readonly) BOOL inAirplaneMode;
@property (readonly) BOOL is3GConnection;
@property (readonly) BOOL is4GConnection;
@property (readonly) int dataIndicator;
@property (readonly) long long transportType;
@property (readonly, nonatomic) EFObservable *networkObservable;
@property (readonly, nonatomic) EFObservable *wifiObservable;
@property (readonly, nonatomic) AWDMailNetworkDiagnosticsReport *awdNetworkDiagnosticReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;
+ (id)observers;
+ (id)networkAssertionWithIdentifier:(id)a0;
+ (id)addNetworkObserverBlock:(id /* block */)a0 queue:(id)a1;
+ (void)performExecuteOnObservers;
+ (void)removeNetworkObserver:(id)a0;

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)preferredDataSimChanged:(id)a0;
- (unsigned long long)signpostID;
- (void)airplaneModeChanged;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)connectionActivationError:(id)a0 connection:(int)a1 error:(int)a2;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)dealloc;
- (id)init;
- (int)dataStatus;
- (void).cxx_destruct;
- (void)_carrierBundleDidChange;
- (void)_checkKeys:(id)a0 forStore:(struct __SCDynamicStore { } *)a1;
- (void)_handleWiFiNotification:(unsigned int)a0;
- (void)_initializeDataStatus;
- (BOOL)_isNetworkUp_nts;
- (id)_networkAssertionWithIdentifier:(id)a0;
- (void)_registerStateCaptureHandler;
- (void)_resetDataStatusInitialized;
- (void)_setDataStatus_nts:(id)a0;
- (void)_setFlags:(unsigned int)a0 forReachability:(struct __SCNetworkReachability { } *)a1;
- (void)_setupSymptoms;
- (BOOL)_simulationOverrideForType:(unsigned long long)a0 actualValue:(BOOL)a1;
- (void)_updateActiveCalls;
- (id)copyCarrierBundleValue:(id)a0;

@end
