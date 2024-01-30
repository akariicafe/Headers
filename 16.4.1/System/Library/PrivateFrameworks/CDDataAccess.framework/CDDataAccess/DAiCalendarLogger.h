@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>

+ (id)sharedLogger;

- (void)logICSMessage:(id)a0 atLevel:(long long)a1;
- (void)registerWithiCalendar;

@end
