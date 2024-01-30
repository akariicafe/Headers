@interface ASDIAPInfoUpdateRequest : ASDEphemeralRequest

+ (long long)requestType;

- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)init;

@end
