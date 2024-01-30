@class NSSet, HMHome;

@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider

@property (copy, nonatomic) NSSet *topicItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;

@end
