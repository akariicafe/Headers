@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isEmergencyText;

+ (id)convertFromEmergencyMode:(const struct EmergencyMode { int x0; int x1; int x2; BOOL x3; } *)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCTEmergencyMode:(id)a0;
- (id)initWithEnabled:(BOOL)a0 type:(long long)a1 isEmergencyText:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
