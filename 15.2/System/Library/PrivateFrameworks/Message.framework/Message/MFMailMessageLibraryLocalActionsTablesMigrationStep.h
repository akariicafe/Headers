@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection;

+ (id)log;

- (void).cxx_destruct;
- (BOOL)performMigrationStep;
- (id)_serverMessagesTableDefinition;
- (id)_serverMessagesMessageIndexDefinition;
- (id)_serverLabelsTableDefinition;
- (id)_localMessageActionsTableDefinition;
- (id)_localMessageActionsMailboxRowIDIndexDefinition;
- (id)_actionMessagesTableDefinition;
- (id)_actionMessagesActionIndexDefinition;
- (id)_actionMessagesMessageIndexDefinition;
- (id)_actionMessagesDestinationMessageIndexDefinition;
- (id)_actionLabelsTableDefinition;
- (id)_actionLabelsActionIndexDefinition;
- (id)_actionLabelsLabelIndexDefinition;
- (id)_actionFlagsTableDefinition;
- (id)_actionFlagsActionIndexDefinition;
- (BOOL)_populateServerMessages;
- (id)_offlineCacheOperations;
- (id)initWithSQLiteConnection:(id)a0;

@end
