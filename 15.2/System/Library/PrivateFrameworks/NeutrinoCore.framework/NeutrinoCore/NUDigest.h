@class NSString;

@interface NUDigest : NSObject {
    NSString *_stringValue;
    struct CC_MD5state_st { unsigned int A; unsigned int B; unsigned int C; unsigned int D; unsigned int Nl; unsigned int Nh; unsigned int data[16]; int num; } _context;
}

- (id)stringValue;
- (void)finalize;
- (void).cxx_destruct;
- (id)init;
- (void)addString:(id)a0;
- (void)addCString:(const char *)a0;
- (void)addBytes:(const void *)a0 length:(long long)a1;

@end
