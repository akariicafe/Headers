@class NSString, NSArray, NSData;

@interface IDSAuthenticationSigningResult : NSObject

@property (readonly, nonatomic) NSString *serverVerifiableEncoding;
@property (readonly, nonatomic) NSArray *authenticationCertificateSignatures;
@property (readonly, nonatomic) NSData *inputData;
@property (readonly, nonatomic) NSData *nonce;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSubscriptionIdentifiers:(id)a0 authenticationCertificates:(id)a1 inputData:(id)a2 nonce:(id)a3 signature:(id)a4;

@end
