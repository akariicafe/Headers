@interface ASDLaunchableAppsRequest : ASDEphemeralRequest

+ (long long)requestType;

- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithOptions:(id)a0;

@end
