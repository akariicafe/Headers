@interface MTSleepUtilities : NSObject

+ (unsigned long long)alarmRepeatScheduleFrom:(unsigned long long)a0;
+ (unsigned long long)playOptionsForOccurrence:(id)a0;
+ (id)alarmFromSleepOccurrence:(id)a0 scheduleEnabled:(BOOL)a1 keepOffUntilDate:(id)a2;

@end
