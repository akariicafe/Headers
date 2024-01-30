@class NSString, NSArray, NSData, NSDictionary;

@interface CUAppleIDClient : NSObject {
    struct __SecCertificate { } *_myCertificate;
    struct __SecIdentity { } *_myIdentity;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_mySecretKey;
    NSData *_myValidationData;
    struct __SecCertificate { } *_peerCertificate;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_peerPublicKey;
    BOOL _peerSignatureVerified;
    NSDictionary *_peerValidationDict;
    BOOL _peerValidated;
    int _securityLevel;
}

@property (copy, nonatomic) NSData *myCertificateData;
@property (copy, nonatomic) NSData *mySecretKeyData;
@property (copy, nonatomic) NSString *mySecretKeyType;
@property (copy, nonatomic) NSString *myAppleID;
@property (retain, nonatomic) CUAppleIDClient *myInfoClient;
@property (copy, nonatomic) NSString *peerAppleID;
@property (copy, nonatomic) NSArray *peerAppleIDs;
@property (copy, nonatomic) NSData *peerCertificateData;
@property (copy, nonatomic) NSData *peerValidationData;
@property (readonly, nonatomic) int securityLevel;

- (id)signData:(id)a0 error:(id *)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)_getMySecretKeyAndReturnError:(id *)a0;
- (BOOL)validatePeerWithFlags:(unsigned int)a0 error:(id *)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)_getPeerPublicKeyAndReturnError:(id *)a0;
- (id)copyMyCertificateDataAndReturnError:(id *)a0;
- (id)copyMyAppleIDAndReturnError:(id *)a0;
- (struct __SecCertificate { } *)_getPeerCertificateAndReturnError:(id *)a0;
- (BOOL)verifyData:(id)a0 signature:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (struct __SecCertificate { } *)_getMyCertificateAndReturnError:(id *)a0;
- (id)copyMyValidationDataAndReturnError:(id *)a0;
- (struct __SecIdentity { } *)_getMyIdentityAndReturnError:(id *)a0;
- (void)dealloc;
- (BOOL)_validatePeerHashes:(id)a0;
- (id)signBytes:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (BOOL)verifyBytes:(const void *)a0 verifyLength:(unsigned long long)a1 signatureBytes:(const void *)a2 signatureLength:(unsigned long long)a3 error:(id *)a4;

@end
