@class NSString;

@interface ACFCryptograph : NSObject <ACFCryptographProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)randomDataOfLength:(unsigned long long)a0;
- (id)compressData:(id)a0;
- (void)fillHMACSuffix:(id)a0;
- (void)clearKey:(id)a0;
- (id)compactDataFromPropertyList:(id)a0;
- (id)decodeBase16:(id)a0;
- (id)decodeBase64:(id)a0;
- (id)decodeStringWithObscuredData:(id)a0;
- (id)decrypt3DESCBCData:(id)a0 withKey:(id)a1;
- (id)decryptAES128CBCData:(id)a0 withKey:(id)a1 initializationVector:(id)a2 pading:(BOOL)a3;
- (id)encodeBase16:(id)a0;
- (id)encodeBase64:(id)a0;
- (id)encodeObscuredDataWithString:(id)a0 length:(unsigned long long)a1;
- (id)encrypt3DESCBCData:(id)a0 withKey:(id)a1 pading:(BOOL)a2;
- (id)encryptAES128CBCData:(id)a0 withKey:(id)a1 initializationVector:(id)a2 pading:(BOOL)a3;
- (id)encryptData:(id)a0 withKey:(struct __SecKey { } *)a1;
- (void)fillEncryptionSuffix:(id)a0;
- (id)hashDataSHA1WithString:(id)a0;
- (id)hashDataSHA256WithData:(id)a0;
- (id)hashStringSHA1WithString:(id)a0;
- (id)hashStringSHA256WithString:(id)a0;
- (id)hmac256DataWithData:(id)a0 key:(id)a1;
- (id)randomStringOfLength:(unsigned long long)a0;
- (void)setLength:(unsigned long long)a0 toData:(id)a1;
- (id)sha1Context;
- (void)sha1Context:(id)a0 updateWithData:(id)a1;
- (id)sha1ContextFinalize:(id)a0;
- (id)signatureForData:(id)a0 withKey:(struct __SecKey { } *)a1;

@end
