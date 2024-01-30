@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSConfigurationsRecord, DNDSScheduleSettingsRecord;

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (copy, nonatomic) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (copy, nonatomic) DNDSScheduleSettingsRecord *scheduleSettings;
@property (copy, nonatomic) DNDSConfigurationsRecord *configurations;

- (void)setScheduleSettings:(id)a0;
- (void)setConfigurations:(id)a0;
- (void)setBehaviorSettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPhoneCallBypassSettings:(id)a0;

@end
