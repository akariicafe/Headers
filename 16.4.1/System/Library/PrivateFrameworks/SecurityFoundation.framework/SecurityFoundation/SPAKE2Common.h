@class NSString, NSData, _SFAESKey;

@interface SPAKE2Common : NSObject <SPAKE2Protocol>

@property struct ccrng_state { void /* function */ *x0; } *rng;
@property struct ccspake_ctx { struct ccspake_cp *x0; struct ccspake_mac *x1; struct ccrng_state *x2; BOOL x3; unsigned long long x4; char *x5; unsigned char x6; unsigned long long x7[0]; } *spake_ctx;
@property (retain) NSString *code;
@property (retain) NSData *salt;
@property const struct ccspake_cp { } *cp;
@property const struct ccspake_mac { } *mac;
@property (retain) NSData *w0;
@property (retain) NSData *w1;
@property unsigned long long w_size;
@property unsigned long long point_size;
@property (retain) _SFAESKey *session_key;
@property BOOL verified;

- (void)dealloc;
- (id)decryptMessage:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isVerified;
- (id)encryptMessage:(id)a0 error:(id *)a1;
- (BOOL)generateStateWithError:(id *)a0;
- (id)getKey;
- (id)getMsg1WithError:(id *)a0;
- (id)getMsg2WithError:(id *)a0;
- (id)initWithSalt:(id)a0 code:(id)a1;
- (BOOL)processMsg1:(id)a0 error:(id *)a1;
- (BOOL)processMsg2:(id)a0 error:(id *)a1;
- (BOOL)setupProver:(id *)a0;
- (BOOL)setupVerifier:(id *)a0;

@end
