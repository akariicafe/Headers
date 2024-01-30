@class NSString, PKSecureElementCertificateSet;

@interface PKAccountAttestationRequest : NSObject

@property (retain, nonatomic) PKSecureElementCertificateSet *casdCertificate;
@property (copy, nonatomic) NSString *anonymizationSalt;

+ (id)_keychainItemWrapper;
+ (id)keychainDataWithError:(id *)a0;
+ (id)defaultAnonymizationSaltWithError:(id *)a0;
+ (id)setDefaultAnonymizationSalt:(id)a0;
+ (void)removeAccountAttesationData;
+ (void)removeLocalAccountAttesationData;
+ (id)createAnonymizationSalt;

- (void).cxx_destruct;

@end
