@class NSArray, NSString;

@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate>

@property (retain, nonatomic) NSArray *eventRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enumerateEventRulesBetweenLocalDate:(id)a0 andLocalDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)eventRuleForLocalDate:(id)a0;
- (id)_ruleWithUUID:(id)a0;
- (id)initWithLocale:(id)a0 calendarSourcesURL:(id)a1;
- (id)initWithLocale:(id)a0;
- (id)dateForRuleWithUUID:(id)a0 byEvaluatingForYear:(long long)a1;

@end
