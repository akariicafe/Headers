@interface DNDMutableBehaviorSettings : DNDBehaviorSettings

@property (nonatomic) unsigned long long interruptionBehavior;
@property (nonatomic) unsigned long long interruptionBehaviorSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInterruptionBehaviorSetting:(unsigned long long)a0;
- (void)setInterruptionBehavior:(unsigned long long)a0;

@end
