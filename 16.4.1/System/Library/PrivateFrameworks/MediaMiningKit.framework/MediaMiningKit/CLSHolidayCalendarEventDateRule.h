@class NSString, NSDateComponents;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventDateRule : NSObject

@property (weak, nonatomic) id<CLSHolidayCalendarEventDateRuleDelegate> delegate;
@property (copy, nonatomic) NSDateComponents *simpleRuleComponents;
@property (nonatomic) long long startYear;
@property (nonatomic) long long endYear;
@property (nonatomic) long long offsetDays;
@property (copy, nonatomic) NSString *relativeToRuleUUID;

- (id)description;
- (void).cxx_destruct;
- (BOOL)hasExplicitYear;
- (id)_stringDescriptionForDateRuleComponentValue:(long long)a0;
- (BOOL)hasEndYear;
- (BOOL)hasStartYear;
- (id)initWithEventDescription:(id)a0;
- (id)localDateByEvaluatingRuleForYear:(long long)a0;
- (BOOL)matchesExplicitYear:(long long)a0;

@end
