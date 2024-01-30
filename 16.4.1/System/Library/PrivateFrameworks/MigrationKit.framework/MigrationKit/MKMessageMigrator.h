@class NSString, NSMutableDictionary;

@interface MKMessageMigrator : MKMigrator {
    NSString *_accountGUID;
    NSMutableDictionary *_groups;
    struct sqlite3 { } *_database;
}

- (void)delete;
- (void)begin;
- (void)rollback;
- (void)commit;
- (void)notify;
- (void)open;
- (void)dealloc;
- (void)close;
- (id)init;
- (void).cxx_destruct;
- (void)delete:(id)a0;
- (void)import;
- (void)import:(id)a0;
- (BOOL)_import:(id)a0;
- (BOOL)_performSimpleQuery:(id)a0;
- (id)chatIDForMessage:(id)a0 forHandleIDs:(id)a1 withGroup:(id)a2;
- (id)handleID:(id)a0;
- (id)handleIDs:(id)a0;
- (void)importDataEncodedInJSON:(id)a0;
- (id)insertAttachment:(id)a0 withMessage:(id)a1;
- (id)insertChatForMessage:(id)a0 forHandleIDs:(id)a1 withGroup:(id)a2;
- (id)insertHandle:(id)a0;
- (id)insertMessage:(id)a0 forHandleID:(id)a1 withGroup:(id)a2;
- (id)joinAttachment:(id)a0 message:(id)a1;
- (id)joinChat:(id)a0 handle:(id)a1;
- (id)joinChat:(id)a0 message:(id)a1 date:(long long)a2;
- (void)query:(id)a0;
- (void)updateClient;

@end
