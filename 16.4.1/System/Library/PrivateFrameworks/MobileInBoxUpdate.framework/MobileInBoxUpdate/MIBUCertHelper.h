@interface MIBUCertHelper : NSObject

+ (BOOL)SUCertPresent;
+ (id)_getCertDataFromPath:(id)a0 error:(id *)a1;
+ (id)_parseDERCertificates:(id)a0 error:(id *)a1;
+ (id)certificatesFromData:(id)a0 error:(id *)a1;
+ (void)deleteSUCert:(id *)a0;
+ (void)readSUIdentityWithCompletion:(id /* block */)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)suCertKeyFromData:(id)a0 isSEPKey:(BOOL)a1 error:(id *)a2;
+ (void)trustCertificatesWithCompletion:(id /* block */)a0;

@end
