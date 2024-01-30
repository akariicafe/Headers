@class NSString, NSURL, NSURLSession, SAConnectionPolicyRoute, NSOperationQueue, SAConnectionPolicy, NSObject, SiriCoreConnectionType, NSURLSessionStreamTask, NSInputStream, NSOutputStream;
@protocol OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue, SiriCoreConnectionProviderDelegate;

@interface SiriCoreNetworkSessionProvider : NSObject <NSURLSessionDelegate, NSStreamDelegate, SiriCoreConnectionProvider> {
    id<SiriCoreConnectionProviderDelegate> _delegate;
    NSURL *_url;
    SAConnectionPolicyRoute *_route;
    SAConnectionPolicy *_policy;
    BOOL _prefersWWAN;
    BOOL _connectByPOPEnabled;
    BOOL _isMPTCP;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    NSString *_interfaceName;
    BOOL _isCanceled;
    BOOL _isEstablishing;
    BOOL _isReady;
    NSURLSession *_urlSession;
    NSOperationQueue *_opQueue;
    NSURLSessionStreamTask *_streamTask;
    id /* block */ _completion_block;
    NSString *_resolvedHost;
    NSString *_connectionId;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _readBuffer[10240];
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_group> *_readGroup;
    BOOL _waitingOnReadGroup;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    unsigned long long _readWriteCounter;
    double _staleConnectionInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getMetricsContext:(id /* block */)a0;

- (BOOL)isMultipath;
- (BOOL)isReady;
- (id)initWithQueue:(id)a0;
- (BOOL)isCanceled;
- (void)close;
- (void)setDelegate:(id)a0;
- (void)_closeWithError:(id)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 betterRouteDiscoveredForStreamTask:(id)a1;
- (void)readData:(id /* block */)a0;
- (id)delegate;
- (id)connectionType;
- (void)URLSession:(id)a0 streamTask:(id)a1 didBecomeInputStream:(id)a2 outputStream:(id)a3;
- (BOOL)hasActiveConnection;
- (void)writeData:(id)a0 completion:(id /* block */)a1;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)analysisInfo;
- (void)_invokeOpenCompletionWithError:(id)a0;
- (void)_streamDidBecomeUnviable;
- (void)_cancelOpenTimer;
- (void)_setupStaleConnectionTimer;
- (void)_setupOpenTimer;
- (void)_cancelStaleConnectionTimer;
- (BOOL)supportsInitialPayload;
- (void)openConnectionForURL:(id)a0 withConnectionId:(id)a1 initialPayload:(id)a2 completion:(id /* block */)a3;
- (id)headerDataWithForceReconnect:(BOOL)a0;
- (BOOL)shouldFallbackQuickly;
- (void)updateConnectionMetrics:(id)a0 completion:(id /* block */)a1;
- (BOOL)isPeerConnectionError:(id)a0;
- (BOOL)isPeerNotNearbyError:(id)a0;
- (BOOL)shouldFallbackFromError:(id)a0;
- (id)resolvedHost;
- (void)setProviderConnectionPolicy:(id)a0;
- (void)setPolicyRoute:(id)a0;
- (void)setPrefersWWAN:(BOOL)a0;
- (void)setConnectByPOPMethod:(BOOL)a0;
- (void)setScopeIsWiFiOnly;
- (void)setKeepAlive:(double)a0 withInterval:(double)a1 withCount:(unsigned long long)a2;
- (void)setRetransmitConnectionDropTime:(double)a0;
- (void)setStaleInterval:(double)a0;
- (BOOL)providerStatsIndicatePoorLinkQuality;
- (BOOL)isEstablishing;

@end
