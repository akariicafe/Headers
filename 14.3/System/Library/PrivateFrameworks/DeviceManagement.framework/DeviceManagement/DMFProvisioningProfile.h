@class NSString, NSDate;

@interface DMFProvisioningProfile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 name:(id)a1 expirationDate:(id)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
