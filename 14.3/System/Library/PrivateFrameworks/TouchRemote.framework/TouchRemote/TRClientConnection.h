@class SFSession;

@interface TRClientConnection : TRConnection

@property (retain) SFSession *session;

- (void)sendResponse:(id)a0;
- (id /* block */)requestMessageHandler;
- (void)setRequestMessageHandler:(id /* block */)a0;
- (void)sendRequest:(id)a0;
- (void).cxx_destruct;
- (void)setInterruptionHandler:(id /* block */)a0;
- (void)setEventMessageHandler:(id /* block */)a0;
- (void)sendEvent:(id)a0;
- (id /* block */)interruptionHandler;
- (void)setInvalidationHandler:(id /* block */)a0;
- (id /* block */)eventMessageHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)connectToNearbyDevice:(id)a0 withCompletion:(id /* block */)a1;

@end
