@interface TransparencyCertificateHelper : NSObject

+ (struct __SecCertificate { } *)certificateFromData:(id)a0 error:(id *)a1;
+ (BOOL)addTrustedCertificate:(id)a0 trustedKeys:(id)a1 error:(id *)a2;
+ (id)createCACertificatesArray:(id)a0 error:(id *)a1;
+ (id)copyTrustedKeysFromDataArray:(id)a0 error:(id *)a1;
+ (BOOL)verifyCertificates:(id)a0 intermediates:(id)a1 policy:(struct __SecPolicy { } *)a2 error:(id *)a3;
+ (BOOL)verifyLeaf:(id)a0 intermediates:(id)a1 policy:(struct __SecPolicy { } *)a2 error:(id *)a3;

@end
