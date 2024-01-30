@class NSData;

@interface WLSRPServer : NSObject {
    struct srp_st { int x0; int x1; struct cstr_st *x2; void *x3; void *x4; struct cstr_st *x5; void *x6; void *x7; void *x8; void *x9; void *x10; void *x11; struct cstr_st *x12; struct srp_meth_st *x13; void *x14; void *x15; void *x16; void /* function */ *x17; struct srp_server_lu_st *x18; } *_session;
}

@property (readonly, nonatomic) NSData *salt_s;
@property (readonly, nonatomic) NSData *serverPublicKey_B;
@property (readonly, nonatomic) NSData *sharedKey_K;
@property (readonly, nonatomic) NSData *hashOfProofOfMatch_HAMK;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 password:(id)a1;
- (BOOL)didReceiveClientPublicKey_A:(id)a0 proofOfMatch_M:(id)a1;
- (id)hmacDataForData:(id)a0;
- (BOOL)isHmacData:(id)a0 validForData:(id)a1;

@end
