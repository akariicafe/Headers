@class HDSQLiteDatabase, NSMutableArray, NSDictionary, HDProfile, HDHFDataStore, HDDatabaseTransactionContext, HDOntologyDatabase;
@protocol HDSQLiteDatabaseProvider;

@interface HDDatabaseTransaction : NSObject {
    id<HDSQLiteDatabaseProvider> _databaseProvider;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    BOOL _isActive;
    BOOL _isOutermostTransactionUnprotected;
    BOOL _isHandlingTransactionEnd;
}

@property (readonly, nonatomic) HDOntologyDatabase *ontologyDatabase;
@property (readonly, copy, nonatomic) HDDatabaseTransactionContext *rootContext;
@property (nonatomic) BOOL performingMigration;
@property (readonly, copy, nonatomic) NSDictionary *protectedResources;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase;
@property (readonly, nonatomic) HDHFDataStore *highFrequencyDataStore;
@property (readonly, nonatomic) long long cacheScope;

- (void)transactionDidEndWithError:(id)a0;
- (id)databaseForEntityClass:(Class)a0;
- (id)initWithDatabaseProvider:(id)a0 profile:(id)a1 rootContext:(id)a2;
- (void).cxx_destruct;
- (void)requireRollback;
- (BOOL)performWithContext:(id)a0 error:(id *)a1 block:(id /* block */)a2 inaccessibilityHandler:(id /* block */)a3;
- (id)databaseForEntity:(id)a0;
- (void)requestTransactionInterruption;
- (id)databaseForEntityProtectionClass:(long long)a0;
- (void)dealloc;
- (void)onCommit:(id /* block */)a0 orRollback:(id /* block */)a1;

@end
