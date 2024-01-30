@class DNDSScheduleSettingsRecord, DNDSBypassSettingsRecord, DNDSBehaviorSettingsRecord;

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (copy, nonatomic) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (copy, nonatomic) DNDSScheduleSettingsRecord *scheduleSettings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBehaviorSettings:(id)a0;
- (void)setPhoneCallBypassSettings:(id)a0;
- (void)setScheduleSettings:(id)a0;

@end
