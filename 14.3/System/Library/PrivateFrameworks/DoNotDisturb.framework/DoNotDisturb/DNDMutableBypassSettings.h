@class NSString;

@interface DNDMutableBypassSettings : DNDBypassSettings

@property (nonatomic) unsigned long long immediateBypassEventSourceType;
@property (copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (nonatomic) unsigned long long repeatEventSourceBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setImmediateBypassEventSourceType:(unsigned long long)a0;
- (void)setImmediateBypassCNGroupIdentifier:(id)a0;
- (void)setRepeatEventSourceBehaviorEnabledSetting:(unsigned long long)a0;

@end
