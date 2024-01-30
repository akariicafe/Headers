@interface BiometricSupportUserNotification : NSObject

+ (void)displayTouchIDIssueNotification;
+ (BOOL)didDisplayPearlGlassesBannerNotificationRecently:(double)a0;
+ (BOOL)displayPearlGlassesBannerNotification;
+ (void)displayPearlInterlockIssueNotification:(BOOL)a0;
+ (void)displayPearlIssueNotification;
+ (void)displaySensorIssueNotificationWithHeader:(id)a0 message:(id)a1 button:(id)a2;
+ (void)displayStopAlertWithHeader:(id)a0 andMessage:(id)a1;

@end
