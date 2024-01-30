@interface __NSPlaceholderTimeZone : NSTimeZone

- (id)initWithName:(id)a0 data:(id)a1;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (unsigned long long)retainCount;
- (id)abbreviationForDate:(id)a0;
- (id)retain;
- (id)__initWithName:(id)a0 data:(id)a1 secondsFromGMT:(int)a2 cache:(BOOL)a3;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)initWithName:(id)a0;
- (id)init;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)name;
- (id)__initWithName:(id)a0 cache:(BOOL)a1;
- (void)dealloc;
- (oneway void)release;
- (id)data;

@end
