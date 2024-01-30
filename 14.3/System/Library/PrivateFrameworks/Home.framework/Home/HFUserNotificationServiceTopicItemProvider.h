@class NSSet, HMHome;

@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider

@property (copy, nonatomic) NSSet *topicItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
