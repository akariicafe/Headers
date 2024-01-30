@class NSMutableArray, HDHFDataStore, HDSQLiteDatabase, HDDatabaseTransactionContext;
@protocol HDSQLiteDatabaseProvider;

@interface HDDatabaseTransaction : NSObject {
    id<HDSQLiteDatabaseProvider> _databaseProvider;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    BOOL _isActive;
    BOOL _isOutermostTransactionUnprotected;
    BOOL _isHandlingTransactionEnd;
}

@property (readonly, copy, nonatomic) HDDatabaseTransactionContext *rootContext;
@property (nonatomic) BOOL performingMigration;
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase;
@property (readonly, nonatomic) HDHFDataStore *highFrequencyDataStore;
@property (readonly, nonatomic) long long cacheScope;

- (void).cxx_destruct;
- (id)databaseForEntity:(id)a0;
- (void)dealloc;
- (void)transactionDidEndWithError:(id)a0;
- (id)databaseForEntityClass:(Class)a0;
- (void)onCommit:(id /* block */)a0 orRollback:(id /* block */)a1;
- (id)initWithDatabaseProvider:(id)a0 rootContext:(id)a1;
- (void)requireRollback;
- (id)databaseForEntityProtectionClass:(long long)a0;
- (BOOL)performWithContext:(id)a0 error:(id *)a1 block:(id /* block */)a2 inaccessibilityHandler:(id /* block */)a3;
- (void)requestTransactionInterruption;

@end
