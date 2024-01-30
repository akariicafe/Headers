@interface RMConfigurationSubscriberClient : NSObject

- (void)fetchConfigurationsWithTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void)_buildSubscribedReferences:(id)a0 declarations:(id)a1 store:(id)a2;

@end
