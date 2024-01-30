@class NSString, CLSHolidayCalendarEventRuleRequiredTraits, NSArray;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventRule : NSObject

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) CLSHolidayCalendarEventRuleRequiredTraits *requiredTraits;
@property (readonly, nonatomic) NSArray *dateRules;
@property (readonly, nonatomic) BOOL checkWeekends;
@property (weak, nonatomic) id<CLSHolidayCalendarEventDateRuleDelegate> dateRuleDelegate;
@property (readonly, nonatomic) BOOL isCelebration;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) BOOL allowSceneClassificationBasedEvaluation;

+ (id)localizedNameForName:(id)a0;

- (BOOL)evaluateWithLocalDate:(id)a0 traits:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isMatchingOnlyLocalDate:(id)a0;
- (unsigned long long)hash;
- (BOOL)evaluateOnlyTraits:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_dateRuleForYear:(long long)a0;
- (id)_datesFromWeekendWithStartDate:(id)a0 withDuration:(double)a1;
- (id)localDatesByEvaluatingRuleForYear:(long long)a0;
- (id)initWithEventDescription:(id)a0;

@end
