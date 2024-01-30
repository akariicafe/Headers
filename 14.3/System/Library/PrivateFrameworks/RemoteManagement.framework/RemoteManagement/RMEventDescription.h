@class RMConfigurationSubscriberDescription, RMStatusPublisherDescription;

@interface RMEventDescription : NSObject

@property (readonly, nonatomic) RMStatusPublisherDescription *statusPublisherDescription;
@property (readonly, nonatomic) RMConfigurationSubscriberDescription *configurationSubscriberDescription;

+ (id)eventDescriptionWithEventsDictionary:(id)a0;
+ (id)eventDescriptionWithExtensionDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithStatusPublisherDescription:(id)a0 configurationSubscriberDescription:(id)a1;

@end
