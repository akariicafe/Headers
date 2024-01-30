@class NSObject, CLSEndpointConnection;
@protocol OS_dispatch_queue;

@interface CLSUtilityService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CLSEndpointConnection *endpointConnection;

+ (id)sharedInstance;
+ (Class)endpointClass;

- (id)utilityServer:(id /* block */)a0;
- (id)initWithEndpoint:(id)a0;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (id)syncUtilityServer:(id /* block */)a0;
- (void).cxx_destruct;
- (void)statusWithCompletion:(id /* block */)a0;
- (void)recreateDatabaseWithCompletion:(id /* block */)a0;
- (void)addAdminRequestor:(id)a0 completion:(id /* block */)a1;
- (void)addAuthorizationStatus:(unsigned long long)a0 forContextAtPath:(id)a1 completion:(id /* block */)a2;
- (void)addAuthorizationStatus:(unsigned long long)a0 forHandoutAssignedItem:(id)a1 completion:(id /* block */)a2;
- (void)addOrganization:(id)a0 withLocations:(id)a1 completion:(id /* block */)a2;
- (void)authorizationStatusForContextAtPath:(id)a0 completion:(id /* block */)a1;
- (void)authorizationStatusForHandoutAssignedItem:(id)a0 completion:(id /* block */)a1;
- (void)currentUserContentStoreCacheDirectoryURLWithCompletion:(id /* block */)a0;
- (void)databasePathWithCompletion:(id /* block */)a0;
- (void)deleteOrganization:(id)a0 completion:(id /* block */)a1;
- (void)fetchReportsWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)getClassKitCatalogEnvironmentWithCompletion:(id /* block */)a0;
- (void)getDevModeWithCompletion:(id /* block */)a0;
- (void)recreateDatabase:(BOOL)a0 andTerminateDaemonWithCompletion:(id /* block */)a1;
- (void)recreateDevelopmentDatabaseWithCompletion:(id /* block */)a0;
- (void)removeAuthorizationStatus:(unsigned long long)a0 forContextAtPath:(id)a1 completion:(id /* block */)a2;
- (void)removeAuthorizationStatus:(unsigned long long)a0 forHandoutAssignedItem:(id)a1 completion:(id /* block */)a2;
- (void)setClassKitCatalogEnvironment:(long long)a0 completion:(id /* block */)a1;
- (void)setDevMode:(int)a0 completion:(id /* block */)a1;
- (void)syncFetchWithCompletion:(id /* block */)a0;
- (void)syncGetClassKitCatalogEnvironmentWithCompletion:(id /* block */)a0;
- (void)syncGetDevModeWithCompletion:(id /* block */)a0;
- (void)syncPushWithCompletion:(id /* block */)a0;
- (void)syncRecreateDevelopmentDatabaseWithCompletion:(id /* block */)a0;
- (void)syncSetClassKitCatalogEnvironment:(long long)a0 completion:(id /* block */)a1;
- (void)syncSetDevMode:(int)a0 completion:(id /* block */)a1;
- (void)syncStatsWithCompletion:(id /* block */)a0;
- (void)topLevelContentStoreCacheDirectoryURLWithCompletion:(id /* block */)a0;

@end
