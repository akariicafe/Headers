@class NSData;

@interface WBSHistoryCrypto : NSObject {
    NSData *_cachedCryptographicKey;
}

@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) NSData *cryptographicKey;

- (id)encryptDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCryptographicKey:(id)a0 salt:(id)a1;
- (id)decryptDictionary:(id)a0;
- (id)_createOrLoadCryptographicKey;
- (id)_createCryptographicKey;

@end
