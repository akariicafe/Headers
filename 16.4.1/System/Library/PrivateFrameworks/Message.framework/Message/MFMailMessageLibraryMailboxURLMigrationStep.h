@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject

@property (retain, nonatomic) EDPersistenceDatabaseConnection *sqliteConnection;

- (void).cxx_destruct;
- (void)_purgeFoldersMatchingPatterns:(id)a0;
- (BOOL)_renameMailboxDataFolders:(struct sqlite3 { } *)a0;
- (BOOL)_renameMailboxURLsForMailAccount:(id)a0 inSQLiteDB:(struct sqlite3 { } *)a1;
- (BOOL)_updateMailboxURLsInSQLitedb:(struct sqlite3 { } *)a0 withOldURLToNewURLMap:(id)a1;
- (id)initWithSQLiteConnection:(id)a0;
- (BOOL)performMigrationStep;

@end
