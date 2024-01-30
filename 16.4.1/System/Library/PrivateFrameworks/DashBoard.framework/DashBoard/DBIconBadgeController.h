@class NSString, NSDictionary, CARObserverHashTable, UNNotificationSettingsCenter, NSObject;
@protocol OS_dispatch_queue;

@interface DBIconBadgeController : NSObject <UNNotificationSettingsCenterDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) UNNotificationSettingsCenter *notificationsSettingsCenter;
@property (retain, nonatomic) NSDictionary *lock_badgesAllowedByIdentifier;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *badgeSettingsUpdateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)userNotificationSettingsCenter:(id)a0 didUpdateNotificationSourceIdentifiers:(id)a1;
- (void)_badge_queue_updateNotificationSources;
- (BOOL)notificationsEnabledForIdentifier:(id)a0;

@end
