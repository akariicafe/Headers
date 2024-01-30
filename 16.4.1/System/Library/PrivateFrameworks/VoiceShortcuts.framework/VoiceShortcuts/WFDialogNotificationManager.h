@class NSString, WFUserNotificationManager;

@interface WFDialogNotificationManager : NSObject <UNUserNotificationCenterDelegate>

@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryIdentifiers;
+ (id)dialogNotificationCategory;
+ (id)dialogNotificationConfirmationCategory;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeStaleNotifications;
- (id)initWithUserNotificationManager:(id)a0;
- (void).cxx_destruct;
- (void)postNotificationWithRequest:(id)a0 presentationMode:(unsigned long long)a1 runningContext:(id)a2;
- (unsigned long long)vcShortcutPresentationModeFromWFDialogPresentationMode:(unsigned long long)a0;

@end
