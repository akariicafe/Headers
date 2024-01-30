@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol>

@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllDeliveredNotifications;
- (BOOL)addNotificationRequest:(id)a0 error:(id *)a1;
- (id)notificationCategories;
- (id)notificationSettingsForTopics;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (id)deliveredNotifications;
- (void)setNotificationCategories:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)setWantsNotificationResponsesDelivered;
- (id)notificationSettings;
- (void).cxx_destruct;
- (BOOL)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 error:(id *)a2;

@end
