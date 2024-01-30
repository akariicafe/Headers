@class HMDHomeManager, NSMutableDictionary, HMDSecureRemoteMessageTransport, HMDMessageFilterChain, HMDXPCMessageTransport, HMDSecureRemoteMessageFilter;

@interface HMDMessageDispatcher : HMFMessageDispatcher

@property (class, readonly) HMDMessageDispatcher *defaultDispatcher;

@property (retain, nonatomic) NSMutableDictionary *remoteGateways;
@property (retain, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) HMDXPCMessageTransport *XPCTransport;
@property (readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport;
@property (readonly, nonatomic) HMDMessageFilterChain *messageFilterChain;

+ (id)destinationWithTarget:(id)a0 userID:(id)a1 destination:(id)a2 multicast:(BOOL)a3;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)filterClasses;
- (void)dispatchMessage:(id)a0;
- (void)configureHomeManager:(id)a0;
- (id)residentCommunicationHandlerForHome:(id)a0;
- (void)sendSecureMessage:(id)a0 target:(id)a1 userID:(id)a2 destination:(id)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (id)remoteAccessDeviceForHome:(id)a0;
- (void)electDeviceForUser:(id)a0 destination:(id)a1 deviceCapabilities:(id)a2 responseTimeout:(double)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (void)setRemoteAccessDevice:(id)a0 forHome:(id)a1;
- (id)initWithXPCTransport:(id)a0 secureRemoteTransport:(id)a1 messageFilterChain:(id)a2;
- (void)handleSecureSessionError:(id)a0;
- (id)httpMessageTransport;
- (void)enableMessageServer;
- (void)disableMessageServer;
- (void)configureHTTPTransport:(id)a0;
- (void)_setRemoteAccessDevice:(id)a0 forHome:(id)a1 sendNotification:(BOOL)a2;
- (void)updateHome:(id)a0 configurationVersion:(long long)a1;
- (void)removeHome:(id)a0;
- (id)prepareAnswerForRequestedCapabilities:(id)a0;
- (void)setCompanionDevice:(id)a0 forHome:(id)a1;

@end
