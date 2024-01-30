@class NSData, FCThreadSafeMutableDictionary;

@interface FCAVEphemeralAssetKeyCache : NSObject <FCAVAssetKeyCacheType>

@property (readonly, nonatomic) FCThreadSafeMutableDictionary *dictionary;
@property (copy, nonatomic) NSData *keyServerCertificate;

- (id)init;
- (void)clearKeyServerCertificate;
- (void).cxx_destruct;
- (void)removeAllAssetKeys;
- (void)saveKeyServerCertificate:(id)a0;
- (void)saveAssetKeyData:(id)a0 creationDate:(id)a1 expirationDate:(id)a2 forURI:(id)a3;
- (id)interestTokenForKeyURIs:(id)a0;
- (id)assetKeyForURI:(id)a0;
- (void)importAVAssetKey:(id)a0;

@end
