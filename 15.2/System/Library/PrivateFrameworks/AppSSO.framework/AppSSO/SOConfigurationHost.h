@class SOConfigurationVersion, NSMutableArray, SOConfiguration;

@interface SOConfigurationHost : NSObject {
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
    NSMutableArray *_removedProfiles;
}

@property (readonly, nonatomic) long long configVersion;

+ (id)_loadProfilesFromDict:(id)a0;
+ (id)_loadProfilesFromURL:(id)a0;
+ (id)defaultManager;

- (id)_checkAssociatedDomainForProfiles:(id)a0;
- (BOOL)_saveConfigToFile:(id)a0 error:(id *)a1;
- (id)realms;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (void)_configurationLoadedWithReason:(long long)a0;
- (id)removedProfileForExtensionBundleIdentifier:(id)a0;
- (id)_defaultConfigurationPath;
- (BOOL)saveConfigurationData:(id)a0 error:(id *)a1;
- (id)_stringWithReason:(long long)a0;
- (void)_reloadConfigWithReason:(long long)a0;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (id)configurationForClientWithError:(id *)a0;
- (id)profilesWithExtensionBundleIdentifier:(id)a0;
- (void)_checkNewVersion;
- (void).cxx_destruct;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (id)init;
- (void)_extensionsLoaded:(id)a0;
- (BOOL)_isConfigFileAvailable;
- (void)_loadConfigForFirstTime;
- (id)_checkExtensionsExistenceForProfiles:(id)a0;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (void)dealloc;
- (id)_defaultConfigurationFile;
- (BOOL)saveConfiguration:(id)a0 error:(id *)a1;

@end
