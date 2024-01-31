@class NSURL, NSString, PRSPosterConfiguration;

@interface CNPRSPosterConfiguration : NSObject

@property (readonly, copy, nonatomic) PRSPosterConfiguration *wrappedPosterConfiguration;
@property (copy, nonatomic) NSURL *assetDirectory;
@property (readonly, copy, nonatomic) NSString *providerBundleIdentifier;

- (id)loadUserInfoWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)initWithPosterConfiguration:(id)a0;
- (id)serverUUID;

@end
