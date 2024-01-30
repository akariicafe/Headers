@class HMDHTTPDevice, NSUUID, HMFHTTPClient, NSString, HMFNetService;
@protocol HMDHTTPClientMessageTransportDelegate, HMFLocking;

@interface HMDHTTPClientMessageTransport : HMFObject <HMFHTTPClientDelegate, HMFLogging, HMFNetServiceDelegate> {
    id<HMFLocking> _lock;
}

@property (readonly, nonatomic) HMFHTTPClient *client;
@property (nonatomic, getter=isRunning) BOOL running;
@property (weak) id<HMDHTTPClientMessageTransportDelegate> delegate;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) HMFNetService *netService;
@property (readonly, nonatomic) HMDHTTPDevice *remoteDevice;
@property (readonly, copy) NSUUID *sessionIdentifier;
@property (readonly, nonatomic, getter=isReachable) BOOL reachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)shortDescription;
- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)logIdentifier;
- (void)sendMessage:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (id)initWithIdentifier:(id)a0 netService:(id)a1;
- (void)netService:(id)a0 didUpdateTXTRecord:(id)a1;
- (void)_stopWithError:(id)a0;
- (void)_receiveMessage;
- (void)_sendResponseMessage:(id)a0 forTransactionIdentifier:(id)a1;
- (void)sendPingWithCompletionHandler:(id /* block */)a0;
- (void)client:(id)a0 didRequestPingWithCompletionHandler:(id /* block */)a1;
- (void)clientDidBecomeUnreachable:(id)a0;

@end
