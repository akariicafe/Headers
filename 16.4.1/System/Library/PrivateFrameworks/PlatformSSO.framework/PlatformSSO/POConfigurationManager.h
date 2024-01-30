@class POLoginConfiguration, NSString, PODeviceConfiguration, POKeychainHelper, NSData, PODaemonConnection, POUserConfiguration, PODirectoryServices, POConfigurationVersion;

@interface POConfigurationManager : NSObject <POJWKSStorageProvider> {
    PODaemonConnection *_serviceConnection;
}

@property (retain) PODirectoryServices *directoryServices;
@property (readonly) NSString *userIdentifier;
@property (retain) POConfigurationVersion *version;
@property (retain) POKeychainHelper *keychainHelper;
@property (readonly) NSString *userName;
@property (readonly) POUserConfiguration *currentUserConfiguration;
@property (readonly) PODeviceConfiguration *currentDeviceConfiguration;
@property (readonly) POLoginConfiguration *currentLoginConfiguration;
@property (retain) NSData *jwksCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithUserName:(id)a0;
- (void).cxx_destruct;
- (id)loginConfigurationForExtension:(id)a0;
- (id)deviceConfigurationForExtension:(id)a0;
- (void)enableScreensaverRuleIfNeeded:(id /* block */)a0;
- (id)jwksCache;
- (id)jwksCacheForExtensionIdentifier:(id)a0;
- (BOOL)removeDeviceConfigurationForExtension:(id)a0;
- (BOOL)removeLoginConfigurationForExtension:(id)a0;
- (BOOL)removeUserConfigurationForUserName:(id)a0;
- (BOOL)resetStoredConfiguration;
- (void)restoreScreensaverRuleIfNeeded;
- (BOOL)saveCurrentUserConfiguration;
- (BOOL)saveDeviceConfiguration:(id)a0 forExtension:(id)a1;
- (BOOL)saveLoginConfiguration:(id)a0 forExtension:(id)a1;
- (BOOL)saveUserConfiguration:(id)a0 forUserName:(id)a1;
- (void)setJwksCache:(id)a0;
- (void)setJwksCache:(id)a0 forExtensionIdentifier:(id)a1;
- (id)userConfigurationForUserName:(id)a0;
- (id)userConfigurationForUserName:(id)a0 passwordContext:(id)a1;

@end
