@class UNUserNotificationCenter, NAFuture, NSString, NSHashTable;
@protocol HFUserNotificationPresentationHandling;

@interface HFUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (retain, nonatomic) NAFuture *notificationSettingsFuture;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) id<HFUserNotificationPresentationHandling> presentationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_applicationDidEnterBackground;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)notificationSettings;
- (void)_applicationWillEnterForeground;
- (void)userNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
