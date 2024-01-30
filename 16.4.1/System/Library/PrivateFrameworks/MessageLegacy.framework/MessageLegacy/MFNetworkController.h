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

- (BOOL)isNetworkUp;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)preferredDataSimChanged:(id)a0;
- (void)airplaneModeChanged;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)connectionActivationError:(id)a0 connection:(int)a1 error:(int)a2;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (BOOL)inAirplaneMode;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (int)dataStatus;
- (void).cxx_destruct;
- (id)copyDiagnosticInformation;
- (BOOL)isDataAvailable;
- (void)_carrierBundleDidChange;
- (void)_checkKeys:(id)a0 forStore:(struct __SCDynamicStore { } *)a1;
- (void)_handleWiFiNotification:(unsigned int)a0;
- (void)_initializeDataStatus;
- (BOOL)_isNetworkUp_nts;
- (id)_networkAssertionWithIdentifier:(id)a0;
- (void)_setDataStatus_nts:(id)a0;
- (void)_setFlags:(unsigned int)a0 forReachability:(struct __SCNetworkReachability { } *)a1;
- (BOOL)_simulationOverrideForType:(unsigned long long)a0 actualValue:(BOOL)a1;
- (void)_updateActiveCalls;
- (id)addNetworkObserverBlock:(id /* block */)a0 queue:(id)a1;
- (id)copyCarrierBundleValue:(id)a0;
- (BOOL)is3GConnection;
- (BOOL)is4GConnection;
- (BOOL)isFatPipe;
- (BOOL)isOnWWAN;
- (void)removeNetworkObserver:(id)a0;
- (void)_inititializeWifiManager;
- (void)_setupSymptons;
- (void)_updateWifiClientType;
- (void)addBackgroundWifiClient:(id)a0;
- (BOOL)hasAlternateAdvice;
- (void)removeBackgroundWifiClient:(id)a0;

@end
