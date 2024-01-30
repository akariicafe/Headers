@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)timeZoneChangedNotificationReceived:(id)a0;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)registerForTimeZoneChangedNotification;
- (id)currentTime;
- (void)dealloc;
- (void)registerForDayChangedNotification;
- (void)registerForClockSetNotification;
- (void)timeChangedToMidnightLocalTime;
- (void)registerForTimeChangedNotification;

@end
