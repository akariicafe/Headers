@class PCPersistentTimer, NSArray, NCDigestInfo, NSMutableSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NCDigestScheduleManager : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) PCPersistentTimer *digestScheduleTimer;
@property (retain, nonatomic) NSMutableSet *digestInfos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *digestScheduleTimerQueue;
@property (retain, nonatomic) NCDigestInfo *upcomingScheduledDigestInfo;
@property (retain, nonatomic) NCDigestInfo *previouslyScheduledDigestInfo;
@property (retain, nonatomic) NSArray *digestScheduleTimes;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_handleTimeOrLocaleChange:(id)a0;
- (void).cxx_destruct;
- (id)_currentScheduleTimes;
- (void)_publishDigestInfo:(id)a0 withUpcomingDigestInfo:(id)a1;
- (void)_publishRevokeUpcomingDigest:(id)a0;
- (void)_publishToAllObservers:(id /* block */)a0;
- (void)_publishUpcomingDigestInfo:(id)a0;
- (id)_scheduleDateFromScheduleTime:(id)a0;
- (void)_scheduleTimerFiredForTimer:(id)a0;
- (void)_scheduleTimerForDigestInfo:(id)a0;
- (void)_updateDigestInfosForScheduleTimes:(id)a0;
- (void)_updateUpcomingScheduledDigestInfo;
- (void)invalidateScheduledTimer;
- (void)invalidateScheduledTimerSendCancel:(BOOL)a0;

@end
