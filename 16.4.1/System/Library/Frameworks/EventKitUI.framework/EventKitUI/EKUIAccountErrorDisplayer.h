@interface EKUIAccountErrorDisplayer : NSObject

+ (void)handleContinueSyncingForAccount:(id)a0 calendars:(id)a1 error:(unsigned long long)a2;
+ (void)presentAlertForAccount:(id)a0 error:(unsigned long long)a1 usingViewController:(id)a2;
+ (void)presentAlertForOfflineErrorUsingViewController:(id)a0;
+ (BOOL)errorIsActionable:(unsigned long long)a0;
+ (BOOL)_reauthorizeForAccount:(id)a0 usingViewController:(id)a1;
+ (unsigned long long)severityForError:(unsigned long long)a0;
+ (unsigned long long)moreSevereErrorOfError:(unsigned long long)a0 andError:(unsigned long long)a1;

@end
