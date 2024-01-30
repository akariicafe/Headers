@interface WFTimeTriggerLogic : NSObject

+ (id)nextFireDateFromNowWithTrigger:(id)a0 currentSunriseTime:(id)a1 currentSunsetTime:(id)a2;
+ (id)adjustedTime:(id)a0 byOffset:(unsigned long long)a1;
+ (id)nextFireDateForTrigger:(id)a0 currentDate:(id)a1 currentSunriseTime:(id)a2 currentSunsetTime:(id)a3;
+ (long long)nextWeekdayFromDaysOfWeek:(id)a0 timeComponents:(id)a1 currentDate:(id)a2 calendar:(id)a3;

- (id)nextFireDateForTrigger:(id)a0;

@end
