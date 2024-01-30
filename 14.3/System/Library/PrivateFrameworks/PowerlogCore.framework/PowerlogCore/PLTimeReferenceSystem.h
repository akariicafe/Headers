@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)registerForDayChangedNotification;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)dealloc;
- (void)registerForTimeChangedNotification;
- (id)currentTime;
- (void)timeZoneChangedNotificationReceived:(id)a0;
- (void)timeChangedToMidnightLocalTime;
- (void)registerForClockSetNotification;
- (void)registerForTimeZoneChangedNotification;

@end
