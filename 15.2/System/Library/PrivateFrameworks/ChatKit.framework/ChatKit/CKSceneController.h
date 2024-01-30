@class NSString;

@interface CKSceneController : NSObject <UNUserNotificationCenterDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_suppressionContextsForChatIdentifier:(id)a0 personCentricID:(id)a1;
- (id)messagesSceneDelegate;
- (id)alertSuppressionContextsFromForegroundActiveScenes;
- (BOOL)shouldSuppressNotificationForMessageWithRelevantContext:(id)a0 withAlertSupressionContextForScenes:(id)a1;

@end
