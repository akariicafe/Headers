@interface ATXAppIntentDuetDataProvider : ATXDuetDataProvider

+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2;

@end
