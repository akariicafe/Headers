@class NSString, HKHealthStore, NSMutableDictionary, HKNotificationStore;

@interface WDNotificationManager : NSObject <UNUserNotificationCenterDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_domainsToPolicies;
    HKNotificationStore *_notificationStore;
}

@property (class, nonatomic) BOOL suppressBadgeNotifications;

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)setBadge:(id)a0 forDomain:(long long)a1 completion:(id /* block */)a2;
- (id)initWithHealthStore:(id)a0;
- (void)userNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_lock_policyForNotification:(id)a0;
- (void)setPolicy:(id)a0 forDomain:(long long)a1;
- (void)resetEmergencySOSBadge;
- (void)resetHealthRecordsDataBadge;

@end
