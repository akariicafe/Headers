@interface BKSMutableHIDUISensorCharacteristics : BKSHIDUISensorCharacteristics

@property (nonatomic) BOOL hasDiscreteProximitySensor;

+ (id)new;

- (void)setHasDiscreteProximitySensor:(BOOL)a0;
- (id)init;

@end
