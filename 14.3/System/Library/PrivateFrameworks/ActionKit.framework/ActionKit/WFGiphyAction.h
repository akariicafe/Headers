@class WFGiphySessionManager;

@interface WFGiphyAction : WFAction

@property (readonly, nonatomic) WFGiphySessionManager *sessionManager;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)targetContentAttribution;
- (void)runWithNoUserInterface;

@end
