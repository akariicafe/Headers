@class NSString, NSDateComponents;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventDateRule : NSObject

@property (weak, nonatomic) id<CLSHolidayCalendarEventDateRuleDelegate> delegate;
@property (copy, nonatomic) NSDateComponents *simpleRuleComponents;
@property (nonatomic) long long startYear;
@property (nonatomic) long long endYear;
@property (nonatomic) long long offsetDays;
@property (copy, nonatomic) NSString *relativeToRuleUUID;

- (BOOL)hasStartYear;
- (BOOL)matchesExplicitYear:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)localDateByEvaluatingRuleForYear:(long long)a0;
- (id)initWithEventDescription:(id)a0;
- (BOOL)hasEndYear;
- (id)_stringDescriptionForDateRuleComponentValue:(long long)a0;
- (BOOL)hasExplicitYear;

@end
