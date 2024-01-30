@class ASDInstallManifestRequestOptions;

@interface ASDInstallManifestRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDInstallManifestRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
