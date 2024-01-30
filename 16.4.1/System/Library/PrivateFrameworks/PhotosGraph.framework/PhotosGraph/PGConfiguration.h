@interface PGConfiguration : NSObject

@property (readonly, nonatomic) double version;

+ (id)name;
+ (id)_persistedConfigurationPath;
+ (id)persistedConfiguration;

- (id)description;
- (id)_configurationDictionary;
- (id)propertyKeys;
- (void)_configureWithSource:(id)a0 propertyKeys:(id)a1;
- (void)deletePersistedConfiguration;
- (id)initWithSources:(id)a0 version:(double)a1;
- (void)persistConfiguration;

@end
