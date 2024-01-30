@protocol GTURLAccessProvider;

@interface GTURLAccessProviderXPCDispatcher : GTXPCDispatcher <GTURLAccessProviderXPCDispatcher> {
    id<GTURLAccessProvider> _service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)makeURL_:(id)a0 replyConnection:(id)a1;
- (void)securityScopedURLFromSandboxID_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)transferIdentifier_fromDevice_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)urlForPath_:(id)a0 replyConnection:(id)a1;

@end
