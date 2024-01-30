@interface DMEnvironment : NSObject

@property (nonatomic) BOOL testMigrationInfrastructureOnly;

+ (id)sharedInstance;
+ (BOOL)isBuildVersion:(id)a0 equalToBuildVersion:(id)a1;

- (id)lastBuildVersionPref;
- (void)setLastBuildVersionPref:(id)a0;
- (id)context;
- (id)migrationPluginResultsPref;
- (id)contextPath;
- (void)setMigrationPluginResultsPref:(id)a0;
- (id)lastMigrationResultsPref;
- (BOOL)suppressMigrationPluginWrapperExitMarkerPref;
- (void)setContext:(id)a0;
- (BOOL)isDeviceUsingEphemeralStorage;
- (void)setLastMigrationResultsPref:(id)a0;
- (void)clearContext;
- (BOOL)waitForExecutePluginsSignalMarkerPref;
- (void)setUserDataDispositionPref:(id)a0;
- (void)blockUntilPreferencesFlush;
- (id)continuousIntegrationMarkerPref;
- (id)buildVersion;
- (BOOL)implementMigrationPluginResults;
- (id)userDataDispositionPref;

@end
