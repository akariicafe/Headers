@class NSString;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseEncryptionStartUpMiddleware : NSObject <FCCKDatabaseStartUpMiddleware>

@property (retain, nonatomic) id<FCCKDatabaseMigrator> encryptionMigrator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_deleteOldDataWithSentinel:(id)a0 secureSentinel:(id)a1 database:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldFailGracefullyWithSentinel:(id)a0 secureSentinel:(id)a1 error:(id)a2;
- (void)_tryToEnableEncryptionForDatabase:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_deleteOldDataIfDesiredWithSentinel:(id)a0 secureSentinel:(id)a1 database:(id)a2 completion:(id /* block */)a3;
- (void)_createSentinelsIfNeededForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)performStartUpForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)_associateChildOperation:(id)a0;
- (void)_fetchSentinelsWithDatabase:(id)a0 completion:(id /* block */)a1;
- (id)initWithEncryptionMigrator:(id)a0;
- (void)_adoptSentinel:(id)a0 secureSentinel:(id)a1 forDatabase:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldHandleIdentityLossWithSentinel:(id)a0 secureSentinel:(id)a1 error:(id)a2;
- (void)_handleIdentityLossWithDatabase:(id)a0 sentinel:(id)a1 secureSentinel:(id)a2 completion:(id /* block */)a3;
- (void)_migrateWithSentinel:(id)a0 secureSentinel:(id)a1 database:(id)a2 completion:(id /* block */)a3;

@end
