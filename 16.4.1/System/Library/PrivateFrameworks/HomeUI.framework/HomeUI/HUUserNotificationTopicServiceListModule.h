@class HMHome, HFUserNotificationServiceTopic, HFTransformItemProvider;

@interface HUUserNotificationTopicServiceListModule : HFItemModule

@property (readonly, nonatomic) HFTransformItemProvider *transformServiceItemProvider;
@property (readonly, nonatomic) HFTransformItemProvider *transformCameraItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFUserNotificationServiceTopic *topic;

+ (id)_createTransformItemForItem:(id)a0 notificationSettingsProvider:(id)a1;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 topic:(id)a2;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)serviceLikeItemForItem:(id)a0;

@end
