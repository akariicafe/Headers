@class SSXPCConnection, SSKeyValueStoreDatabase;

@interface SSKeyValueStore : NSObject {
    SSXPCConnection *_connection;
    SSKeyValueStoreDatabase *_database;
    BOOL _useLocalRead;
    BOOL _useLocalWrite;
}

@property (readonly, getter=isLocalReadable) BOOL localReadable;
@property (readonly, getter=isLocalWritable) BOOL localWritable;

+ (BOOL)isLocalReadable;

- (id)init;
- (void)readUsingSessionBlock:(id /* block */)a0;
- (id)accountDictionaries;
- (void)setValuesWithDictionary:(id)a0 forDomain:(id)a1;
- (void)dealloc;
- (void)setValue:(id)a0 forDomain:(id)a1 key:(id)a2 completionBlock:(id /* block */)a3;
- (id)copyAccounts;
- (id)iTunesValueForKey:(id)a0 usedDomain:(id *)a1;
- (void)removeAccountFromDomain:(id)a0;
- (void)getValueForDomain:(id)a0 key:(id)a1 usingBlock:(id /* block */)a2;
- (void)getValuesForDomain:(id)a0 keys:(const id *)a1 count:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)removeAllValuesForDomain:(id)a0 completionBlock:(id /* block */)a1;
- (void)setValue:(id)a0 forDomain:(id)a1 key:(id)a2;
- (void)setValuesWithDictionary:(id)a0 forDomain:(id)a1 completionBlock:(id /* block */)a2;
- (void)removeAllValuesForDomain:(id)a0;
- (void)modifyUsingTransactionBlock:(id /* block */)a0;
- (void)_loadDatabaseIfNecessary;
- (void)removeAccountDictionaries;
- (void)removeAllValuesWithCompletionBlock:(id /* block */)a0;

@end
