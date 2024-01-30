@class NSData;

@interface WBSHistoryCrypto : NSObject {
    NSData *_cachedCryptographicKey;
}

@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) NSData *cryptographicKey;

- (id)_createCryptographicKey;
- (id)decryptDictionary:(id)a0;
- (id)initWithCryptographicKey:(id)a0 salt:(id)a1;
- (id)_createOrLoadCryptographicKey;
- (id)init;
- (id)encryptDictionary:(id)a0;
- (void).cxx_destruct;

@end
