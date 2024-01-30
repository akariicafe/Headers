@interface CKSSShare : NSObject {
    struct cczp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *_field;
    struct ccss_shamir_share { struct cczp *x0; unsigned int x1; unsigned long long x2[0]; } *_share;
    unsigned long long _share_size;
}

- (id)y;
- (void)dealloc;
- (unsigned int)x;
- (id)initWithParams:(struct ccss_shamir_parameters { struct cczp *x0; unsigned int x1; } *)a0 x:(unsigned int)a1 y:(id)a2;
- (id)initWithParams:(struct ccss_shamir_parameters { struct cczp *x0; unsigned int x1; } *)a0 share:(struct ccss_shamir_share { struct cczp *x0; unsigned int x1; unsigned long long x2[0]; } *)a1;
- (void)loadInitializedccShare:(struct ccss_shamir_share { struct cczp *x0; unsigned int x1; unsigned long long x2[0]; } *)a0;

@end
