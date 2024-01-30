@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject {
    NSTimer *_tzSupportDayRolloverTimer;
}

- (BOOL)todayChangedAfterInvalidation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_killTimeZoneTimer;
- (void)_setupTimeZoneTimerWithCalendar:(id)a0;
- (id)initWithCalendar:(id)a0;
- (void)invalidateTodayAndNotifyIfChanged;

@end
