@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (id)settingsForRecord:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)settingsWithClientSettings:(id)a0 creationDate:(id)a1;
+ (id)defaultScheduleSettings;

- (id)replacementObjectForCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)makeRecord;
- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2 creationDate:(id)a3;

@end
