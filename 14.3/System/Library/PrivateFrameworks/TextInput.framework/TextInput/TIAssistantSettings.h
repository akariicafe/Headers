@interface TIAssistantSettings : NSObject

+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)dismissDialog;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)launchDictationSettings;
+ (void)dismissEnableDictationPrompt;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)dismissEnableDataSharingPrompt;
+ (void)launchKeyboardSettings;
+ (void)setTestBlock:(id /* block */)a0;

@end
