@class NSCalendar, NSSet, NSHashTable, NSDate;

@interface HKDateCache : NSObject {
    NSDate *_startOfYesterdayMidnight;
    NSDate *_startOfDayMidnight;
    NSDate *_endOfDayMidnight;
    NSDate *_oneMinuteBeforeEndOfDayMidnight;
    NSDate *_oneSecondBeforeEndOfDayMidnight;
    NSDate *_startOfTomorrowMidnight;
    NSDate *_endOfTomorrowMidnight;
    NSDate *_startOfRollingWeekMidnight;
    NSDate *_endOfRollingWeekMidnight;
    NSDate *_startOfRollingMonthMidnight;
    NSDate *_endOfRollingMonthMidnight;
    NSDate *_startOfRollingYear;
    NSDate *_endOfRollingYear;
    NSDate *_currentDate;
    NSHashTable *_observers;
    NSSet *_weekendDays;
}

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *startOfYesterdayMidnight;
@property (readonly, nonatomic) NSDate *endOfYesterdayMidnight;
@property (readonly, nonatomic) NSDate *startOfDayMidnight;
@property (readonly, nonatomic) NSDate *endOfDayMidnight;
@property (readonly, nonatomic) NSDate *oneMinuteBeforeEndOfDayMidnight;
@property (readonly, nonatomic) NSDate *oneSecondBeforeEndOfDayMidnight;
@property (readonly, nonatomic) NSDate *startOfTomorrowMidnight;
@property (readonly, nonatomic) NSDate *endOfTomorrowMidnight;
@property (readonly, nonatomic) NSDate *startOfRollingWeekMidnight;
@property (readonly, nonatomic) NSDate *endOfRollingWeekMidnight;
@property (readonly, nonatomic) NSDate *startOfRollingMonthMidnight;
@property (readonly, nonatomic) NSDate *endOfRollingMonthMidnight;
@property (readonly, nonatomic) NSDate *startOfRollingYearMidnight;
@property (readonly, nonatomic) NSDate *endOfRollingYearMidnight;

- (id)startOfRollingWeek:(id /* block */)a0;
- (BOOL)isDateInThisCalendarMonth:(id)a0;
- (id)endOfRollingYear:(id /* block */)a0;
- (BOOL)isDateWithinLastRollingMonth:(id)a0;
- (void)_notifyObserversDidUpdateOnNotification:(id)a0;
- (void)_flushCacheAndNotifyObservers:(id)a0;
- (void)addObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)endOfRollingWeek:(id /* block */)a0;
- (BOOL)isDateInTomorrow:(id)a0;
- (id)_currentDate;
- (BOOL)isDateInToday:(id)a0;
- (BOOL)isDateWithinLastRollingYear:(id)a0;
- (BOOL)isDateInThisCalendarYear:(id)a0;
- (void).cxx_destruct;
- (void)flushCache;
- (id)startOfRollingYear:(id /* block */)a0;
- (id)init;
- (void)_setCurrentDate:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)initWithCalendar:(id)a0;
- (BOOL)isDateInYesterday:(id)a0;
- (BOOL)isDayOfWeekNumberOnWeekend:(id)a0;
- (void)dealloc;
- (id)endOfRollingMonth:(id /* block */)a0;
- (id)weekendDays;
- (id)startOfRollingMonth:(id /* block */)a0;
- (id)startOfRollingDay:(id /* block */)a0;
- (id)endOfRollingDay:(id /* block */)a0;

@end
