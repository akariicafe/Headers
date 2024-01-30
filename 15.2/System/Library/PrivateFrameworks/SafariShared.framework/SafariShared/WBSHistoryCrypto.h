@class NSData;

@interface WBSHistoryCrypto : NSObject {
    NSData *_cachedCryptographicKey;
}

@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) NSData *cryptographicKey;

- (id)encryptDictionary:(id)a0;
- (id)_createOrLoadCryptographicKey;
- (id)initWithCryptographicKey:(id)a0 salt:(id)a1;
- (void).cxx_destruct;
- (id)decryptDictionary:(id)a0;
- (id)init;
- (id)_createCryptographicKey;

@end
