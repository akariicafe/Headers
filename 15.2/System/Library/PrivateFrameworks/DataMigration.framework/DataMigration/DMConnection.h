@class DMXPCConnection;

@interface DMConnection : NSObject {
    DMXPCConnection *_connection;
}

+ (id)connection;

- (long long)migrateCheckingNecessity:(BOOL)a0 lastRelevantPlugin:(id)a1 testMigrationInfrastructureOnly:(BOOL)a2;
- (unsigned int)userDataDisposition;
- (void)changeVisibility:(BOOL)a0 completion:(id /* block */)a1;
- (id)previousBuildVersion;
- (void).cxx_destruct;
- (id)init;
- (void)cancelDeferredExit;
- (void)migrationPluginResults:(id /* block */)a0;
- (BOOL)isMigrationNeeded;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)a0;
- (void)testMigrationUIWithProgress:(BOOL)a0 forceInvert:(BOOL)a1;
- (void)dealloc;
- (id)orderedPluginIdentifiers;
- (void)reportMigrationFailure;
- (void)deferExit;
- (id)migrationPhaseDescription;

@end
