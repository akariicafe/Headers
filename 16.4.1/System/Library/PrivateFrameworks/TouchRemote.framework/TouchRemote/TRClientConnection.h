@class SFSession;

@interface TRClientConnection : TRConnection

@property (retain) SFSession *session;

- (void)sendResponse:(id)a0;
- (id /* block */)requestMessageHandler;
- (void)sendEvent:(id)a0;
- (void)sendRequest:(id)a0;
- (id /* block */)invalidationHandler;
- (void)setInvalidationHandler:(id /* block */)a0;
- (id /* block */)eventMessageHandler;
- (void)setInterruptionHandler:(id /* block */)a0;
- (void)setRequestMessageHandler:(id /* block */)a0;
- (id /* block */)interruptionHandler;
- (void)setEventMessageHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)connectToNearbyDevice:(id)a0 withCompletion:(id /* block */)a1;

@end
