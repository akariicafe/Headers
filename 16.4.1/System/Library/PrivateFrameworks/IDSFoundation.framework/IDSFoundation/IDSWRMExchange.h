@class IDSWRMMetricContainer, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IDSWRMExchange : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    unsigned long long _recommendedLinkType;
    unsigned long long _activeLinkType;
    unsigned long long _activeRecommendationType;
    BOOL _registered;
    BOOL _subscribed;
    unsigned long long _reportInterval;
    BOOL _shouldSendReport;
    IDSWRMMetricContainer *_metrics;
    unsigned short _connectCount;
    unsigned long long _nearbyOverWiFi;
    BOOL _isPaired;
    BOOL _isNearby;
    BOOL _isConnected;
    int _isPairedNotifyToken;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id /* block */ _delegateBlock;
}

+ (id)sharedInstance;

- (void)_dispatchAfter:(double)a0 block:(id /* block */)a1;
- (void)submitMetric:(id)a0;
- (void)_notifyDelegate;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isBTRecommended;
- (BOOL)_isXPCDictionary:(id)a0;
- (id)_newMetricReportMessage;
- (id)_newPrefSubscribeMessage:(BOOL)a0;
- (id)_newRegisterMessage;
- (id)_newSubscribeMessage;
- (id)_newSubscribeStatusUpdateMessage;
- (id)_newSubscribeStatusUpdateMessage:(BOOL)a0 nearby:(BOOL)a1;
- (id)_newUnsubscribeMessage;
- (BOOL)_processLinkPreferenceNotificationEvent:(id)a0;
- (BOOL)_processMetricsConfigEvent:(id)a0;
- (void)_processXPCEvent:(id)a0;
- (BOOL)_processXPCMessage:(id)a0;
- (void)_reconnectUntilTimeout;
- (void)_registerWithWRM;
- (void)_resetLocalMetric;
- (void)_restartClient;
- (void)_restartSubscriptionIfNeeded;
- (void)_sendMetricReport;
- (void)_sendMetricReportPeriodically;
- (void)_sendXPCMessage:(id)a0;
- (BOOL)_setRecommendedLinkType:(unsigned long long)a0;
- (void)_setReportInterval:(unsigned long long)a0;
- (void)_startXPCConnection;
- (void)_stopXPCConnection;
- (void)_submitBlockAsync:(id /* block */)a0;
- (void)_updateLocalMetric:(id)a0;
- (void)handleActiveLinkChange:(unsigned long long)a0;
- (void)handleNetworkStateChangeUpdate:(BOOL)a0 nearby:(BOOL)a1;
- (BOOL)isWiFiRecommended;
- (unsigned long long)recommendedLinkType;
- (void)subscribeForRecommendation:(id)a0 recommendationType:(unsigned long long)a1 block:(id /* block */)a2;
- (void)unsubscribeForRecommendation;

@end
