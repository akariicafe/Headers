@class NSNumber;

@interface DNDSMutableBehaviorSettingsRecord : DNDSBehaviorSettingsRecord

@property (copy, nonatomic) NSNumber *interruptionBehaviorSetting;

- (void)setInterruptionBehaviorSetting:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
