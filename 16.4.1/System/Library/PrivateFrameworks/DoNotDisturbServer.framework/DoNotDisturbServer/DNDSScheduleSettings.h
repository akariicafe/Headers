@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (id)defaultScheduleSettings;
+ (BOOL)supportsSecureCoding;
+ (id)settingsForRecord:(id)a0;
+ (id)settingsWithClientSettings:(id)a0 creationDate:(id)a1;

- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)a0;
- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2 creationDate:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)makeRecord;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
