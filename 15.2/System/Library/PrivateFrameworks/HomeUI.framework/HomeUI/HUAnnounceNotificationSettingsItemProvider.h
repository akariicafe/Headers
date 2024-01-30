@class HMHome, NSMutableSet, HMUser;

@interface HUAnnounceNotificationSettingsItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *items;
@property (retain, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMUser *user;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)_notificationModes;

@end
