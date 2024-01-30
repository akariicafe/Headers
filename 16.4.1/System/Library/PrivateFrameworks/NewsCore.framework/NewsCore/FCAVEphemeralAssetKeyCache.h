@class NSData, FCThreadSafeMutableDictionary;

@interface FCAVEphemeralAssetKeyCache : NSObject <FCAVAssetKeyCacheType> {
    FCThreadSafeMutableDictionary *_dictionary;
}

@property (readonly, copy, nonatomic) NSData *keyServerCertificate;

- (id)init;
- (void).cxx_destruct;
- (id)assetKeyForURI:(id)a0;
- (void)clearKeyServerCertificate;
- (void)importAVAssetKey:(id)a0;
- (id)interestTokenForKeyURIs:(id)a0;
- (void)removeAllAssetKeys;
- (void)saveAssetKeyData:(id)a0 creationDate:(id)a1 expirationDate:(id)a2 forURI:(id)a3;
- (void)saveKeyServerCertificate:(id)a0;

@end
