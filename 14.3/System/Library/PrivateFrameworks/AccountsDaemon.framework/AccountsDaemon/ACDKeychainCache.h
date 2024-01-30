@class NSDictionary, NSMutableDictionary;

@interface ACDKeychainCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expirersLock;
}

@property unsigned int cacheValidityDuration;
@property (retain) NSDictionary *cachesByUsername;
@property (retain) NSMutableDictionary *expirersByUsername;

- (void)clearCache;
- (void).cxx_destruct;
- (id)initWithValidityDuration:(unsigned int)a0;
- (void)cacheData:(id)a0 forService:(id)a1 username:(id)a2;
- (id)dataForService:(id)a0 username:(id)a1;
- (void)clearDataForService:(id)a0 username:(id)a1;

@end
