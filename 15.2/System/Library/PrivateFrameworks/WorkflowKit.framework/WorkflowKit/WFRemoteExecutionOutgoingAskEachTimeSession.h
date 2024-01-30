@class WFRemoteExecutionAskEachTimeRequest;

@interface WFRemoteExecutionOutgoingAskEachTimeSession : WFRemoteExecutionSession

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) WFRemoteExecutionAskEachTimeRequest *request;

- (void)finish;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithService:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)sendToDestinations:(id)a0 options:(id)a1;
- (void)handleIncomingProtobuf:(id)a0;
- (void)handleTimeout;
- (double)timeoutLimitInSeconds;
- (void)finishWithoutCallingCompletion;

@end
