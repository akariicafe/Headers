@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject {
    NSTimer *_tzSupportDayRolloverTimer;
}

- (void)invalidateTodayAndNotifyIfChanged;
- (void)_setupTimeZoneTimerWithCalendar:(id)a0;
- (void).cxx_destruct;
- (BOOL)todayChangedAfterInvalidation;
- (id)initWithCalendar:(id)a0;
- (void)dealloc;
- (void)_killTimeZoneTimer;

@end
