@class ASDPurgeableAppRequestOptions;

@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurgeableAppRequestOptions *options;

+ (long long)requestType;

- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithOptions:(id)a0;

@end
