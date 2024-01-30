@class NSString, EFSQLSchema, EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryAdoptSharedSchemaMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (readonly, copy, nonatomic) NSString *protectedDatabaseName;
@property (readonly, nonatomic) EFSQLSchema *schema;
@property (readonly, nonatomic) EFSQLSchema *protectedSchema;

+ (void)cleanUpAfterMigrationWithConnection:(id)a0;

- (void).cxx_destruct;
- (BOOL)_migrateData;
- (id)_messagesTableSchema;
- (id)_recipientsTableSchema;
- (id)_conversationsTableSchema;
- (id)_conversationIDMessageIDTableSchema;
- (id)_spotlightMessageReindexTableSchema;
- (id)_mailboxesTableSchema;
- (id)_propertiesTableSchema;
- (id)_messageDataTableSchema;
- (id)_messageDataDeletedTableSchema;
- (id)_popUIDsTableSchema;
- (id)_accountsTableSchema;
- (id)_spotlightTombstonesTableSchema;
- (id)_addressesTableSchema;
- (id)_subjectsTableSchema;
- (id)_summariesTableSchema;
- (id)_protectedMessageDataTableSchema;
- (BOOL)_initializeOldProtectedSchema;
- (BOOL)_transformSchema;
- (BOOL)_transformProtectedSchema;
- (BOOL)_createTemporaryTables;
- (BOOL)_dropTemporaryTables;
- (BOOL)_createIndexes;
- (BOOL)_cleanupOldSchema;
- (BOOL)_migrateNonMessages;
- (BOOL)_migrateSubjects;
- (BOOL)_migrateSummaries;
- (BOOL)_migrateSendersAndRecipients;
- (BOOL)_migrateMessages;
- (id)initWithSQLiteConnection:(id)a0 protectedDatabaseName:(id)a1;
- (BOOL)performMigrationStep;
- (id)_messageReferencesTableSchema;

@end
