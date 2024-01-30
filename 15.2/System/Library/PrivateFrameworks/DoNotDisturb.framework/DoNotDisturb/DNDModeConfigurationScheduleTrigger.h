@class DNDScheduleTimePeriod, NSDate;

@interface DNDModeConfigurationScheduleTrigger : DNDModeConfigurationTrigger {
    NSDate *_creationdate;
}

@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) DNDScheduleTimePeriod *timePeriod;

+ (BOOL)supportsSecureCoding;
+ (id)defaultScheduleTrigger;
+ (id)triggerWithClientTrigger:(id)a0 creationDate:(id)a1;

- (BOOL)isEnabled;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithTimePeriod:(id)a0 creationDate:(id)a1 enabledSetting:(unsigned long long)a2;
- (id)initWithTimePeriod:(id)a0 enabledSetting:(unsigned long long)a1;

@end
