@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject {
    NSTimer *_tzSupportDayRolloverTimer;
}

- (BOOL)todayChangedAfterInvalidation;
- (void)dealloc;
- (id)initWithCalendar:(id)a0;
- (void)_killTimeZoneTimer;
- (void)invalidateTodayAndNotifyIfChanged;
- (void)_setupTimeZoneTimerWithCalendar:(id)a0;
- (void).cxx_destruct;

@end
