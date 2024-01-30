@interface CertOperations : NSObject

+ (id)certVersion:(struct __SecCertificate { } *)a0;
+ (id)rootTrustedVersionsForRootType:(unsigned int)a0 altDSID:(id)a1 inEnvironment:(id)a2 duplicate:(BOOL)a3;
+ (id)rootBaseVersionsForRootType:(unsigned int)a0 altDSID:(id)a1 inEnvironment:(id)a2 duplicate:(BOOL)a3;
+ (id)rootCurrentVersionForRootType:(unsigned int)a0 altDSID:(id)a1 inEnvironment:(id)a2;
+ (void)storeTerms:(id)a0 withAltDSID:(id)a1 reply:(id /* block */)a2;
+ (void)fetchTermsWithAltDSID:(id)a0 reply:(id /* block */)a1;
+ (BOOL)moveToFederationAllowed:(id)a0 altDSID:(id)a1;
+ (id)knownICDPFederations;
+ (BOOL)verifyCertData:(id)a0 withCert:(struct __SecCertificate **)a1 withPubKey:(struct __SecKey **)a2 stingray:(BOOL)a3 enroll:(BOOL)a4 altDSID:(id)a5 env:(id)a6 duplicate:(BOOL)a7 sigVerification:(BOOL)a8 error:(id *)a9;

@end
