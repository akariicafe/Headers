@class NSNumber, SiriCoreLinkRecommendationInfo, WRM_iRATInterface, NSHashTable, NSObject, SiriCoreWiFiManagerClient;
@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface SiriCoreNetworkManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    int _pathStatus;
    BOOL _pathUsesCellular;
    SiriCoreWiFiManagerClient *_wiFiManagerClient;
    BOOL _hasSymptomsBasedInstantCellQuality;
    BOOL _symptomsBasedInstantCellQualityIsGood;
    BOOL _hasSymptomsBasedInstantWiFiQuality;
    BOOL _symptomsBasedInstantWiFiQualityIsGood;
    BOOL _hasSymptomsBasedHistoricalCellQuality;
    BOOL _symptomsBasedHistoricalCellQualityIsGood;
    BOOL _hasSymptomsBasedHistoricalWiFiQuality;
    BOOL _symptomsBasedHistoricalWiFiQualityIsGood;
    BOOL _lastFetchInProgress;
    double _lastSuccessfulSymptomsFetch;
    NSNumber *_lastSignalStrength;
    unsigned long long _subscriptionCount;
    WRM_iRATInterface *_interface;
    BOOL _iRATCallInProgress;
    unsigned long long _iRATCallNumber;
    double _lastiRATFetch;
    SiriCoreLinkRecommendationInfo *_linkRecommendationInfo;
    SiriCoreLinkRecommendationInfo *_linkMetricsInfo;
}

+ (id)sharedInstance;
+ (long long)connectionSubTypeForCellularInterface;
+ (void)_ifnameTypeForName:(char *)a0 isWiFi:(BOOL *)a1 isCellular:(BOOL *)a2;
+ (void)getCarrierName:(id *)a0 signalStrength:(id *)a1 subscriptionCount:(id *)a2;
+ (id)connectionTypeForInterfaceName:(id)a0 isCellular:(BOOL)a1;
+ (long long)connectionTypeForInterface:(id)a0;
+ (void)acquireDormancySuspendAssertion:(const void **)a0;
+ (void)releaseDormancySuspendAssertion:(void *)a0;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)_stopMonitoringNetwork;
- (void)_pathUpdated:(id)a0;
- (void)_getNetworkPerformanceFeed;
- (long long)_reportCellularInstantQuality;
- (long long)_reportCellularHistoricalQuality;
- (long long)_reportWiFiInstantQuality;
- (long long)_reportWiFiHistoricalQuality;
- (void)getSignalStrength:(id *)a0 subscriptionCount:(unsigned long long *)a1;
- (void)releaseWiFiAssertion;
- (id)_wiFiManagerClient;
- (void)acquireWiFiAssertion:(long long)a0;
- (BOOL)_defaultBTLinkRecommendation;
- (BOOL)_defaultWiFiLinkRecommendation;
- (void)_subscribeToLinkRecommendations:(id)a0;
- (void)_getLinkRecommendationSafe:(BOOL)a0 recommendation:(id /* block */)a1;
- (void)resetLinkMetrics;
- (void)startMonitoringNetworkForHost:(id)a0;
- (void)stopMonitoringNetwork;
- (void)getNetworkPerformanceFeed;
- (long long)cellularNetworkQuality;
- (long long)wifiNetworkQuality;
- (long long)anyNetworkQuality;
- (void)getQualityReport:(id /* block */)a0;
- (void)forceFastDormancy;
- (void)registerWithWirelessCoexManager;
- (void)deRegisterWithWirelessCoexManager;
- (void)getLinkRecommendation:(BOOL)a0 recommendation:(id /* block */)a1;
- (void)updateLinkMetrics:(id)a0 completion:(id /* block */)a1;
- (BOOL)_getConnectionSuccessRate:(id)a0 hasMetric:(BOOL *)a1;

@end
