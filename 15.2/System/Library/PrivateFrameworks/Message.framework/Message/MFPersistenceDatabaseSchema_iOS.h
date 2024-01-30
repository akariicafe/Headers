@class EFSQLTableSchema;

@interface MFPersistenceDatabaseSchema_iOS : EDPersistenceDatabaseSchema <EDPersistenceDatabaseSchemaProvider>

@property (class, readonly, nonatomic) EFSQLTableSchema *mailboxesTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *messageDataTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *messageDataDeletedTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *popUIDsTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *accountsTableSchema;

+ (id)_messagesTableSchemaAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)additionalSchemaProviders;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

@end
