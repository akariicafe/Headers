@class NSNumber;

@interface DNDSMutableBehaviorSettingsRecord : DNDSBehaviorSettingsRecord

@property (copy, nonatomic) NSNumber *interruptionBehaviorSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInterruptionBehaviorSetting:(id)a0;

@end
