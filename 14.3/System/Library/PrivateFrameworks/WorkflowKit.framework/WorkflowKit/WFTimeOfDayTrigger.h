@class NSArray, NSDateComponents, NSNumber;

@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long event;
@property (nonatomic) unsigned long long timeOffset;
@property (retain, nonatomic) NSDateComponents *time;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSArray *daysOfWeek;
@property (copy, nonatomic) NSNumber *dayOfMonth;

+ (id)dateFormatter;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)localizedRecurrenceDescriptionForDaysOfWeek:(id)a0 dayOfMonth:(id)a1 mode:(unsigned long long)a2;
+ (id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)a0 timeOffset:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
