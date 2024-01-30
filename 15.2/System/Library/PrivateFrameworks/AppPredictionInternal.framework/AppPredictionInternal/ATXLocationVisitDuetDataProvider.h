@interface ATXLocationVisitDuetDataProvider : ATXDuetDataProvider

+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4;

@end
