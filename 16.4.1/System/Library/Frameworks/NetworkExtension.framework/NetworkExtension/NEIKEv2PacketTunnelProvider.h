@class NWPath, NEIKEv2Session, NSArray, NWPathEvaluator, NEIKEv2Server, NSDictionary, NEIKEv2MOBIKE, NSObject, NEUserNotification, NWResolver, NEIKEv2Rekey;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider {
    BOOL _isIfCellular;
    BOOL _hasNAT;
    BOOL _dispose;
    BOOL _sessionDidConnect;
    BOOL _mobikeCapable;
    BOOL _authenticationPrompted;
    BOOL _isObserving;
    BOOL _shouldRetryWithRandomLocalPort;
    unsigned int _flags;
    NSArray *_ikeConfig;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSDictionary *_options;
    struct NEVirtualInterface_s { } *_virtualInterface;
    NEIKEv2Server *_server;
    NWResolver *_resolver;
    NSObject<OS_dispatch_source> *_resolverWaitTimer;
    NEIKEv2Rekey *_rekey;
    NSObject<OS_dispatch_semaphore> *_getSocketSemaphore;
    NEIKEv2MOBIKE *_mobikeHandle;
    id /* block */ _startTunnelCompletionHandler;
    id /* block */ _stopTunnelCompletionHandler;
    id /* block */ _dnsResolverCompletionHandler;
    long long _tunnelKind;
    NWPath *_path;
    NEUserNotification *_g_notification;
    unsigned long long _randomLocalPortFallbackRetryCount;
    NEIKEv2Session *_session;
    unsigned long long _ifIndex;
    long long _pathStatus;
    NSObject<OS_dispatch_queue> *_queue;
    NWPathEvaluator *_scopedPathEvaluator;
}

- (void)wake;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)observerHelperHandler:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setTunnelNetworkSettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)startTunnelWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopTunnelWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end
