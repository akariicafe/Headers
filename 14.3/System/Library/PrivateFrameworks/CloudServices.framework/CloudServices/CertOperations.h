@interface CertOperations : NSObject

+ (id)certVersion:(struct __SecCertificate { } *)a0;
+ (id)rootTrustedVersionsForRootType:(unsigned int)a0 inEnvironment:(id)a1 duplicate:(BOOL)a2;
+ (id)rootBaseVersionsForRootType:(unsigned int)a0 inEnvironment:(id)a1 duplicate:(BOOL)a2;
+ (id)rootCurrentVersionForRootType:(unsigned int)a0 inEnvironment:(id)a1;
+ (BOOL)verifyCertData:(id)a0 withCert:(struct __SecCertificate **)a1 withPubKey:(struct __SecKey **)a2 stingray:(BOOL)a3 enroll:(BOOL)a4 env:(id)a5 duplicate:(BOOL)a6 sigVerification:(BOOL)a7 error:(id *)a8;

@end
