@class PRSMutablePosterConfiguration, NSURL;

@interface CNPRSMutablePosterConfiguration : CNPRSPosterConfiguration

@property (readonly, copy, nonatomic) PRSMutablePosterConfiguration *wrappedMutablePosterConfiguration;
@property (copy, nonatomic) NSURL *assetDirectory;

- (id)init;
- (void).cxx_destruct;
- (BOOL)storeUserInfo:(id)a0 error:(out id *)a1;

@end
