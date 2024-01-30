@class SOClient, SOConfigurationVersion, SOConfiguration;

@interface SOConfigurationClient : NSObject {
    SOClient *_client;
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
}

@property (readonly, nonatomic) SOConfiguration *configuration;
@property (readonly, nonatomic) long long configVersion;

+ (id)defaultClient;

- (void)_reloadConfig;
- (void)_checkNewVersion;
- (void).cxx_destruct;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (id)init;
- (BOOL)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;

@end
