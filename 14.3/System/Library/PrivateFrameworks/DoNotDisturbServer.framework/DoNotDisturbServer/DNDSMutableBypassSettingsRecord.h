@class NSNumber, NSString;

@interface DNDSMutableBypassSettingsRecord : DNDSBypassSettingsRecord

@property (copy, nonatomic) NSNumber *immediateBypassEventSourceType;
@property (copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setImmediateBypassEventSourceType:(id)a0;
- (void)setImmediateBypassCNGroupIdentifier:(id)a0;
- (void)setRepeatEventSourceBehaviorEnabledSetting:(id)a0;

@end
