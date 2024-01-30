@interface AFAccessibilityState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long isVoiceOverTouchEnabled;
@property (readonly, nonatomic) long long isVibrationDisabled;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithIsVoiceOverTouchEnabled:(long long)a0 isVibrationDisabled:(long long)a1;

@end
