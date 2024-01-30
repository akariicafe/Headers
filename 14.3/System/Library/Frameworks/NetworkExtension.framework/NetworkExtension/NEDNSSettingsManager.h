@class NSString, NEConfiguration, NEConfigurationManager, NSArray, NEDNSSettings;

@interface NEDNSSettingsManager : NSObject <NEPrettyDescription>

@property (readonly) NEConfigurationManager *configurationManager;
@property (retain) NEConfiguration *configuration;
@property BOOL hasLoaded;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *localizedDescription;
@property (retain) NEDNSSettings *dnsSettings;
@property (copy) NSArray *onDemandRules;

+ (id)sharedManager;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (void)createEmptyConfigurationWithGrade:(long long)a0;
- (id)initWithGrade:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
