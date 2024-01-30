@class NSString;

@interface HDSharedSummaryTransactionEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (BOOL)deleteAllEntriesWithDatabaseTransaction:(id)a0 error:(id *)a1;
+ (id)transactionEntityWithUUID:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (id)mostRecentTransactionCreationDateWithDatabaseTransaction:(id)a0 error:(id *)a1;
+ (id)insertWithUUID:(id)a0 sourceDevice:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateTransactionsWithDatabaseTransaction:(id)a0 includeNonCommitted:(BOOL)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)pruneWithProfile:(id)a0 nowDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;

- (BOOL)committedInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)creationDateInDatabaseTransaction:(id)a0 error:(id *)a1;
- (BOOL)deleteWithDatabaseTransaction:(id)a0 error:(id *)a1;
- (BOOL)setCommitted:(BOOL)a0 databaseTransaction:(id)a1 error:(id *)a2;
- (id)sourceDeviceIdentiferInDatabaseTransaction:(id)a0 error:(id *)a1;
- (BOOL)unit_testSetCreationDate:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
- (id)uuidInDatabaseTransaction:(id)a0 error:(id *)a1;

@end
