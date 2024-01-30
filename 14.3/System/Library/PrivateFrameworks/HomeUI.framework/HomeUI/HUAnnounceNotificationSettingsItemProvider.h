@class HMHome, NSMutableSet, HMUser;

@interface HUAnnounceNotificationSettingsItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *items;
@property (retain, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMUser *user;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)_notificationModes;

@end
