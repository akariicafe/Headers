@class NEIKEv2Transport, NEIKEv2IKESAConfiguration, NSString, NEIPSecSASession, NSObject, NSMutableArray;
@protocol NEIKEv2ListenerDelegate, NEIKEv2PacketDelegate, OS_dispatch_queue, OS_nw_listener;

@interface NEIKEv2Listener : NSObject <NEIKEv2TransportDelegate, NEIKEv2ConfigurationDelegate>

@property (retain, nonatomic) NEIKEv2IKESAConfiguration *ikeConfig;
@property (retain, nonatomic) NEIPSecSASession *saSession;
@property (retain, nonatomic) NSString *kernelSASessionName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *listenerQueue;
@property (retain, nonatomic) NSObject<OS_nw_listener> *listener;
@property (retain, nonatomic) NSMutableArray *sessionsBeforeAuth;
@property (retain, nonatomic) NEIKEv2Transport *transport;
@property (weak, nonatomic) id<NEIKEv2ListenerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<NEIKEv2PacketDelegate> packetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)handleNewConnection:(id)a0;
- (void)requestConfigurationForSession:(id)a0 sessionConfig:(id)a1 childConfig:(id)a2 validateAuthBlock:(id /* block */)a3 responseBlock:(id /* block */)a4;
- (void)receivePacket:(id)a0;
- (id)initWithListenerIKEConfig:(id)a0 kernelSASessionName:(id)a1 listenerUDPPort:(id)a2 listenerQueue:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;
- (id)initWithListenerIKEConfig:(id)a0 saSession:(id)a1 kernelSASessionName:(id)a2 listenerUDPPort:(id)a3 listenerInterface:(id)a4 listenerQueue:(id)a5 delegate:(id)a6 delegateQueue:(id)a7;
- (void)sessionFailedBeforeRequestingConfiguration:(id)a0;
- (id)initWithListenerIKEConfig:(id)a0 saSession:(id)a1 kernelSASessionName:(id)a2 packetDelegate:(id)a3 listenerQueue:(id)a4 delegate:(id)a5 delegateQueue:(id)a6;
- (id)initWithListenerIKEConfig:(id)a0 saSession:(id)a1 listenerUDPPort:(id)a2 listenerQueue:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;
- (id)initWithListenerIKEConfig:(id)a0 saSession:(id)a1 listenerUDPPort:(id)a2 listenerInterface:(id)a3 listenerQueue:(id)a4 delegate:(id)a5 delegateQueue:(id)a6;
- (id)initWithListenerIKEConfig:(id)a0 saSession:(id)a1 packetDelegate:(id)a2 listenerQueue:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;
- (void)reportError:(int)a0;
- (id)initWithListenerIKEConfig:(id)a0 kernelSASessionName:(id)a1 listenerUDPPort:(id)a2 listenerInterface:(id)a3 listenerQueue:(id)a4 delegate:(id)a5 delegateQueue:(id)a6;
- (id)initWithListenerIKEConfig:(id)a0 kernelSASessionName:(id)a1 packetDelegate:(id)a2 listenerQueue:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;

@end
