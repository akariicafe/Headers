@interface AKCertificatePinning : NSObject

+ (BOOL)isValidCertificateTrust:(struct __SecTrust { } *)a0 forHostname:(id)a1;

@end
