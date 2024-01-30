@class DMXPCConnection;

@interface DMConnection : NSObject {
    DMXPCConnection *_connection;
}

+ (id)connection;

- (unsigned int)userDataDisposition;
- (void)cancelDeferredExit;
- (void)migrationPluginResults:(id /* block */)a0;
- (id)previousBuildVersion;
- (void)deferExit;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)a0;
- (void)dealloc;
- (void)reportMigrationFailure;
- (id)orderedPluginIdentifiers;
- (void)testMigrationUIWithProgress:(BOOL)a0 forceInvert:(BOOL)a1;
- (long long)migrateCheckingNecessity:(BOOL)a0 lastRelevantPlugin:(id)a1 testMigrationInfrastructureOnly:(BOOL)a2;
- (id)init;
- (id)migrationPhaseDescription;
- (void).cxx_destruct;
- (BOOL)isMigrationNeeded;
- (void)changeVisibility:(BOOL)a0 completion:(id /* block */)a1;
- (id)userDataDispositionAuxiliaryData;

@end
