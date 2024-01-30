@class CMSedentaryTimer_Internal;

@interface CMSedentaryTimer : NSObject

@property (readonly, nonatomic) CMSedentaryTimer_Internal *_internal;

+ (BOOL)isAvailable;

- (BOOL)isActive;
- (id)init;
- (void)dealloc;
- (void)startTimerWithStartTime:(id)a0 periodInterval:(double)a1 reminderInterval:(double)a2 autoReschedule:(BOOL)a3 handler:(id /* block */)a4;
- (void)stopTimerWithHandler:(id /* block */)a0;
- (void)queryAlarmDataSince:(id)a0 withHandler:(id /* block */)a1;
- (void)registerForAlarmsWithHandler:(id /* block */)a0;

@end
