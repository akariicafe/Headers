@class NSString, NSData;

@interface TKTokenKeychainKey : TKTokenKeychainItem

@property (readonly) unsigned long long keyUsage;
@property (copy) NSString *keyType;
@property (copy) NSData *applicationTag;
@property long long keySizeInBits;
@property (copy) NSData *publicKeyData;
@property (copy) NSData *publicKeyHash;
@property BOOL canDecrypt;
@property BOOL canSign;
@property BOOL canPerformKeyExchange;
@property (getter=isSuitableForLogin) BOOL suitableForLogin;

- (id)keychainAttributes;
- (void).cxx_destruct;
- (id)encodedObjectID;
- (void)createConstraints:(unsigned char)a0;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0 objectID:(id)a1;
- (id)initWithItemInfo:(id)a0;
- (BOOL)satisfiesKeyUsage:(unsigned long long)a0;

@end
