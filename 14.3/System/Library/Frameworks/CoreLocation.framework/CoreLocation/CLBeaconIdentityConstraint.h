@class NSUUID, NSNumber;

@interface CLBeaconIdentityConstraint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSNumber *major;
@property (readonly, copy, nonatomic) NSNumber *minor;

+ (id)any;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithUUID:(id)a0 major:(id)a1 minor:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1 minor:(unsigned short)a2;
- (void)encodeWithCoder:(id)a0;

@end
