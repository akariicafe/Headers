@class SOConfigurationVersion, NSMutableArray, SOConfiguration;

@interface SOConfigurationHost : NSObject {
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
    NSMutableArray *_removedProfiles;
}

@property (readonly, nonatomic) long long configVersion;

+ (id)maskRegistrationTokenInProfileList:(id)a0;
+ (id)_loadProfilesFromDict:(id)a0;
+ (id)maskRegistrationTokenInConfigurationData:(id)a0;
+ (id)defaultManager;
+ (id)_loadProfilesFromURL:(id)a0 logFileError:(BOOL)a1;

- (id)_checkExtensionsExistenceForProfiles:(id)a0;
- (id)profilesWithExtensionBundleIdentifier:(id)a0;
- (BOOL)saveConfigurationData:(id)a0 error:(id *)a1;
- (id)configurationForClientWithError:(id *)a0;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (BOOL)hasAnyMDMProfileForExtension:(id)a0;
- (void)_loadConfigForFirstTime;
- (void)_configurationLoadedWithReason:(long long)a0;
- (id)_stringWithReason:(long long)a0;
- (id)validatedProfileForPlatformSSO;
- (BOOL)saveConfiguration:(id)a0 error:(id *)a1;
- (id)_checkAssociatedDomainForProfiles:(id)a0;
- (void)dealloc;
- (id)removedProfileForExtensionBundleIdentifier:(id)a0;
- (void)_checkNewVersion;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (id)_defaultConfigurationPath;
- (BOOL)_saveConfigToFile:(id)a0 error:(id *)a1;
- (void)_extensionsLoaded:(id)a0;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (id)init;
- (BOOL)_isConfigFileAvailable;
- (id)_defaultConfigurationFile;
- (id)realms;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (void)_reloadConfigWithReason:(long long)a0;
- (void).cxx_destruct;

@end
