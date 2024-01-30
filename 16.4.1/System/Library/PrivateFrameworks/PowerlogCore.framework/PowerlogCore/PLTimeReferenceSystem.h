@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)registerForClockSetNotification;
- (void)registerForTimeChangedNotification;
- (void)registerForDayChangedNotification;
- (void)registerForTimeZoneChangedNotification;
- (id)currentTime;
- (void)timeChangedToMidnightLocalTime;
- (void)dealloc;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)timeZoneChangedNotificationReceived:(id)a0;

@end
