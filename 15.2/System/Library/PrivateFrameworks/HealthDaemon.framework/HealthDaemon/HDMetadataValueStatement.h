@class HDDatabaseTransaction;

@interface HDMetadataValueStatement : HDSQLiteStatement

@property (readonly, nonatomic) HDDatabaseTransaction *transaction;

+ (id)metadataValueStatementWithTransaction:(id)a0;

- (void).cxx_destruct;
- (BOOL)enumerateResultsForObjectID:(long long)a0 error:(id *)a1 block:(id /* block */)a2;

@end
