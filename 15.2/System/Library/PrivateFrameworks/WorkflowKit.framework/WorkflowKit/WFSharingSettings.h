@interface WFSharingSettings : NSObject

+ (BOOL)sharingEnabled;
+ (BOOL)shortcutFileSharingEnabled;
+ (id)sharingDisabledAlertWithWorkflowName:(id)a0;
+ (id)sharingDisabledAlertWithShortcutName:(id)a0;
+ (id)shortcutFileSharingDisabledAlert;
+ (id)shortcutFileSharingDisabledError;
+ (BOOL)isPrivateSharingEnabled;
+ (id)privateSharingDisabledErrorWithShortcutName:(id)a0;
+ (id)privateSharingDisabledAlertWithShortcutName:(id)a0;

@end
