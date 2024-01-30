@interface DMFSecurityInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL supportsBlockLevelEncryption;
@property (readonly, nonatomic) BOOL supportsFileLevelEncryption;
@property (readonly, nonatomic) BOOL passcodeIsSet;
@property (readonly, nonatomic) BOOL passcodeIsCompliantWithGlobalRestrictions;
@property (readonly, nonatomic) BOOL passcodeIsCompliantWithProfileRestrictions;
@property (readonly, nonatomic) unsigned long long passcodeLockGracePeriod;
@property (readonly, nonatomic) unsigned long long passcodeLockGracePeriodEnforced;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithSupportsBlockLevelEncryption:(BOOL)a0 supportsFileLevelEncryption:(BOOL)a1 passcodeIsSet:(BOOL)a2 passcodeIsCompliantWithGlobalRestrictions:(BOOL)a3 passcodeIsCompliantWithProfileRestrictions:(BOOL)a4 passcodeLockGracePeriodEnforced:(unsigned long long)a5 passcodeLockGracePeriod:(unsigned long long)a6;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
