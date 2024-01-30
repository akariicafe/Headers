@class NSURL, HDSQLiteDatabase;

@interface HDIDSPersistentDictionary : NSObject {
    Class _objectClass;
    NSURL *_databaseURL;
    HDSQLiteDatabase *_database;
}

- (id)objectForKey:(id)a0;
- (void)didReceiveRequest:(id)a0 deviceID:(id)a1 type:(int)a2 length:(long long)a3;
- (void)_obliterateWithReason:(id)a0 preserveCopy:(BOOL)a1 generateStackshot:(BOOL)a2;
- (void).cxx_destruct;
- (void)didReceiveError:(id)a0 forMessageID:(id)a1;
- (void)didSendResponse:(id)a0 toRequest:(id)a1 deviceID:(id)a2 type:(int)a3 length:(long long)a4;
- (void)obliterateWithReason:(id)a0 preserveCopy:(BOOL)a1;
- (void)dealloc;
- (id)initWithURL:(id)a0 objectClass:(Class)a1;
- (BOOL)_openDB;
- (BOOL)_reallyOpenDB;
- (id)_dataFromObject:(id)a0;
- (void)_recordMappingOfRequest:(id)a0 toResponse:(id)a1;
- (void)didSendRequest:(id)a0 deviceID:(id)a1 type:(int)a2 length:(long long)a3;
- (void)_recordMessage:(id)a0 deviceID:(id)a1 type:(int)a2 outgoing:(BOOL)a3 request:(BOOL)a4 length:(long long)a5;
- (id)messageIDsForPendingOutgoingMessagesWithType:(int)a0 deviceID:(id)a1;
- (void)didCancel:(id)a0;
- (void)removeAllObjects;
- (void)_handleError:(id)a0 format:(id)a1;
- (BOOL)_createSchemaWithError:(id *)a0;
- (void)didFinishSending:(id)a0;
- (void)enumerateObjectsSortedByExpirationDate:(id /* block */)a0;
- (void)didReceiveResponse:(id)a0 toRequest:(id)a1 deviceID:(id)a2 type:(int)a3 length:(long long)a4;
- (id)_objectFromData:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)invalidate;
- (void)setObject:(id)a0 forKey:(id)a1 expires:(double)a2;

@end
