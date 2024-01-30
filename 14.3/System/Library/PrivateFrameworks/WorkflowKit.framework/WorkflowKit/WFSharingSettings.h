@interface WFSharingSettings : NSObject

+ (BOOL)sharingEnabled;
+ (BOOL)shortcutFileSharingEnabled;
+ (id)sharingDisabledAlertWithWorkflowName:(id)a0;
+ (id)shortcutFileSharingDisabledAlert;

@end
