@interface DNDBehaviorSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long interruptionBehavior;
@property (readonly, nonatomic) unsigned long long interruptionBehaviorSetting;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithInterruptionBehaviorSetting:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)_initWithSettings:(id)a0;
- (unsigned long long)interruptionBehavior;

@end
