@class NSData, NSMutableData;

@interface NEIKEv2DHKeys : NSObject

@property int desc;
@property int type;
@property (retain) NSData *prime;
@property int gen1;
@property int gen2;
@property (retain) NSData *curveA;
@property (retain) NSData *curveB;
@property (retain) NSData *order;
@property (retain) NSMutableData *publicKey;
@property unsigned long long publicKeySize;
@property struct OpaqueSecDHContext { } *context;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)getECCP:(const struct ccec_cp **)a0;
- (BOOL)checkDHPublic;
- (BOOL)generatePublicKeyWithECPKey:(struct ccec_full_ctx { struct ccec_cp *x0; unsigned char x1[8]; struct ccec_projective_point { unsigned long long x0[1]; } x2[0]; } *)a0 curveKey:(unsigned char[32] *)a1;
- (id)createSharedSecretForECPKey:(struct ccec_full_ctx { struct ccec_cp *x0; unsigned char x1[8]; struct ccec_projective_point { unsigned long long x0[1]; } x2[0]; } *)a0 curveKey:(unsigned char[32] *)a1 remotePublicKey:(id)a2 publicKeySize:(unsigned long long)a3 dhContext:(struct OpaqueSecDHContext { } *)a4;

@end
