@class SOConfigurationVersion, NSMutableArray, SOConfiguration;

@interface SOConfigurationHost : NSObject {
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
    NSMutableArray *_removedProfiles;
}

@property (readonly, nonatomic) long long configVersion;

+ (id)_loadProfilesFromURL:(id)a0;
+ (id)_loadProfilesFromDict:(id)a0;
+ (id)defaultManager;

- (id)init;
- (id)_stringWithReason:(long long)a0;
- (void).cxx_destruct;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (void)dealloc;
- (void)_loadConfigForFirstTime;
- (id)_defaultConfigurationFile;
- (id)realms;
- (id)_checkAssociatedDomainForProfiles:(id)a0;
- (id)_defaultConfigurationPath;
- (BOOL)_saveConfigToFile:(id)a0 error:(id *)a1;
- (BOOL)saveConfigurationData:(id)a0 error:(id *)a1;
- (void)_configurationLoadedWithReason:(long long)a0;
- (id)configurationForClientWithError:(id *)a0;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (void)_extensionsLoaded:(id)a0;
- (id)removedProfileForExtensionBundleIdentifier:(id)a0;
- (void)_checkNewVersion;
- (id)_checkExtensionsExistenceForProfiles:(id)a0;
- (void)_reloadConfigWithReason:(long long)a0;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (BOOL)_isConfigFileAvailable;
- (id)profilesWithExtensionBundleIdentifier:(id)a0;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;

@end
