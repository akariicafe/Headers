@interface WLAuthenticationUtilities : NSObject

+ (void)_appendBase64Data:(id)a0 toString:(id)a1;
+ (id)dataFromPEMFormattedData:(id)a0;
+ (id)pemFormattedCertificateData:(id)a0;
+ (id)hashWithString:(id)a0;
+ (void)generateSelfSignedCertificateWithOrganization:(id)a0 commonName:(id)a1 completion:(id /* block */)a2;

@end
