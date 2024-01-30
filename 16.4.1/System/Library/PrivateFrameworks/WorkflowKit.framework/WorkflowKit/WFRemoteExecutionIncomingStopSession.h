@interface WFRemoteExecutionIncomingStopSession : WFRemoteExecutionSession

- (void)finishWithError:(id)a0;
- (void)handleIncomingProtobuf:(id)a0 currentlyActiveSessions:(id)a1;

@end
