@class WFRemoteExecutionAceCommandRequestResponse;

@interface WFRemoteExecutionIncomingAceCommandSession : WFRemoteExecutionSession

@property (retain, nonatomic) WFRemoteExecutionAceCommandRequestResponse *response;

- (void).cxx_destruct;
- (void)handleIncomingProtobuf:(id)a0 destinations:(id)a1 options:(id)a2;
- (void)sendResponseWithOriginatingRequestIdentifier:(id)a0 aceCommandResponseDictionary:(id)a1 error:(id)a2 destinations:(id)a3 options:(id)a4;
- (void)sendToDestinations:(id)a0 options:(id)a1;

@end
