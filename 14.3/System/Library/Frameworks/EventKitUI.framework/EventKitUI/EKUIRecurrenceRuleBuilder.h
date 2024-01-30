@class NSArray;

@interface EKUIRecurrenceRuleBuilder : NSObject

@property long long frequency;
@property long long interval;
@property unsigned long long count;
@property (retain) NSArray *dayNumbers;
@property int days;
@property int ordinalValue;
@property (retain) NSArray *monthNumbers;

- (id)recurrenceRule;
- (void)_setDefaultValues;
- (long long)_frequencyToUse;
- (id)daysOfTheWeekWithWeek:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)setPositions;
- (id)daysOfTheWeek;

@end
