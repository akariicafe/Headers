@class EFSQLSchema, EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (readonly, nonatomic) EFSQLSchema *schema;

- (void).cxx_destruct;
- (BOOL)performMigrationStep;
- (id)initWithSQLiteConnection:(id)a0;
- (id)messagesTableStubSchema;
- (id)mailboxesTableStubSchema;
- (id)serverMessagesTableSchema;
- (id)serverLabelsTableSchema;
- (id)localMessageActionsTableSchema;
- (id)actionMessagesTableSchema;
- (id)actionLabelsTableSchema;
- (id)actionFlagsTableSchema;

@end
