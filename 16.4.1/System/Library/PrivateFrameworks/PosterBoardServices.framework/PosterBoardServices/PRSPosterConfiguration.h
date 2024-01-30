@class PRSPosterPath, NSURL, NSString;
@protocol BSInvalidatable;

@interface PRSPosterConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)assetDirectory;
- (id)loadUserInfoWithError:(out id *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)providerBundleIdentifier;
- (id)serverUUID;

@end
