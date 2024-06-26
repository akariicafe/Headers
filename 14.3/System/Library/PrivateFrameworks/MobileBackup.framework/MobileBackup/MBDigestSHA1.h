@interface MBDigestSHA1 : MBDigest {
    struct CC_SHA1state_st { unsigned int h0; unsigned int h1; unsigned int h2; unsigned int h3; unsigned int h4; unsigned int Nl; unsigned int Nh; unsigned int data[16]; int num; } _context;
}

- (id)init;
- (id)final;
- (void)finalWithBytes:(void *)a0 length:(unsigned long long)a1;
- (void)updateWithBytes:(const void *)a0 length:(unsigned long long)a1;

@end
