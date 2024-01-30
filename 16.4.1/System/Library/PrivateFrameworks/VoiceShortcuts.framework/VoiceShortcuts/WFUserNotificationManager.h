@class UNUserNotificationCenter, NSMutableDictionary, NSString, NSMutableSet;

@interface WFUserNotificationManager : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) NSMutableSet *categories;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (readonly, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)categoryIdentifiers;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeNotificationsWithIdentifiers:(id)a0;
- (void)addObserver:(id)a0 forCategory:(id)a1;
- (void)registerCategoriesIfNecessary:(id)a0;
- (void)removeStaleNotificationsWithCompletion:(id /* block */)a0;

@end
