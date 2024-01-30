@class NSData, NSString;

@interface NSPPrivateAccessTokenRequest : NSObject {
    unsigned char _configKeyID;
    unsigned char _truncatedTokenKeyID;
    unsigned short _tokenType;
    unsigned short _issuerKEMID;
    unsigned short _issuerKDFID;
    unsigned short _issuerAEADID;
    NSData *_requestData;
    NSData *_blindedRequest;
    NSData *_issuerEncapKey;
    NSData *_issuerEncapKeyID;
    NSString *_originName;
    NSData *_encryptedTokenRequest;
    NSData *_requestKey;
    NSData *_requestSignature;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_ephemeralPrivateKey;
    struct cchpke_initiator { struct cchpke_params *x0; struct cchpke_context { unsigned char x0[88]; } x1; } *_hpkeContext;
    NSData *_hpkeEnc;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
