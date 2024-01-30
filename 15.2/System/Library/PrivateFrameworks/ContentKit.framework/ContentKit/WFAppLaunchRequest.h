@interface WFAppLaunchRequest : INCAppLaunchRequest

@property (nonatomic) BOOL requiresUserFacingApp;

- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)rootCauseErrorFromError:(id)a0;
- (BOOL)isRequestForUserFacingApp;
- (id)readableErrorFromError:(id)a0;

@end
