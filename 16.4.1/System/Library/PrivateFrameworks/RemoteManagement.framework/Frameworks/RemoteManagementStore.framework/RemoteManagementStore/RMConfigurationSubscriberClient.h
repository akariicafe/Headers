@class RMStatusPublisherDelegate, RMConfigurationSubscriberDelegate;

@interface RMConfigurationSubscriberClient : NSObject

@property (retain, nonatomic) RMConfigurationSubscriberDelegate *subscriberDelegate;
@property (retain, nonatomic) RMStatusPublisherDelegate *publisherDelegate;

- (void).cxx_destruct;
- (void)_buildSubscribedReferences:(id)a0 declarations:(id)a1 store:(id)a2;
- (void)fetchConfigurationsWithTypes:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)sendStatusKeys:(id)a0 storeIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;

@end
