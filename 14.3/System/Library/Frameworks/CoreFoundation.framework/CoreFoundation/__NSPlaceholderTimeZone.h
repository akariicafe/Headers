@interface __NSPlaceholderTimeZone : NSTimeZone

- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)init;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (oneway void)release;
- (id)data;
- (id)__initWithName:(id)a0 cache:(BOOL)a1;
- (void)dealloc;
- (id)__initWithName:(id)a0 data:(id)a1 cache:(BOOL)a2;
- (long long)secondsFromGMTForDate:(id)a0;
- (unsigned long long)retainCount;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)retain;
- (id)name;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;

@end
