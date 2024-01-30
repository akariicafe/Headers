@interface TIAssistantSettings : NSObject

+ (void)launchDictationSettings;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)dismissEnableDataSharingPrompt;
+ (void)setTestBlock:(id /* block */)a0;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)dismissEnableDictationPrompt;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)dismissDialog;
+ (void)launchKeyboardSettings;

@end
