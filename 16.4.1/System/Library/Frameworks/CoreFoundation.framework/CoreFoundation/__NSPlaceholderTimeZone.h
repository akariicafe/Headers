@interface __NSPlaceholderTimeZone : NSTimeZone

- (long long)secondsFromGMTForDate:(id)a0;
- (id)retain;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (oneway void)release;
- (id)initWithName:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)data;
- (id)initWithName:(id)a0 data:(id)a1;
- (void)dealloc;
- (id)init;
- (id)__initWithName:(id)a0 data:(id)a1 secondsFromGMT:(int)a2 cache:(BOOL)a3;
- (id)name;
- (unsigned long long)retainCount;
- (id)__initWithName:(id)a0 cache:(BOOL)a1;

@end
