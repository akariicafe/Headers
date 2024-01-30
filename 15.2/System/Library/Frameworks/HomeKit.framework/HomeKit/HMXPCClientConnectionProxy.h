@class NSString, HMXPCClient;

@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCClientMessageHandling>

@property (weak) HMXPCClient *client;
@property (copy, nonatomic) id /* block */ refreshHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMessage:(id)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithRefreshHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (void)fetchUserInfo:(id /* block */)a0;

@end
