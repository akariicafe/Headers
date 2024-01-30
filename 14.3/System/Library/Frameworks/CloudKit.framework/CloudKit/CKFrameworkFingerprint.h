@class NSUUID, NSNumber;

@interface CKFrameworkFingerprint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSNumber *cpuType;
@property (copy, nonatomic) NSNumber *cpuSubtype;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)versionString;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)populate;
- (BOOL)isLikelyEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
