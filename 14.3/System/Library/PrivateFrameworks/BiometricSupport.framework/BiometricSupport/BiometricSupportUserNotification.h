@interface BiometricSupportUserNotification : NSObject

+ (void)displaySensorIssueNotificationWithHeader:(id)a0 message:(id)a1 button:(id)a2;
+ (void)displayTouchIDIssueNotification;
+ (void)displayPearlIssueNotification;
+ (void)displayPearlInterlockIssueNotification:(BOOL)a0;
+ (void)displayStopAlertWithHeader:(id)a0 andMessage:(id)a1;

@end
