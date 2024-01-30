@class RMConfigurationSubscriberClient, NSSet, NSString, NSConditionLock;
@protocol RMConfigurationApplicator;

@interface RMConfigurationSubscriberExtension : NSObject <RMConfigurationSubscriberExtensionRequestHandling> {
    NSConditionLock *_configurationSubscriberClientLock;
}

@property (class, readonly, nonatomic) RMConfigurationSubscriberExtension *sharedSubscriber;

@property (retain, nonatomic) RMConfigurationSubscriberClient *configurationSubscriberClient;
@property (readonly, nonatomic) id<RMConfigurationApplicator> applicator;
@property (readonly, nonatomic) NSSet *configurationTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
