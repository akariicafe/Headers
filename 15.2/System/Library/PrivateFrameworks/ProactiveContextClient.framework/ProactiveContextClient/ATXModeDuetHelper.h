@interface ATXModeDuetHelper : NSObject

- (id)_updateModeStreamEndDates:(id)a0 to:(id)a1;
- (id)modeStreamFrom:(id)a0 to:(id)a1 ascending:(BOOL)a2 limit:(unsigned long long)a3;
- (id)_queryDuetStreamUnbatched:(id)a0 startDate:(id)a1 endDate:(id)a2 ascending:(BOOL)a3 otherPredicates:(id)a4 limit:(unsigned long long)a5;
- (id)modeStreamFrom:(id)a0 to:(id)a1 limit:(unsigned long long)a2;

@end
