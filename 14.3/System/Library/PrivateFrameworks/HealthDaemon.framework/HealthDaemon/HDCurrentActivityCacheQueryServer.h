@class HDActivityCacheManager, NSString, NSCalendar, NSDateComponents, HKActivityCache;

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {
    NSDateComponents *_statisticsIntervalComponents;
    NSCalendar *_calendar;
    HKActivityCache *_lastActivityCache;
}

@property (weak, nonatomic) HDActivityCacheManager *activityCacheManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_stop;
- (void)activityCacheManager:(id)a0 changedTodayActivityCache:(id)a1;
- (BOOL)shouldObserveActivityCache;

@end
