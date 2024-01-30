@interface BCCertificatUtilities : NSObject

+ (struct __SecPolicy { } *)sslPolicyForHost:(id)a0 client:(BOOL)a1;
+ (BOOL)trustIncludesRevokedCertificate:(struct __SecTrust { } *)a0;
+ (struct __SecTrust { } *)trustReferenceWithCertificates:(id)a0 forPolicy:(struct __SecPolicy { } *)a1;

@end
