@class NSString, NSDictionary, NSData, NSDate;

@interface SESWrapper : NSObject

@property (readonly, nonatomic) struct ccses_crypto_t { struct ccdigest_info *x0; struct ccdh_gp *x1; struct ccmode_ecb *x2; struct ccmode_ecb *x3; struct ccmode_cbc *x4; struct ccmode_cbc *x5; struct ccrng_state *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; } *ccses;
@property (readonly, nonatomic) struct ccsrp_ctx { struct ccdigest_info *x0; struct ccdh_gp *x1; struct ccrng_state *x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3 : 16; } x3; unsigned long long x4[1]; } *srp;
@property (readonly, nonatomic) BOOL useCKVR;
@property (nonatomic) int reqVersion;
@property (readonly, nonatomic) struct ckvr_srp_context { struct ccrng_state *x0; struct ccdigest_info *x1; struct ccmode_cbc *x2; struct ccmode_cbc *x3; struct ccmode_gcm *x4; struct ccmode_gcm *x5; struct ccsrp_ctx *x6; } *ckvr;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *recoveryPassphrase;
@property (nonatomic) BOOL recoveryPassphraseMutable;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *recordID;
@property (readonly, copy, nonatomic) NSDictionary *escrowRecord;
@property (copy, nonatomic) NSString *decodedLabel;
@property (copy, nonatomic) NSDate *escrowDate;
@property (retain, nonatomic) NSData *escrowBlob;
@property (retain) NSData *recoveryBlob;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)srpInitBlob;
- (void)srpRecoveryUpdateDSID:(id)a0 recoveryPassphrase:(id)a1;
- (id)srpRecoveryBlobFromData:(id)a0 error:(id *)a1;
- (id)initWithRequest:(id)a0 reqVersion:(int)a1;
- (id)initWithRequest:(id)a0 ckvrFlag:(BOOL)a1 reqVersion:(int)a2;
- (id)recoveryResponseForBlob:(id)a0;
- (id)initWithDSID:(id)a0 escrowRecordContents:(id)a1 recoveryPassphrase:(id)a2 recordID:(id)a3 recordLabel:(id)a4 ckvrFlag:(BOOL)a5 reqVersion:(int)a6;
- (id)srpResponseForEscrowBlob:(id)a0 withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 withFullCCKey:(struct ccrsa_full_ctx { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a2;
- (id)decodedEscrowRecordFromData:(id)a0 stingray:(BOOL)a1 enroll:(BOOL)a2 env:(id)a3 duplicate:(BOOL)a4;
- (unsigned long long)srpPublicKeySize;
- (unsigned long long)srpKeySize;
- (id)initWithDSID:(id)a0 escrowRecordContents:(id)a1 recoveryPassphrase:(id)a2 recordID:(id)a3 recordLabel:(id)a4;
- (id)encodedEscrowRecordWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 error:(id *)a1;

@end
