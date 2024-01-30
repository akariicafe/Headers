@class DMXPCConnection;

@interface DMConnection : NSObject {
    DMXPCConnection *_connection;
}

+ (id)connection;

- (id)init;
- (void)migrationPluginResults:(id /* block */)a0;
- (BOOL)isMigrationNeeded;
- (void).cxx_destruct;
- (void)testMigrationUIWithProgress:(BOOL)a0 forceInvert:(BOOL)a1;
- (void)dealloc;
- (id)orderedPluginIdentifiers;
- (unsigned int)userDataDisposition;
- (void)reportMigrationFailure;
- (long long)migrateCheckingNecessity:(BOOL)a0 lastRelevantPlugin:(id)a1 testMigrationInfrastructureOnly:(BOOL)a2;
- (id)previousBuildVersion;
- (void)cancelDeferredExit;
- (id)migrationPhaseDescription;
- (void)changeVisibility:(BOOL)a0 completion:(id /* block */)a1;
- (void)deferExit;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)a0;

@end
