@class NSLock, NSString, CoreTelephonyClient, CXCallObserver, RadiosPreferences, NSObject, NSMutableSet, NSMutableArray, EFObservable;
@protocol OS_dispatch_queue;

@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate, CXCallObserverDelegate> {
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
    int _dataIndicator;
    NSObject<OS_dispatch_queue> *_dataStatusQueue;
    BOOL _cellularDataAvailable;
    struct __SCNetworkReachability { } *_reachability;
    struct __SCDynamicStore { } *_store;
    struct __CFRunLoopSource { } *_store_source;
    CXCallObserver *_callObserver;
}

@property (nonatomic) void *wifiManager;
@property (readonly, nonatomic) EFObservable *networkObservable;
@property (readonly, nonatomic) EFObservable *wifiObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)networkAssertionWithIdentifier:(id)a0;

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (BOOL)inAirplaneMode;
- (void)preferredDataSimChanged:(id)a0;
- (BOOL)isNetworkUp;
- (int)dataStatus;
- (void).cxx_destruct;
- (id)init;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (BOOL)isOnWWAN;
- (void)airplaneModeChanged;
- (void)invalidate;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (void)connectionActivationError:(id)a0 connection:(int)a1 error:(int)a2;
- (BOOL)isFatPipe;
- (BOOL)is4GConnection;
- (BOOL)is3GConnection;
- (id)copyCarrierBundleValue:(id)a0;
- (id)addNetworkObserverBlock:(id /* block */)a0 queue:(id)a1;
- (void)_checkKeys:(id)a0 forStore:(struct __SCDynamicStore { } *)a1;
- (void)_setupSymptons;
- (void)_setDataStatus_nts:(id)a0;
- (void)_updateActiveCalls;
- (void)_initializeDataStatus;
- (BOOL)_isNetworkUp_nts;
- (BOOL)_simulationOverrideForType:(unsigned long long)a0 actualValue:(BOOL)a1;
- (id)_networkAssertionWithIdentifier:(id)a0;
- (void)removeNetworkObserver:(id)a0;
- (void)_carrierBundleDidChange;
- (BOOL)isDataAvailable;
- (void)_setFlags:(unsigned int)a0 forReachability:(struct __SCNetworkReachability { } *)a1;
- (void)_handleWiFiNotification:(unsigned int)a0;
- (void)_inititializeWifiManager;
- (void)_updateWifiClientType;
- (BOOL)hasAlternateAdvice;
- (void)addBackgroundWifiClient:(id)a0;
- (void)removeBackgroundWifiClient:(id)a0;

@end
