@interface TFAlertActions : NSObject

+ (void)didDismissWhatToTestForBundleIdentifier:(id)a0;
+ (void)launchApplicationWithSuccessHandler:(id /* block */)a0 failureHandler:(id /* block */)a1;
+ (void)postAlertActionDistributedNotification:(id)a0 userInfo:(id)a1;
+ (void)showCrashFeedbackForBundleIndentifier:(id)a0;
+ (void)showVisualFeedbackForBundleIdentifier:(id)a0 initialImages:(id)a1;
+ (void)showWhatToTestForBundleIdentifier:(id)a0;

@end
