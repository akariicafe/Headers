@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor

@property (readonly, nonatomic) unsigned int biometricEventType;

+ (id)descriptorWithBiometricEventType:(unsigned int)a0;
+ (BOOL)supportsSecureCoding;

- (BOOL)describes:(id)a0;
- (id)initWithBiometricEventType:(unsigned int)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
