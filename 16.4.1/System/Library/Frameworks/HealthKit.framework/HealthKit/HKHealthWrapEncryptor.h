@class NSOutputStream, NSUUID, HKHealthWrapCodableMessageHeader, NSMutableData;

@interface HKHealthWrapEncryptor : NSObject {
    NSOutputStream *_outputStream;
    struct __SecCertificate { } *_certificate;
    unsigned int _algorithm;
    unsigned int _options;
    unsigned int _keySize;
    struct _CCCryptor { } *_cryptor;
    unsigned int _hmacAlgorithm;
    struct { unsigned int ctx[96]; } _hmacContext;
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } _sha256Context;
    NSMutableData *_buffer;
    NSUUID *_studyUUID;
    NSUUID *_uuid;
    HKHealthWrapCodableMessageHeader *_header;
    BOOL _compressionEnabled;
    unsigned long long _encryptedBytesCount;
}

- (BOOL)startWithError:(id *)a0;
- (BOOL)finalizeWithError:(id *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_writeStream:(const char *)a0 length:(unsigned long long)a1 hash:(BOOL)a2 error:(id *)a3;
- (BOOL)_appendEncryptedBytes:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (struct __SecKey { } *)_copyAndVerifyPublicKeyFromCertificate:(struct __SecCertificate { } *)a0 error:(id *)a1;
- (id)_encryptData:(id)a0 withCertificate:(struct __SecCertificate { } *)a1 error:(id *)a2;
- (BOOL)_finalizeCryptorWithError:(id *)a0;
- (BOOL)_startCryptorWithError:(id *)a0;
- (BOOL)_updateCryptorWithData:(id)a0 error:(id *)a1;
- (BOOL)_updateHeaderWithKey:(id)a0 iv:(id)a1 hmacKey:(id)a2 error:(id *)a3;
- (BOOL)appendData:(id)a0 error:(id *)a1;
- (id)initWithOutputStream:(id)a0 certificate:(struct __SecCertificate { } *)a1 algorithm:(unsigned int)a2 options:(unsigned int)a3 keySize:(unsigned int)a4 uuid:(id)a5 studyUUID:(id)a6 compressionEnabled:(BOOL)a7;

@end
