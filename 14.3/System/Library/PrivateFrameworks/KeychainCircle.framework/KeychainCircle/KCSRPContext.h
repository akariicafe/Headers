@class NSString;

@interface KCSRPContext : NSObject

@property struct ccsrp_ctx { struct ccdigest_info *x0; struct ccdh_gp *x1; struct ccrng_state *x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3 : 16; } x3; unsigned long long x4[1]; } *context;
@property struct ccrng_state { void /* function */ *x0; } *rng;
@property (retain) NSString *user;

+ (id)createWithUser:(id)a0 digestInfo:(const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; } *)a1 group:(struct ccdh_gp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a2 randomSource:(struct ccrng_state { void /* function */ *x0; } *)a3;

- (BOOL)isAuthenticated;
- (void).cxx_destruct;
- (id)getKey;
- (void)finalize;
- (id)dataForPassword:(id)a0;
- (const char *)userNameString;
- (id)initWithUser:(id)a0 digestInfo:(const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; } *)a1 group:(struct ccdh_gp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a2 randomSource:(struct ccrng_state { void /* function */ *x0; } *)a3;

@end
