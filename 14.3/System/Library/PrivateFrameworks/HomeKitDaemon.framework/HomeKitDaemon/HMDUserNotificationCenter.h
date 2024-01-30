@class UNUserNotificationCenter, HMDHomeManager, NSMutableDictionary, NSString;

@interface HMDUserNotificationCenter : HMFObject <NSSecureCoding, UNUserNotificationCenterDelegate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) HMDHomeManager *homeManager;
@property (readonly) UNUserNotificationCenter *userNotificationCenter;
@property (readonly) NSMutableDictionary *notificationRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserNotificationCenter:(id)a0;
- (id)sortDescriptors;
- (id)notificationCategories;
- (id)initWithCoder:(id)a0;
- (void)setBadgeNumber:(id)a0;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (void)configureHomeManager:(id)a0;
- (id)sortedRequestsByDate;
- (void)_removeRequestWithIdentifiersFromNotificationCenter:(id)a0;
- (void)_removeRequestWithIdentifier:(id)a0;
- (void)_showNotification:(id)a0;
- (id)createNotificationAttachmentWithIdentifier:(id)a0 forFileAtPath:(id)a1;
- (id)showNotificationWithTitle:(id)a0 body:(id)a1 threadIdentifier:(id)a2 categoryIdentifier:(id)a3 requestIdentifier:(id)a4 date:(id)a5 attachments:(id)a6 userInfo:(id)a7 shouldIgnoreDoNotDisturb:(BOOL)a8;
- (void)updateContent:(id)a0 forNotificationWithRequestIdentifier:(id)a1;
- (void)cullBulletinsToCount:(unsigned long long)a0;
- (void)removeRequestWithIdentifier:(id)a0;
- (void)registerNotificationCategories;
- (id)insertRequestWithTitle:(id)a0 snapshotData:(id)a1 message:(id)a2 requestIdentifier:(id)a3 date:(id)a4 bulletinType:(unsigned long long)a5 actionURL:(id)a6 bulletinContext:(id)a7 actionContext:(id)a8;

@end
