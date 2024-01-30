@class CTEmergencyMode, CTXPCServiceSubscriptionContext;

@interface CTEmergencyModeResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CTEmergencyMode *mode;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *context;

- (id)initWithMode:(id)a0 andContext:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
