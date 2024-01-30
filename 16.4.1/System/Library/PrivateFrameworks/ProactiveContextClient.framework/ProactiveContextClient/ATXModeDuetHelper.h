@interface ATXModeDuetHelper : NSObject

- (id)modeStreamFrom:(id)a0 to:(id)a1 limit:(unsigned long long)a2;
- (id)_duetStreamShim;
- (id)_updateModeStreamEndDates:(id)a0 to:(id)a1;
- (id)modeStreamFrom:(id)a0 to:(id)a1 ascending:(BOOL)a2 limit:(unsigned long long)a3;

@end
