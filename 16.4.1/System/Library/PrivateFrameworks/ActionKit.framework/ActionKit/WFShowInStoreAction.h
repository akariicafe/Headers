@interface WFShowInStoreAction : WFAction

+ (id)userInterfaceProtocol;

- (id)contentDestinationWithError:(id *)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;

@end
