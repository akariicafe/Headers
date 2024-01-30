@class NSString;

@interface TRProxyAuthOperationHandler : NSObject <TROperationHandler>

@property (copy, nonatomic) id /* block */ proxyAuthHandler;
@property (copy, nonatomic) id /* block */ proxyAuthHandlerWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerMessageHandlersForSession:(id)a0;
- (void)_handleProxyAuthenticationRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handleProxyDeviceRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (id)initWithProxyAuthHandler:(id /* block */)a0;
- (id)initWithProxyAuthHandlerWithError:(id /* block */)a0;

@end
