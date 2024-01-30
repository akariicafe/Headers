@class AAFKeychainManager;

@interface CDPRecoveryKeyCache : NSObject {
    AAFKeychainManager *_keychainManager;
}

+ (id)sharedInstance;

- (BOOL)cacheRecoveryKey:(id)a0 forAltDSID:(id)a1 error:(id *)a2;
- (id)init;
- (void).cxx_destruct;
- (void)deleteCache;
- (id)fetchRecoveryKeyFromCacheForAltDSID:(id)a0;

@end
