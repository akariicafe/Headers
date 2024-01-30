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
+ (BOOL)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:(BOOL)a0;

- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (void)operatorBundleChange:(id)a0;
- (void)carrierBundleChange:(id)a0;
- (void)internetDataStatus:(id)a0;
- (void)setCurrentNetworkType:(int)a0;
- (void)_initNetworkObservation;
- (void)addObserver:(id)a0;
- (id)telephonyClient;
- (int)_networkTypeFromFlags:(unsigned int)a0;
- (int)currentNetworkType;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)setCellularRoaming:(BOOL)a0;
- (BOOL)isCellularRoaming;
- (void)_carrierBundleChanged;
- (BOOL)_isCurrentlyRoaming;
- (int)_networkTypeFromCurrentCellularData;
- (int)_networkTypeFromCurrentCellularDataRespectingWifiAssist:(BOOL)a0;
- (int)_networkTypeFromCurrentCellularDataWithError:(id *)a0;
- (void)_operatorBundleChanged;
- (int)_queue_currentCellularType;
- (int)_queue_currentNetworkType;
- (void)_resetCtClient;
- (int)currentCellularType;
- (BOOL)isCellularDataRoamingEnabled;
- (BOOL)isCurrentNetworkTypeCellular;
- (BOOL)isCurrentNetworkTypeExpensive;
- (BOOL)isNetworkTypeCellular:(int)a0;
- (void)refreshCellularType;
- (void)refreshNetworkAndCellularTypesWithFlags:(unsigned int)a0;
- (void)refreshNetworkTypeWithFlags:(unsigned int)a0;
- (void)setCurrentCellularType:(int)a0;
- (BOOL)usingWifi;

@end
