@class NSString;

@interface APSigningKeychainServices : NSObject

@property (retain, nonatomic) NSString *inProgressContextsKey;
@property (retain, nonatomic) NSString *inMemoryContextsKey;
@property (retain, nonatomic) NSString *usedContextsKey;
@property (retain, nonatomic) NSString *stashedContextsKey;

- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)_removeObjectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_objectForKey:(id)a0 error:(id *)a1;
- (id)_getKeyForType:(long long)a0;
- (id)_keychainQuery:(id)a0;
- (id)_allContextForKey:(id)a0;
- (void)_generateKeys;
- (id)_readDataFromKeychain:(id)a0 error:(id *)a1;
- (void)_writeDataToKeychain:(id)a0 andData:(id)a1;
- (id)contextsForType:(long long)a0;
- (void)removeAllContexts;
- (void)updateContext:(id)a0 forType:(long long)a1;

@end
