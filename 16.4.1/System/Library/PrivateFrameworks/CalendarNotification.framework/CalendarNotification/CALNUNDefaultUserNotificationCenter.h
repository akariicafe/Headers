@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol>

@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationSettingsForTopics;
- (BOOL)addNotificationRequest:(id)a0 error:(id *)a1;
- (void)removeAllPendingNotificationRequests;
- (id)notificationSettings;
- (id)deliveredNotifications;
- (void)removeAllDeliveredNotifications;
- (id)notificationCategories;
- (BOOL)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 error:(id *)a2;
- (void)setWantsNotificationResponsesDelivered;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)setNotificationCategories:(id)a0;
- (void).cxx_destruct;

@end
