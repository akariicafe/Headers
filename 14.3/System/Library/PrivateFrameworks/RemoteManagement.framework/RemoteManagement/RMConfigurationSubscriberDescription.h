@class NSArray, NSString;

@interface RMConfigurationSubscriberDescription : NSObject

@property (readonly, copy, nonatomic) NSArray *types;
@property (readonly, copy, nonatomic) NSString *principalClassName;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithTypes:(id)a0 principalClassName:(id)a1;

@end
