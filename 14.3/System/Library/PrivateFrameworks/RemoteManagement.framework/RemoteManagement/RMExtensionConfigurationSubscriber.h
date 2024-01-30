@class RMConfigurationSubscriberClient, NSArray, RMAssetResolver, RMPolicyStore, NSString, NSConditionLock;
@protocol RMExtensionConfigurationApplicator;

@interface RMExtensionConfigurationSubscriber : NSObject <RMExtensionConfigurationSubscriberRequestHandling> {
    NSConditionLock *_configurationSubscriberClientLock;
}

@property (class, readonly, nonatomic) RMExtensionConfigurationSubscriber *sharedSubscriber;

@property (retain, nonatomic) RMConfigurationSubscriberClient *configurationSubscriberClient;
@property (retain, nonatomic) RMAssetResolver *assetResolver;
@property (retain, nonatomic) RMPolicyStore *policyStore;
@property (readonly, nonatomic) id<RMExtensionConfigurationApplicator> applicator;
@property (readonly, nonatomic) NSArray *configurationTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
