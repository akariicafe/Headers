@interface WFSlackPostAction : WFAction

- (id)contentDestinationWithError:(id *)a0;
- (void)initializeParameters;
- (BOOL)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
