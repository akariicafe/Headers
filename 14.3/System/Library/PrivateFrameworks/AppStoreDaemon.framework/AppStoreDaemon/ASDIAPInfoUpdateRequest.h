@interface ASDIAPInfoUpdateRequest : ASDEphemeralRequest

+ (long long)requestType;

- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
