@class HKObserverQuery, HKHealthStore, MTObserverStore;
@protocol NAScheduler;

@interface MTSleepMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKObserverQuery *healthObserver;
@property (retain, nonatomic) MTObserverStore *sleepDataObservers;

+ (void)registerSleepDataObserver:(id)a0;
+ (void)unregisterSleepDataObserver:(id)a0;
+ (id)sleepDataForPastWeekRequestAuthorization:(BOOL)a0;
+ (id)sleepDataForPastWeekRequestAuthorization:(BOOL)a0 dataSource:(unsigned long long)a1;
+ (id)sleepDataForRange:(id)a0;
+ (id)_sourcePredicate:(unsigned long long)a0;
+ (id)lastSleepDayRequestAuthorization:(BOOL)a0;
+ (id)lastSleepDayRequestAuthorization:(BOOL)a0 dataSource:(unsigned long long)a1;
+ (id)sleepDaysForRange:(id)a0 requestAuthorization:(BOOL)a1 dataSource:(unsigned long long)a2;
+ (id)sleepDaysForRange:(id)a0 requestAuthorization:(BOOL)a1;
+ (id)sleepDataForPastWeek;
+ (id)lastSleepDay;
+ (id)sleepDaysForRange:(id)a0;
+ (id)_sharedPublicMetrics;

- (id)init;
- (void).cxx_destruct;
- (void)registerSleepDataObserver:(id)a0;
- (void)unregisterSleepDataObserver:(id)a0;
- (id)sleepDataForPastWeekRequestAuthorization:(BOOL)a0 dataSource:(unsigned long long)a1;
- (id)sleepDataForRange:(id)a0 requestAuthorization:(BOOL)a1 dataSource:(unsigned long long)a2;
- (id)sleepDataForRange:(id)a0;
- (id)sleepDataForRange:(id)a0 intervalComponents:(id)a1 requestAuthorization:(BOOL)a2 dataSource:(unsigned long long)a3;
- (void)_executeSleepQuery:(id)a0 requestAuthorization:(BOOL)a1 future:(id)a2;
- (id)sleepDaysForRange:(id)a0 requestAuthorization:(BOOL)a1 dataSource:(unsigned long long)a2;

@end
