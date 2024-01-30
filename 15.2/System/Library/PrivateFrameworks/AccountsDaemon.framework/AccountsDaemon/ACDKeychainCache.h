@class NSDictionary, NSMutableDictionary;

@interface ACDKeychainCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expirersLock;
}

@property unsigned int cacheValidityDuration;
@property (retain) NSDictionary *cachesByUsername;
@property (retain) NSMutableDictionary *expirersByUsername;

- (void)cacheData:(id)a0 forService:(id)a1 username:(id)a2 syncState:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)clearDataForService:(id)a0 username:(id)a1 syncState:(unsigned long long)a2;
- (void)clearCacheForSyncState:(unsigned long long)a0;
- (id)initWithValidityDuration:(unsigned int)a0;
- (id)dataForService:(id)a0 username:(id)a1 syncState:(unsigned long long)a2;

@end
