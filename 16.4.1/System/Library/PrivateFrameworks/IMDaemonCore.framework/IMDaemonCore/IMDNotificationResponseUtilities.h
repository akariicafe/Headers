@class UNUserNotificationCenter, IMDScreenTimeAskReponseHandler, NSString, IMDFamilyInviteReponseHandler, IMDAskToBuyResponseHandler;

@interface IMDNotificationResponseUtilities : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDScreenTimeAskReponseHandler *screenTimeAskReponseHandler;
@property (retain, nonatomic) IMDFamilyInviteReponseHandler *familyInviteResponseHandler;
@property (retain, nonatomic) IMDAskToBuyResponseHandler *askToBuyResponseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_markMessageAsRead:(id)a0 inChat:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_setupNotificationCenter;

@end
