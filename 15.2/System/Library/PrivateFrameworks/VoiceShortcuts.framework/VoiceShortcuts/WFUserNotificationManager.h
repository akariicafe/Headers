@class UNUserNotificationCenter, NSMutableDictionary, NSString, NSMutableSet;

@interface WFUserNotificationManager : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) NSMutableSet *categories;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (readonly, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)categoryIdentifiers;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeObserver:(id)a0;
- (void)removeNotificationsWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver:(id)a0 forCategory:(id)a1;
- (void)removeStaleNotificationsWithCompletion:(id /* block */)a0;
- (void)registerCategoriesIfNecessary:(id)a0;

@end
