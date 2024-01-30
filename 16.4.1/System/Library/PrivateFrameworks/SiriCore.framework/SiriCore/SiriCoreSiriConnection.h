@class SiriCoreSiriBackgroundConnection, NSString, NSURL, NSError, SAConnectionPolicy, NSObject, NSMutableSet, NSMutableArray;
@protocol SiriCoreSiriConnectionDelegate, OS_dispatch_queue, OS_dispatch_group;

@interface SiriCoreSiriConnection : NSObject <SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCanceled;
    BOOL _sendPings;
    BOOL _isCanceledInternal;
    NSMutableSet *_pendingBackgroundConnections;
    NSMutableSet *_comatoseBackgroundConnections;
    NSMutableSet *_scheduledRoutes;
    SiriCoreSiriBackgroundConnection *_activeBackgroundConnection;
    NSObject<OS_dispatch_group> *_activeConnectionGroup;
    NSMutableArray *_connMethodUsedHistory;
}

@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SiriCoreSiriConnectionDelegate> delegate;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) BOOL prefersWWAN;
@property (nonatomic) BOOL skipPeer;
@property (nonatomic) BOOL useWiFiHint;
@property (copy, nonatomic) NSError *skipPeerError;
@property (nonatomic) BOOL forceReconnect;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *peerType;
@property (copy, nonatomic) NSString *peerVersion;
@property (copy, nonatomic) NSString *productTypePrefix;
@property (nonatomic) BOOL usesProxyConnection;
@property (nonatomic) BOOL deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) BOOL siriConnectionUsesPeerManagedSync;
@property (retain, nonatomic) Class peerProviderClass;
@property (copy, nonatomic) NSString *connectionId;
@property (nonatomic) BOOL imposePolicyBan;

- (void)dealloc;
- (void)barrier:(id /* block */)a0;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)probeConnection;
- (id)_connectionInfoForRoute:(id)a0 policy:(id)a1;
- (void)_accessPotentiallyActiveConnections:(id /* block */)a0;
- (id)_activeOrAnyPendingConnection;
- (void)_cancelSynchronously:(id /* block */)a0;
- (void)_handleLastEventFromBackgroundConnection:(id)a0 pendingConnectionExhaustionHandler:(id /* block */)a1;
- (void)_recordConnectionMethodForMetrics:(id)a0;
- (void)_scheduleBackgroundConnectionWithRoute:(id)a0 delay:(double)a1 policy:(id)a2;
- (void)_startBackgroundConnectionWithRoute:(id)a0 policy:(id)a1;
- (void)_waitForActiveConnection:(id /* block */)a0;
- (id)analysisInfo;
- (void)cancelSynchronously:(BOOL)a0 onQueue:(BOOL)a1 completion:(id /* block */)a2;
- (void)getAnalysisInfo:(id /* block */)a0;
- (void)getConnectionMetricsSynchronously:(BOOL)a0 completion:(id /* block */)a1;
- (void)sendCommand:(id)a0 errorHandler:(id /* block */)a1;
- (void)sendCommands:(id)a0 errorHandler:(id /* block */)a1;
- (void)setSendPings:(BOOL)a0;
- (void)siriBackgroundConnection:(id)a0 didEncounterError:(id)a1 analysisInfo:(id)a2;
- (void)siriBackgroundConnection:(id)a0 didEncounterIntermediateError:(id)a1;
- (void)siriBackgroundConnection:(id)a0 didOpenWithConnectionType:(id)a1 routeId:(id)a2 delay:(double)a3;
- (void)siriBackgroundConnection:(id)a0 didReceiveAceObject:(id)a1;
- (void)siriBackgroundConnection:(id)a0 willStartConnectionWithHTTPHeader:(id)a1;
- (void)siriBackgroundConnection:(id)a0 willStartWithConnectionType:(id)a1;
- (void)siriBackgroundConnectionDidClose:(id)a0;

@end
