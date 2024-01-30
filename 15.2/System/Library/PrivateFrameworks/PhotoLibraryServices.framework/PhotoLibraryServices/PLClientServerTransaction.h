@class NSString, NSSet, PLPhotoLibraryPathManager;

@interface PLClientServerTransaction : NSObject

@property (copy, nonatomic) NSString *transactionToken;
@property (readonly, nonatomic) NSSet *changeScopes;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;

+ (id)_changeScopesFromXPCDictionary:(id)a0;
+ (id)_recoveryHistoryFilePathForPathManager:(id)a0;
+ (id)_scopeValuesByScope;
+ (id)descriptionOfAllTransactionFilesForPathManager:(id)a0;
+ (id)beginClientTransactionWithChangeScopes:(id)a0 pathManager:(id)a1;
+ (void)addTransaction:(id)a0 toXPCDictionary:(id)a1;
+ (void)removeTransactionFromUserInfo:(id)a0;
+ (void)addTransaction:(id)a0 toUserInfo:(id)a1;
+ (id)beginServerTransactionWithToken:(id)a0 changeScopes:(id)a1 pathManager:(id)a2;
+ (id)_libraryURLFromXPCDictionary:(id)a0;
+ (BOOL)_isOutstandingTransactionAtPath:(id)a0 getScopeValues:(unsigned long long *)a1;
+ (void)_recordRecoveryAttemptForPathManager:(id)a0;
+ (void)cancelOutstandingTransactionHandlerTimer:(id)a0;
+ (id)descriptionOfTransactionScopes:(id)a0;
+ (unsigned long long)_readScopeValuesFromFileDescriptor:(int)a0;
+ (id)_outstandingTransactionScopesByPathForPathManager:(id)a0;
+ (void)_checkForAndHandleExcessiveRecoveryAttemptsForPathManager:(id)a0 sqliteErrorHandler:(id /* block */)a1;
+ (id)handleOutstandingTransactionsForPathManager:(id)a0 sqliteErrorHandler:(id /* block */)a1 handler:(id /* block */)a2;
+ (id)_filePathForTransactionWithToken:(id)a0 pathManager:(id)a1;
+ (unsigned long long)scopeValuesFromScopes:(id)a0;
+ (BOOL)_archiveRecoveryHistoryForPathManager:(id)a0 error:(id *)a1;
+ (id)beginServerTransactionWithClientTransactionFromXPCDictionary:(id)a0 pathManager:(id)a1;
+ (void)_cleanupAllTransactionsScopesByPath:(id)a0;
+ (id)_allTransactionPathsForPathManager:(id)a0;
+ (id)_serverTransactionForPathManager:(id)a0 isNew:(BOOL *)a1;
+ (BOOL)_hasExcessiveRecoveryAttemptsForPathManager:(id)a0;
+ (id)transactionFromUserInfo:(id)a0;
+ (id)_transactionTokenFromXPCDictionary:(id)a0;
+ (id)scopesFromScopeValues:(unsigned long long)a0;
+ (id)serverTransactionQueue;

- (id)initWithPathManager:(id)a0;
- (void)pushChangeScopesBatch;
- (void)completeTransaction;
- (void)addChangeScopes:(id)a0;
- (void).cxx_destruct;
- (void)popChangeScopesBatch;
- (BOOL)isClientTransaction;
- (void)abortTransaction;
- (void)completeTransactionScope:(id)a0;
- (void)stillAlive;

@end
