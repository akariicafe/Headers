@class NSData;

@interface _WKAuthenticatorAttestationResponse : _WKAuthenticatorResponse

@property (readonly, nonatomic) NSData *attestationObject;

- (id)initWithClientDataJSON:(id)a0 rawId:(id)a1 extensions:(void *)a2 attestationObject:(id)a3 attachment:(long long)a4;

@end
