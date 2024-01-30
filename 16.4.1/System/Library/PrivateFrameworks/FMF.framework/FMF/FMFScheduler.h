@class NSArray, FMXPCTimer;
@protocol FMFSchedulerDelegate;

@interface FMFScheduler : NSObject

@property (retain, nonatomic) FMXPCTimer *timer;
@property (readonly, nonatomic) id<FMFSchedulerDelegate> delegate;
@property (retain, nonatomic) NSArray *schedules;
@property (readonly, nonatomic) NSArray *currentSchedules;

+ (id)_nextStartOrEndDateFrom:(id)a0 forSchedules:(id)a1;

- (void)_updateScheduleTimer;
- (void)_registerForSignificantTimeChangeNotifications;
- (void)_significantTimeChange:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)scheduleTimerFired;
- (void).cxx_destruct;

@end
