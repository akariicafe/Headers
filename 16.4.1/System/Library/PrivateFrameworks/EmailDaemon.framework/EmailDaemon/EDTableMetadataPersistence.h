@interface EDTableMetadataPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>

+ (long long)largestDeletedRowIDForTableName:(id)a0 withConnection:(id)a1;
+ (BOOL)updateLargestDeletedRowID:(long long)a0 forTableName:(id)a1 withConnection:(id)a2;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

@end
