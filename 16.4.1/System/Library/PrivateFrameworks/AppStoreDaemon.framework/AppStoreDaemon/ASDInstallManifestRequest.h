@class ASDInstallManifestRequestOptions;

@interface ASDInstallManifestRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDInstallManifestRequestOptions *options;

+ (long long)requestType;

- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithOptions:(id)a0;

@end
