@class SWWakingTimer, NSString, NEIKEv2Packet, NEIKEv2IKESA, NSMutableDictionary, NEIKEv2RTT, NEIPSecSASession, NSObject, NSMutableArray, NEIKEv2IKESAConfiguration, NEIKEv2ChildSAConfiguration, NEIKEv2ConfigurationMessage;
@protocol NEIKEv2ConfigurationDelegate, NEIKEv2PacketDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface NEIKEv2Session : NSObject <NEIKEv2TransportDelegate, NEIPSecSASessionDelegate> {
    BOOL _isListening;
    BOOL _ownsDatabaseSession;
    BOOL _ownsIPSecInterface;
    BOOL _isAborted;
    BOOL _isInvalidated;
    BOOL _isExpectingConfigBlock;
    BOOL _hasContactedConfigurationDelegate;
    BOOL _hasOutboundRequestInFlight;
    int _lastRequestMessageID;
    int _lastReceivedMessageID;
    int _previousMOBIKEMessageID;
    unsigned long long _state;
    NEIKEv2ConfigurationMessage *_assignedConfiguration;
    id /* block */ _ikeSocketHandler;
    NEIKEv2ChildSAConfiguration *_listenChildSAUserConfig;
    NEIPSecSASession *_databaseSession;
    NSMutableDictionary *_databaseLarvalSAs;
    NSMutableDictionary *_databaseSAs;
    id /* block */ _lastRequestReplyHandler;
    id /* block */ _waitingRequestHandler;
    NSMutableDictionary *_sentRequests;
    NSMutableDictionary *_sentReplies;
    NSMutableDictionary *_receivedRequests;
    NSMutableDictionary *_receivedReplies;
    NSMutableDictionary *_requestFragmentMaps;
    NSMutableDictionary *_replyFragmentMaps;
    NSObject<OS_dispatch_source> *_ikeLifetimeTimer;
    SWWakingTimer *_dpdTimer;
    NSObject<OS_dispatch_source> *_dpdDispatchTimer;
    NSMutableArray *_childSAs;
    NSObject<OS_dispatch_source> *_sendTimer;
    NSObject<OS_dispatch_source> *_receiveTimer;
    unsigned long long _uniqueIndex;
    NSMutableArray *_pendingRequestContexts;
    struct NEVirtualInterface_s { } *_ipsecInterface;
    NEIKEv2IKESA *_ikeSA;
    id<NEIKEv2ConfigurationDelegate> _configurationDelegate;
    id<NEIKEv2PacketDelegate> _packetDelegate;
    NEIKEv2RTT *_rttState;
    NSObject<OS_dispatch_queue> *_queue;
    NEIKEv2Packet *_previousMOBIKERequest;
    NEIKEv2IKESAConfiguration *_ikeConfig;
}

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) unsigned long long state;
@property (readonly) NEIKEv2ConfigurationMessage *assignedConfiguration;
@property void /* function */ *clientCallback;
@property void *clientCallbackInfo;
@property (copy) id /* block */ stateUpdateBlock;
@property (copy) id /* block */ childStateUpdateBlock;
@property (copy) id /* block */ configurationUpdateBlock;
@property (copy) id /* block */ trafficSelectorUpdateBlock;
@property (copy) id /* block */ additionalAddressesUpdateBlock;
@property (copy) id /* block */ shortDPDEventBlock;
@property (copy) id /* block */ redirectEventBlock;
@property (copy) id /* block */ privateNotifyStatusEvent;
@property (readonly) BOOL peerAuthenticated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateConfiguration:(id)a0;
- (void)connect;
- (void)disconnect;
- (void)reportError:(int)a0;
- (void)dealloc;
- (unsigned int)addChild:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)removeChild:(unsigned int)a0;
- (void)blackholeDetectedSA:(id)a0;
- (BOOL)checkSelectedChildSAProposal:(id)a0;
- (BOOL)checkSelectedIKEProposal:(id)a0;
- (void)deleteSA:(id)a0;
- (void)expireSA:(id)a0;
- (void)forceRekeyChild:(unsigned int)a0;
- (void)forceRekeyIKE;
- (void)idleTimeoutSA:(id)a0;
- (id)initWithIKEConfig:(id)a0 firstChildConfig:(id)a1 sessionConfig:(id)a2 queue:(id)a3 ipsecInterface:(struct NEVirtualInterface_s { } *)a4 ikeSocketHandler:(id /* block */)a5 kernelSASessionName:(id)a6 packetDelegate:(id)a7;
- (id)initWithIKEConfig:(id)a0 firstChildConfig:(id)a1 sessionConfig:(id)a2 queue:(id)a3 ipsecInterface:(struct NEVirtualInterface_s { } *)a4 ikeSocketHandler:(id /* block */)a5 saSession:(id)a6 packetDelegate:(id)a7;
- (void)invalidateWithCompletionHandler:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)receivePacket:(id)a0;
- (void)sendKeepaliveWithRetries:(unsigned int)a0 retryIntervalInMilliseconds:(unsigned long long)a1 callbackQueue:(id)a2 callback:(id /* block */)a3;
- (void)sendMOBIKEWithRetries:(unsigned int)a0 retryInterval:(unsigned long long)a1 interfaceName:(id)a2 invalidateTransport:(BOOL)a3 resetEndpoint:(id)a4 callbackQueue:(id)a5 callback:(id /* block */)a6;
- (void)sendPrivateNotifies:(id)a0 maxRetries:(unsigned int)a1 retryIntervalInMilliseconds:(unsigned long long)a2 callbackQueue:(id)a3 callback:(id /* block */)a4;

@end
