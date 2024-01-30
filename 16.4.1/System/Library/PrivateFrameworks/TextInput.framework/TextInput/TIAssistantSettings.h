@interface TIAssistantSettings : NSObject

+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)dismissDialog;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)dismissEnableDataSharingPrompt;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)setTestBlock:(id /* block */)a0;
+ (void)launchPencilSettings;
+ (void)launchKeyboardSettings;
+ (void)launchDictationSettings;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)dismissEnableDictationPrompt;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;

@end
