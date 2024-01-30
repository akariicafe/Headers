@class WFGiphySessionManager;

@interface WFGiphyAction : WFAction

@property (readonly, nonatomic) WFGiphySessionManager *sessionManager;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)runWithNoUserInterface;

@end
