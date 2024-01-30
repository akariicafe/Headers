@class NSString, NSArray, NSSet;

@interface _UIFeedbackGeneratorConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ preparationBlock;
@property (copy, nonatomic) Class clientClass;
@property (copy, nonatomic) NSString *usage;
@property (nonatomic) long long requiredSupportLevel;
@property (nonatomic) long long activationStyle;
@property (nonatomic) long long outputMode;
@property (readonly, nonatomic) BOOL defaultEnabled;
@property (nonatomic) BOOL settingsEnabled;
@property (nonatomic, getter=isSetup) BOOL setup;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *feedbackKeyPaths;
@property (readonly, nonatomic) NSSet *usedFeedbacks;
@property (readonly, nonatomic) NSString *descriptionKey;
@property (copy, nonatomic) NSString *_stats_key;

+ (id)_configurationWithKey:(id)a0 requiredSupportLevel:(long long)a1 preparationBlock:(id /* block */)a2;
+ (id)_configurationWithKey:(id)a0 preparationBlock:(id /* block */)a1;
+ (id)_disabledConfiguration;
+ (id)defaultConfiguration;

- (id)_updateFeedbackForOutputMode:(id)a0;
- (id)description;
- (void)_preferencesUpdated:(id)a0;
- (id)tweakedConfigurationForClass:(Class)a0 usage:(id)a1;
- (BOOL)_shouldEnable;
- (id)_updateFeedbacksForOutputMode:(id)a0;
- (id)tweakedConfigurationForCaller:(id)a0 usage:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)_setupIfNecessary;
- (void)_updateEnabled;

@end
