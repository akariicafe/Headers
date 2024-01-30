@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isEmergencyText;
@property (nonatomic) BOOL isEmergencySetup;
@property (nonatomic) long long state;
@property (readonly, nonatomic) BOOL isStewieActive;

+ (id)convertFromEmergencyMode:(const struct EmergencyMode { int x0; int x1; int x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnabled:(BOOL)a0 type:(long long)a1 isEmergencyText:(BOOL)a2 isEmergencySetup:(BOOL)a3 isStewieActive:(BOOL)a4 state:(long long)a5;
- (id)initWithEnabled:(BOOL)a0 type:(long long)a1 isEmergencyText:(BOOL)a2 isEmergencySetup:(BOOL)a3 state:(long long)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEnabled:(BOOL)a0 type:(long long)a1 isEmergencyText:(BOOL)a2;
- (id)initWithEnabled:(BOOL)a0 type:(long long)a1 isEmergencyText:(BOOL)a2 isEmergencySetup:(BOOL)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithEnabled:(BOOL)a0 type:(long long)a1 isEmergencyText:(BOOL)a2 isEmergencySetup:(BOOL)a3 isStewieActive:(BOOL)a4;
- (id)init;
- (id)description;
- (BOOL)isEqualToCTEmergencyMode:(id)a0;

@end
