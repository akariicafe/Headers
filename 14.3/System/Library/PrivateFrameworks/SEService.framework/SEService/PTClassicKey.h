@class NSData;

@interface PTClassicKey : NSObject {
    struct { struct { char *data; unsigned long long length; } version; struct { char *data; unsigned long long length; } assetACL; struct { char *data; unsigned long long length; } assetACLAttestation; struct { char *data; unsigned long long length; } keyBlob; struct { char *data; unsigned long long length; } encryptedWrappedKeyBlob; } ptKeyOutput;
    struct { struct { char *data; unsigned long long length; } version; struct { char *data; unsigned long long length; } instanceSerialNumber; struct { char *data; unsigned long long length; } publicKey; struct { char *data; unsigned long long length; } keyNumber; struct { char *data; unsigned long long length; } deviceInfos; struct { char *data; unsigned long long length; } counterLimit; struct { char *data; unsigned long long length; } counterIndex; } ptKeyBlob;
}

@property (readonly, nonatomic) NSData *keyData;

+ (id)withData:(id)a0 error:(id *)a1;

- (id)publicKey;
- (void).cxx_destruct;
- (unsigned int)keyNumber;
- (id)keyBlob;
- (id)assetACL;
- (id)assetACLAttestation;
- (struct { char *x0; unsigned long long x1; })keyBlobItem;
- (id)encryptedWrappedKeyBlob;
- (struct { char *x0; unsigned long long x1; })assetACLItem;
- (struct { char *x0; unsigned long long x1; })assetACLAttestationItem;
- (struct { char *x0; unsigned long long x1; })encryptedWrappedKeyBlobItem;

@end
