@class NSString, HFUserNotificationServiceTopicItemProvider, HMHome;

@interface HUUserNotificationTopicListModule : HFItemModule

@property (class, readonly, copy, nonatomic) NSString *sectionID;

@property (readonly, nonatomic) HFUserNotificationServiceTopicItemProvider *notificationTopicItemProvider;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)a0;
- (void)_buildItemProviders;
- (id)topicForItem:(id)a0;

@end
