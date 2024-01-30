@class NSString, NWPathEvaluator, NSHashTable, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface SUNetworkMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate> {
    struct __SCNetworkReachability { } *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    int _currentCellularType;
    BOOL _roaming;
    CoreTelephonyClient *_ctClient;
    NSObject<OS_dispatch_queue> *_ctQueue;
    NWPathEvaluator *_pathEvaluator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setHoldsWiFiAssertion:(BOOL)a0;
+ (BOOL)holdsWiFiAssertion;

- (void)carrierBundleChange:(id)a0;
- (void)_carrierBundleChanged;
- (BOOL)isCellularRoaming;
- (void)_operatorBundleChanged;
- (void)setCellularRoaming:(BOOL)a0;
- (id)telephonyClient;
- (void)addObserver:(id)a0;
- (BOOL)_isCurrentlyRoaming;
- (void)removeObserver:(id)a0;
- (int)_networkTypeFromCurrentCellularDataWithError:(id *)a0;
- (BOOL)usingWifi;
- (void)refreshCellularType;
- (void)internetDataStatus:(id)a0;
- (BOOL)isCellularDataRoamingEnabled;
- (BOOL)isCurrentNetworkTypeCellular;
- (void)operatorBundleChange:(id)a0;
- (int)currentCellularType;
- (int)currentNetworkType;
- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (id)init;
- (BOOL)isCurrentNetworkTypeExpensive;
- (int)_networkTypeFromCurrentCellularDataRespectingWifiAssist:(BOOL)a0;
- (void)refreshNetworkTypeWithFlags:(unsigned int)a0;
- (void)_initNetworkObservation;
- (int)_networkTypeFromFlags:(unsigned int)a0;
- (void)_resetCtClient;
- (void)refreshNetworkAndCellularTypesWithFlags:(unsigned int)a0;
- (void)setCurrentNetworkType:(int)a0;
- (void)dealloc;
- (void)setCurrentCellularType:(int)a0;
- (int)_queue_currentNetworkType;
- (int)_networkTypeFromCurrentCellularData;
- (BOOL)isNetworkTypeCellular:(int)a0;
- (int)_queue_currentCellularType;

@end
