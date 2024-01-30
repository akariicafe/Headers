@class NEFilterProviderConfiguration, NSString, NEConfiguration, NEConfigurationManager;

@interface NEFilterManager : NSObject <NEPrettyDescription>

@property BOOL hasLoaded;
@property (readonly) NEConfigurationManager *configurationManager;
@property (retain) NEConfiguration *configuration;
@property (copy) NSString *localizedDescription;
@property (retain) NEFilterProviderConfiguration *providerConfiguration;
@property (getter=isEnabled) BOOL enabled;
@property long long grade;

+ (id)sharedManager;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)createEmptyConfiguration;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;
- (id)initFilterManagerWithPluginType:(id)a0;

@end
