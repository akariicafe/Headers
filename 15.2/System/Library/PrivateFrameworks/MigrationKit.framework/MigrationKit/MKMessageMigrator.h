@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MKMessageMigrator : NSObject {
    NSString *_accountGUID;
    NSMutableDictionary *_groups;
    struct sqlite3 { } *_database;
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)delete;
- (void)rollback;
- (void)close;
- (void)commit;
- (void)begin;
- (void)open;
- (unsigned long long)operationCount;
- (void)notify;
- (void).cxx_destruct;
- (id)init;
- (void)delete:(id)a0;
- (void)import:(id)a0;
- (void)dealloc;
- (BOOL)_performSimpleQuery:(id)a0;
- (void)importDataEncodedInJSON:(id)a0;
- (void)query:(id)a0;
- (BOOL)_import:(id)a0;
- (id)handleIDs:(id)a0;
- (id)insertMessage:(id)a0 forHandleID:(id)a1 withGroup:(id)a2;
- (id)insertAttachment:(id)a0 withMessage:(id)a1;
- (id)joinAttachment:(id)a0 message:(id)a1;
- (id)chatIDForMessage:(id)a0 forHandleIDs:(id)a1 withGroup:(id)a2;
- (id)joinChat:(id)a0 message:(id)a1;
- (id)handleID:(id)a0;
- (id)insertHandle:(id)a0;
- (id)joinChat:(id)a0 handle:(id)a1;
- (id)insertChatForMessage:(id)a0 forHandleIDs:(id)a1 withGroup:(id)a2;

@end
