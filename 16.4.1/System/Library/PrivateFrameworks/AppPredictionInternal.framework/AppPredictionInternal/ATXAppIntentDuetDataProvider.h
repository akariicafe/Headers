@interface ATXAppIntentDuetDataProvider : ATXDuetDataProvider

+ (Class)supportedDuetEventClass;
+ (long long)supportedCoreDuetStream;

- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2;

@end
