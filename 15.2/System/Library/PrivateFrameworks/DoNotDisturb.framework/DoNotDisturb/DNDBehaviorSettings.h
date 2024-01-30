@interface DNDBehaviorSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long interruptionBehavior;
@property (readonly, nonatomic) unsigned long long interruptionBehaviorSetting;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_initWithInterruptionBehaviorSetting:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithSettings:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)interruptionBehavior;

@end
