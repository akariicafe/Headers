@interface DACDeviceRole : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;

+ (id)unknownRole;

- (BOOL)isPrimary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isUnknown;
- (BOOL)satisfiesRole:(id)a0;
- (BOOL)_isEqualToRole:(id)a0;
- (id)_initWithRoleFlags:(unsigned long long)a0;

@end
