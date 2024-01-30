@interface SLDProcessVerifier : NSObject {
    void /* unknown type, empty encoding */ useStaticKeyForTesting;
    void /* unknown type, empty encoding */ $__lazy_storage_$_staticTestingKey;
}

+ (id)tagDataFromString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)signProcess:(id)a0 tag:(id)a1 error:(id *)a2;
- (id)verifyData:(id)a0 tag:(id)a1 error:(id *)a2;

@end
