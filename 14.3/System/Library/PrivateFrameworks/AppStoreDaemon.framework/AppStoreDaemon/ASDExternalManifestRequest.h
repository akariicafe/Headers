@class ASDExternalManifestRequestOptions;

@interface ASDExternalManifestRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDExternalManifestRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
