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

- (BOOL)getECCP:(const struct ccec_cp **)a0;
- (void).cxx_destruct;
- (BOOL)checkDHPublic;
- (BOOL)generatePublicKeyWithECPKey:(struct ccec_full_ctx { struct ccec_cp *x0; struct ccec_projective_point { unsigned long long x0[1]; } x1[0]; } *)a0 curveKey:(unsigned char[32] *)a1;
- (id)createSharedSecretForECPKey:(struct ccec_full_ctx { struct ccec_cp *x0; struct ccec_projective_point { unsigned long long x0[1]; } x1[0]; } *)a0 curveKey:(unsigned char[32] *)a1 remotePublicKey:(id)a2 publicKeySize:(unsigned long long)a3 dhContext:(struct OpaqueSecDHContext { } *)a4;
- (void)dealloc;

@end
