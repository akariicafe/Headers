@interface MTRCertificates : NSObject

+ (void)initialize;
+ (id)convertMatterCertificate:(id)a0;
+ (id)convertX509Certificate:(id)a0;
+ (id)createCertificateSigningRequest:(id)a0 error:(id *)a1;
+ (id)createIntermediateCertificate:(id)a0 rootCertificate:(id)a1 intermediatePublicKey:(struct __SecKey { } *)a2 issuerID:(id)a3 fabricID:(id)a4 error:(id *)a5;
+ (id)createOperationalCertificate:(id)a0 signingCertificate:(id)a1 operationalPublicKey:(struct __SecKey { } *)a2 fabricID:(id)a3 nodeID:(id)a4 caseAuthenticatedTags:(id)a5 error:(id *)a6;
+ (id)createRootCertificate:(id)a0 issuerID:(id)a1 fabricID:(id)a2 error:(id *)a3;
+ (id)generateCertificateSigningRequest:(id)a0 error:(id *)a1;
+ (id)generateIntermediateCertificate:(id)a0 rootCertificate:(id)a1 intermediatePublicKey:(struct __SecKey { } *)a2 issuerId:(id)a3 fabricId:(id)a4 error:(id *)a5;
+ (id)generateOperationalCertificate:(id)a0 signingCertificate:(id)a1 operationalPublicKey:(struct __SecKey { } *)a2 fabricId:(id)a3 nodeId:(id)a4 caseAuthenticatedTags:(id)a5 error:(id *)a6;
+ (id)generateRootCertificate:(id)a0 issuerId:(id)a1 fabricId:(id)a2 error:(id *)a3;
+ (BOOL)isCertificate:(id)a0 equalTo:(id)a1;
+ (BOOL)keypair:(id)a0 matchesCertificate:(id)a1;
+ (id)publicKeyFromCSR:(id)a0 error:(id *)a1;

@end
