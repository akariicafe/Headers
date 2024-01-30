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

- (id)init;
- (void).cxx_destruct;
- (void)_notifyDelegate;
- (void)dealloc;
- (void)_resetLocalMetric;
- (void)_startXPCConnection;
- (void)_registerWithWRM;
- (void)_stopXPCConnection;
- (void)_processXPCEvent:(id)a0;
- (void)_restartSubscriptionIfNeeded;
- (id)_newSubscribeStatusUpdateMessage;
- (void)_sendXPCMessage:(id)a0;
- (void)_submitBlockAsync:(id /* block */)a0;
- (BOOL)_processXPCMessage:(id)a0;
- (void)_reconnectUntilTimeout;
- (void)_restartClient;
- (void)_dispatchAfter:(double)a0 block:(id /* block */)a1;
- (BOOL)_isXPCDictionary:(id)a0;
- (id)_newPrefSubscribeMessage:(BOOL)a0;
- (id)_newRegisterMessage;
- (void)unsubscribeForRecommendation;
- (id)_newSubscribeMessage;
- (id)_newUnsubscribeMessage;
- (BOOL)_setRecommendedLinkType:(unsigned long long)a0;
- (BOOL)_processLinkPreferenceNotificationEvent:(id)a0;
- (BOOL)_processMetricsConfigEvent:(id)a0;
- (void)_sendMetricReportPeriodically;
- (void)_setReportInterval:(unsigned long long)a0;
- (id)_newMetricReportMessage;
- (void)_sendMetricReport;
- (void)_updateLocalMetric:(id)a0;
- (id)_newSubscribeStatusUpdateMessage:(BOOL)a0 nearby:(BOOL)a1;
- (void)subscribeForRecommendation:(id)a0 recommendationType:(unsigned long long)a1 block:(id /* block */)a2;
- (BOOL)isWiFiRecommended;
- (BOOL)isBTRecommended;
- (void)handleActiveLinkChange:(unsigned long long)a0;
- (void)handleNetworkStateChangeUpdate:(BOOL)a0 nearby:(BOOL)a1;
- (unsigned long long)recommendedLinkType;
- (void)submitMetric:(id)a0;

@end
