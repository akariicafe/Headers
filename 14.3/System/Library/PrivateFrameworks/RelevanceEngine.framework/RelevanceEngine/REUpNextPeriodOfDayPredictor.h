@class NSDateInterval;

@interface REUpNextPeriodOfDayPredictor : REObservableSingleton

@property (readonly, nonatomic) unsigned long long currentPeriodOfDay;
@property (readonly, nonatomic) NSDateInterval *intervalForCurrentPeriodOfDay;

- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)a0;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)a0;

@end
