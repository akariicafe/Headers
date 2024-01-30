@class WFRemoteExecutionAceCommandRequest;

@interface WFRemoteExecutionOutgoingAceCommandSession : WFRemoteExecutionSession

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) WFRemoteExecutionAceCommandRequest *request;

- (void)finish;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleIncomingProtobuf:(id)a0;
- (id)initWithService:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)sendToDestinations:(id)a0 options:(id)a1;

@end
