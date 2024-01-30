@class NSDictionary, NSMutableDictionary;

@interface TIEventDescriptorRegistry : NSObject

@property (readonly, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSMutableDictionary *eventDescriptors;
@property (readonly, nonatomic) NSMutableDictionary *eventSpecs;
@property (nonatomic) BOOL loaded;

+ (id)registryWithConfig:(id)a0;
+ (id)registryWithDescriptors:(id)a0 andSpecs:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)contextFromError:(id)a0;
- (id)valueFromError:(id)a0 forKey:(id)a1;
- (id)initWithDescriptors:(id)a0 andSpecs:(id)a1;
- (id)allEventDescriptors;
- (id)eventDescriptorWithName:(id)a0;
- (id)eventSpecWithName:(id)a0;
- (void)loadEventDescriptors;

@end
