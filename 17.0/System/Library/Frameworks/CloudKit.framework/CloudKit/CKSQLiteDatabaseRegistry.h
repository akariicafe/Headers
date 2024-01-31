@interface CKSQLiteDatabaseRegistry : CKSQLiteTable

+ (Class)entryClass;
+ (id)dbProperties;

- (id)databaseWithID:(id)a0;
- (id)entryForDatabase:(id)a0 refresh:(BOOL)a1 error:(id *)a2;
- (id)databaseIDForDatabase:(id)a0 error:(id *)a1;
- (id)registerDatabase:(id)a0;

@end
