@interface WFAppLaunchRequest : INCAppLaunchRequest

- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)rootCauseErrorFromError:(id)a0;
- (id)readableErrorFromError:(id)a0;

@end
