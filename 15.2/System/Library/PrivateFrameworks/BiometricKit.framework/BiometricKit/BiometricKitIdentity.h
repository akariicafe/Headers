@class NSUUID, NSString, NSDate;

@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int userID;
@property (nonatomic) int type;
@property (nonatomic) int attribute;
@property (nonatomic) int entity;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationTime;
@property (nonatomic) long long matchCount;
@property (nonatomic) long long updateCount;
@property (nonatomic) unsigned int flags;

+ (id)biometricKitIdentity;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToIdentity:(id)a0;

@end
