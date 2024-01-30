@class NSString, NSXPCConnection;

@interface STAskForTimeClient : NSObject <STAskForTimeInterface>

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_asynchronousProxyWithHandler:(id /* block */)a0;
- (void)_synchronousProxyWithHandler:(id /* block */)a0;
- (void)approveExceptionForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)a0 usageType:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)handleAnswer:(long long)a0 requestIdentifier:(id)a1 timeApproved:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendAskForTimeRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
