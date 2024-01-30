@interface WFRemoteExecutionOutgoingAlertSession : WFRemoteExecutionSession

@property (readonly, copy, nonatomic) id /* block */ completion;

- (void)finish;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleIncomingProtobuf:(id)a0;
- (void)handleTimeout;
- (id)initWithService:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)sendToDestinations:(id)a0 options:(id)a1;
- (double)timeoutLimitInSeconds;

@end
