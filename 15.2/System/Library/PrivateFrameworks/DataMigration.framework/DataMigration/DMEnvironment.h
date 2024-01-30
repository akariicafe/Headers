@interface DMEnvironment : NSObject

@property (nonatomic) BOOL testMigrationInfrastructureOnly;

+ (id)sharedInstance;
+ (BOOL)isBuildVersion:(id)a0 equalToBuildVersion:(id)a1;

- (id)context;
- (id)buildVersion;
- (void)setLastMigrationResultsPref:(id)a0;
- (id)lastBuildVersionPref;
- (BOOL)isDeviceUsingEphemeralStorage;
- (BOOL)userSessionIsLoginWindow;
- (void)setLastBuildVersionPref:(id)a0;
- (id)lastMigrationResultsPref;
- (void)setMigrationPluginResultsPref:(id)a0;
- (BOOL)deviceModeIsMultiUser;
- (id)contextPath;
- (void)setUserDataDispositionPref:(id)a0;
- (void)setContext:(id)a0;
- (id)migrationPluginResultsPref;
- (BOOL)waitForExecutePluginsSignalMarkerPref;
- (BOOL)suppressMigrationPluginWrapperExitMarkerPref;
- (BOOL)implementMigrationPluginResults;
- (id)continuousIntegrationMarkerPref;
- (void)blockUntilPreferencesFlush;
- (id)userDataDispositionPref;
- (void)clearContext;

@end
