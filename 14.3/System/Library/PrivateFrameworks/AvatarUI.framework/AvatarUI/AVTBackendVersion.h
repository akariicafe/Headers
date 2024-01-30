@interface AVTBackendVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double backendVersion;
@property (readonly, nonatomic) double avatarKitVersion;

+ (id)versionFileLocationForStoreLocation:(id)a0;
+ (id)versionFromDiskAtLocation:(id)a0 error:(id *)a1;
+ (id)currentVersion;

- (id)initWithBackendVersion:(double)a0 avatarKitVersion:(double)a1;
- (BOOL)saveToDiskAtLocation:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
