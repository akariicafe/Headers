@interface WFSelectFilesAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)contentDestinationWithError:(id *)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;

@end
