@interface CryptoKitPrivate.RSAPSSSPKI_Bridging : NSObject {
    void /* unknown type, empty encoding */ backingStruct;
}

- (id)initWithData:(id)a0 error:(id *)a1;
- (const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; } *)mgf;
- (void).cxx_destruct;
- (id)init;
- (const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; } *)hashFunction;
- (id)publicKeyBytes;
- (unsigned long long)saltByteCount;

@end
