@class NSHashTable, NSString, CoreTelephonyClient, NWPathEvaluator, CWFLinkQualityMetric, NSDictionary, NSObject, NWNetworkOfInterestManager, NSMutableSet, CWFInterface;
@protocol OS_dispatch_queue;

@interface ICEnvironmentMonitor : NSObject <NWNetworkOfInterestManagerDelegate, CoreTelephonyClientRegistrationDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_observers;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _observersLock;
    struct __CTServerConnection { } *_telephonyServerConnectionRef;
    NWPathEvaluator *_networkPathEvaluator;
    int _thermalNotificationToken;
    CoreTelephonyClient *_telephonyClient;
    NSDictionary *_cellSignalInfo;
    unsigned int _powerNotificationRef;
    void *_symptomPresentationFeedDyLibHandle;
    CWFInterface *_wifiInterface;
    CWFLinkQualityMetric *_wifiLinkQualityMetric;
    NWNetworkOfInterestManager *_noiManager;
    long long _cellularLinkQuality;
    NSMutableSet *_networksOfInterest;
}

@property (class, readonly) ICEnvironmentMonitor *sharedMonitor;

@property (readonly, nonatomic, getter=isCharging) BOOL charging;
@property (readonly, nonatomic) long long networkType;
@property (readonly, nonatomic) long long lastKnownNetworkType;
@property (readonly, nonatomic) NSDictionary *signalStrength;
@property (readonly, nonatomic) NSDictionary *signalInfo;
@property (readonly, nonatomic, getter=isRemoteServerReachable) BOOL remoteServerReachable;
@property (readonly, nonatomic, getter=isRemoteServerLikelyReachable) BOOL remoteServerLikelyReachable;
@property (readonly, nonatomic, getter=isCurrentNetworkLinkHighQuality) BOOL currentNetworkLinkHighQuality;
@property (readonly, nonatomic, getter=isCurrentNetworkLinkExpensive) BOOL currentNetworkLinkExpensive;
@property (readonly, nonatomic, getter=isWiFiAssociated) BOOL wifiAssociated;
@property (readonly, nonatomic, getter=isEthernetWired) BOOL ethernetWired;
@property (readonly, nonatomic, getter=isWiFiActive) BOOL wiFiActive;
@property (readonly, nonatomic, getter=isNetworkConstrained) BOOL networkConstrained;
@property (readonly, nonatomic) unsigned long long currentThermalLevel;
@property (readonly, nonatomic) double currentBatteryLevel;
@property (readonly, copy, nonatomic) NSString *telephonyStatusIndicator;
@property (readonly, copy, nonatomic) NSString *telephonyOperatorName;
@property (readonly, copy, nonatomic) NSString *telephonyRegistrationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellMonitorUpdate:(id)a0 info:(id)a1;
- (long long)_networkTypeFromWatchCarousel;
- (void)didStartTrackingNOI:(id)a0;
- (long long)_currentNetworkType;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_updatePowerStateWithService:(unsigned int)a0 shouldNotifyObservers:(BOOL)a1;
- (void)_handleCTServerConnectionNotification:(id)a0 userInfo:(id)a1;
- (void)_onQueue_updateNetworkReachabilityAndNotifyObservers:(BOOL)a0;
- (void)_onQueue_loadInitialThermalLevel;
- (void)_handleApplicationDidEnterForegroundNotification:(id)a0;
- (void)didStopTrackingNOI:(id)a0;
- (BOOL)_networkConstrained;
- (void)didStopTrackingAllNOIs:(id)a0;
- (long long)_currentCellularLinkQuality;
- (void)_onQueue_updateThermalLevelWithToken:(int)a0;
- (long long)_networkTypeFromTelephonyStatusIndicator:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_isWiFiAssociated;
- (void)_onQueue_updateTelephonyStateAndNotifyObservers:(BOOL)a0;

@end
