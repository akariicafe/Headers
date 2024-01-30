@interface ATXTripDuetDataProvider : ATXDuetDataProvider

+ (Class)supportedDuetEventClass;
+ (long long)supportedCoreDuetStream;

- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4;
- (id)groupTripsFromPublisher:(id)a0 startTimestamp:(double)a1 endTimestamp:(double)a2;

@end
