@class ASDPurgeableAppRequestOptions;

@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurgeableAppRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
