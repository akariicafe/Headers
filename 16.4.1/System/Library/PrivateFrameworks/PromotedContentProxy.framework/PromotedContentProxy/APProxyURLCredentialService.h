@class APMescalSigning;

@interface APProxyURLCredentialService : NSObject

@property (readonly, nonatomic) APMescalSigning *mescalSigningObject;

- (id)init;
- (void).cxx_destruct;
- (id)_signedCredentialForUrl:(id)a0 userAgent:(id)a1 withPersistence:(unsigned long long)a2;
- (id)signedCredentialForRequest:(id)a0 withPersistence:(unsigned long long)a1;
- (id)signedCredentialForUrl:(id)a0 userAgent:(id)a1 request:(id)a2 withPersistence:(unsigned long long)a3;
- (id)signedCredentialForUrl:(id)a0 userAgent:(id)a1 withPersistence:(unsigned long long)a2;

@end
