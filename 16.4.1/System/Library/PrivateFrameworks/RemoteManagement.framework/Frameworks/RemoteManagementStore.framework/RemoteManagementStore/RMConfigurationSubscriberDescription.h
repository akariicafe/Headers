@class NSArray;

@interface RMConfigurationSubscriberDescription : NSObject

@property (readonly, copy, nonatomic) NSArray *types;

+ (id)descriptionWithEventsDictionary:(id)a0;
+ (id)descriptionWithServiceDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)initWithTypes:(id)a0;
- (void).cxx_destruct;

@end
