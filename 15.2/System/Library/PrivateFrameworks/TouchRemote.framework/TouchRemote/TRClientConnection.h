@class SFSession;

@interface TRClientConnection : TRConnection

@property (retain) SFSession *session;

- (void)sendEvent:(id)a0;
- (id /* block */)invalidationHandler;
- (void)setInterruptionHandler:(id /* block */)a0;
- (void)setEventMessageHandler:(id /* block */)a0;
- (void)sendResponse:(id)a0;
- (void).cxx_destruct;
- (id /* block */)requestMessageHandler;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)eventMessageHandler;
- (void)setRequestMessageHandler:(id /* block */)a0;
- (void)sendRequest:(id)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)connectToNearbyDevice:(id)a0 withCompletion:(id /* block */)a1;

@end
