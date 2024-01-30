@class CKServerChangeToken, NSURL, NSError, BRCClientZone, BRCPQLConnection;

@interface BRCPendingChangesStream : NSObject {
    NSURL *_databaseURL;
    NSError *_error;
    BRCPQLConnection *_db;
    CKServerChangeToken *_startingChangeToken;
    BRCClientZone *_clientZone;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_openDB;
- (id)initWithServerZone:(id)a0;
- (BOOL)enumerateRecordsOfType:(long long)a0 block:(id /* block */)a1;
- (void)destroyDatabase;
- (void)fetchTokenState:(id /* block */)a0;
- (BOOL)saveEditedRecords:(id)a0 deletedRecordIDs:(id)a1 deletedShareIDs:(id)a2 serverChangeToken:(id)a3 clientChangeToken:(long long)a4 syncStatus:(long long)a5;
- (void)destroyDatabaseOnQueue:(BOOL)a0;
- (void)_dbBecameCorrupted;
- (void)_createSchemaIfNecessary;
- (long long)_recordTypeFromRecordID:(id)a0 isShare:(BOOL)a1 isDelete:(BOOL)a2;
- (void)_destroyDatabase;
- (id)saveError;

@end
