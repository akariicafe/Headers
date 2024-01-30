@interface DMEnvironment : NSObject

@property (nonatomic) BOOL testMigrationInfrastructureOnly;

+ (id)sharedInstance;
+ (BOOL)isBuildVersion:(id)a0 equalToBuildVersion:(id)a1;

- (void)setUserDataDispositionPref:(id)a0;
- (void)setLastMigrationResultsPref:(id)a0;
- (id)migrationPluginResultsPref;
- (void)setMigrationPluginResultsPref:(id)a0;
- (BOOL)suppressMigrationPluginWrapperExitMarkerPref;
- (id)lastMigrationResultsPref;
- (BOOL)isDeviceUsingEphemeralStorage;
- (void)setContext:(id)a0;
- (id)buildVersion;
- (id)continuousIntegrationMarkerPref;
- (BOOL)userSessionIsLoginWindow;
- (id)context;
- (void)blockUntilPreferencesFlush;
- (BOOL)waitForExecutePluginsSignalMarkerPref;
- (id)userDataDispositionPref;
- (void)clearContext;
- (id)lastBuildVersionPref;
- (BOOL)implementMigrationPluginResults;
- (BOOL)deviceModeIsSharediPad;
- (void)setLastBuildVersionPref:(id)a0;
- (id)contextPath;

@end
