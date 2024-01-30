@class RMStoreConfigurationSubscriberDescription;

@interface RMConfigurationSubscriberEventDescription : NSObject

@property (readonly, nonatomic) RMStoreConfigurationSubscriberDescription *configurationSubscriberDescription;

+ (id)eventDescriptionWithExtensionDictionary:(id)a0;
+ (id)eventDescriptionWithEventsDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfigurationSubscriberDescription:(id)a0;

@end
