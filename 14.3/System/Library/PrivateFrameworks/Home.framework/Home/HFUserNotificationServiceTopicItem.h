@class HMHome, HFUserNotificationServiceTopic;

@interface HFUserNotificationServiceTopicItem : HFItem

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFUserNotificationServiceTopic *topic;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0 topic:(id)a1;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)_notificationModeToString:(unsigned long long)a0;

@end
