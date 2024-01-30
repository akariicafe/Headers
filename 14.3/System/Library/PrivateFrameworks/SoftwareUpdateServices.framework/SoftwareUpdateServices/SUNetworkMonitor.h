@class NSString, NSArray, NSHashTable, NWPathEvaluator, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface SUNetworkMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientCarrierBundleDelegate> {
    struct __SCNetworkReachability { } *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    BOOL _roaming;
    CoreTelephonyClient *_ctClient;
    NSObject<OS_dispatch_queue> *_ctQueue;
    NSArray *_subscriptions;
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
- (id)init;
- (void)removeObserver:(id)a0;
- (void)setCellularRoaming:(BOOL)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)operatorBundleChange:(id)a0;
- (void)_initNetworkObservation;
- (int)currentNetworkType;
- (int)_networkTypeFromFlags:(unsigned int)a0;
- (void)setCurrentNetworkType:(int)a0;
- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (BOOL)isCellularRoaming;
- (BOOL)isCellularDataRoamingEnabled;
- (void)_resetCtClient;
- (int)_queue_currentNetworkType;
- (BOOL)_isCurrentlyRoaming;
- (BOOL)isNetworkTypeCellular:(int)a0;
- (void)setSubscriptions;
- (int)_networkTypeFromCurrentCellularData;
- (int)_networkTypeFromCurrentCellularDataWithError:(id *)a0;
- (BOOL)usingWifi;
- (void)_operatorBundleChanged;
- (void)_carrierBundleChanged;
- (BOOL)isCurrentNetworkTypeCellular;
- (BOOL)isCurrentNetworkTypeExpensive;

@end
