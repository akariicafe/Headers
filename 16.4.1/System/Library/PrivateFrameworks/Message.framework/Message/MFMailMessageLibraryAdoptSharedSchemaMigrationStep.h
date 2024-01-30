@class NSString, EFSQLSchema, EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryAdoptSharedSchemaMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (readonly, copy, nonatomic) NSString *protectedDatabaseName;
@property (readonly, nonatomic) EFSQLSchema *schema;
@property (readonly, nonatomic) EFSQLSchema *protectedSchema;

+ (void)cleanUpAfterMigrationWithConnection:(id)a0;

- (id)_protectedMessageDataTableSchema;
- (id)_subjectsTableSchema;
- (id)_addressesTableSchema;
- (id)_summariesTableSchema;
- (void).cxx_destruct;
- (id)_messageReferencesTableSchema;
- (id)_spotlightTombstonesTableSchema;
- (id)_accountsTableSchema;
- (BOOL)_cleanupOldSchema;
- (id)_conversationIDMessageIDTableSchema;
- (id)_conversationsTableSchema;
- (BOOL)_createIndexes;
- (BOOL)_createTemporaryTables;
- (BOOL)_dropTemporaryTables;
- (BOOL)_initializeOldProtectedSchema;
- (id)_mailboxesTableSchema;
- (id)_messageDataDeletedTableSchema;
- (id)_messageDataTableSchema;
- (id)_messagesTableSchema;
- (BOOL)_migrateData;
- (BOOL)_migrateMessages;
- (BOOL)_migrateNonMessages;
- (BOOL)_migrateSendersAndRecipients;
- (BOOL)_migrateSubjects;
- (BOOL)_migrateSummaries;
- (id)_popUIDsTableSchema;
- (id)_propertiesTableSchema;
- (id)_recipientsTableSchema;
- (id)_spotlightMessageReindexTableSchema;
- (BOOL)_transformProtectedSchema;
- (BOOL)_transformSchema;
- (id)initWithSQLiteConnection:(id)a0 protectedDatabaseName:(id)a1;
- (BOOL)performMigrationStep;

@end
