@class NSString, NSURL, FCKeyValueStore, NFUnfairLock;

@interface FCAVPersistentAssetKeyCache : NSObject <FCAVAssetKeyCacheType>

@property (readonly, copy, nonatomic) NSString *cacheDirectory;
@property (readonly, nonatomic) NFUnfairLock *initializationLock;
@property (readonly, nonatomic) FCKeyValueStore *keyStore;
@property (readonly, nonatomic) NSURL *certificateFileURL;

- (void)clearKeyServerCertificate;
- (void).cxx_destruct;
- (void)_initStore;
- (void)removeAllAssetKeys;
- (void)saveKeyServerCertificate:(id)a0;
- (void)_prepareForUse;
- (void)saveAssetKeyData:(id)a0 creationDate:(id)a1 expirationDate:(id)a2 forURI:(id)a3;
- (id)keyServerCertificate;
- (id)initWithCacheDirectory:(id)a0;
- (id)interestTokenForKeyURIs:(id)a0;
- (id)assetKeyForURI:(id)a0;
- (void)importAVAssetKey:(id)a0;

@end
