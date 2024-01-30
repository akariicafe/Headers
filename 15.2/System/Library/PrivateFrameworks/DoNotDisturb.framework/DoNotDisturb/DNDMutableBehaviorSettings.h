@interface DNDMutableBehaviorSettings : DNDBehaviorSettings

@property (nonatomic) unsigned long long interruptionBehavior;
@property (nonatomic) unsigned long long interruptionBehaviorSetting;

- (void)setInterruptionBehaviorSetting:(unsigned long long)a0;
- (void)setInterruptionBehavior:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
