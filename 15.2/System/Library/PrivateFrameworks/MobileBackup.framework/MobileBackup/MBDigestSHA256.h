@interface MBDigestSHA256 : MBDigest {
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } _context;
}

- (id)final;
- (void)updateWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)init;
- (void)finalWithBytes:(void *)a0 length:(unsigned long long)a1;

@end
