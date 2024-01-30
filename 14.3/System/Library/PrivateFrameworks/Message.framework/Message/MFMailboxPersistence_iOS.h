@class MFMailboxProvider, EDPersistenceDatabase, MFMailMessageLibrary;

@interface MFMailboxPersistence_iOS : EDMailboxPersistence

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) MFMailboxProvider *mailboxProvider;

- (void).cxx_destruct;
- (BOOL)moveMailbox:(id)a0 newParentMailboxID:(id)a1;
- (void)serverCountsForMailboxScope:(id)a0 block:(id /* block */)a1;
- (id)initWithMailboxProvider:(id)a0 database:(id)a1 library:(id)a2;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)a0 createIfNecessary:(BOOL)a1;
- (BOOL)renameMailbox:(id)a0 newName:(id)a1;
- (BOOL)deleteMailbox:(id)a0;
- (BOOL)createMailbox:(id)a0 parentMailboxID:(id)a1;

@end
