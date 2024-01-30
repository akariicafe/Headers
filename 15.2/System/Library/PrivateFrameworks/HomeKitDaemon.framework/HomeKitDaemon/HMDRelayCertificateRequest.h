@class NSData, NSString;

@interface HMDRelayCertificateRequest : HMFObject

@property (readonly, copy, nonatomic) NSData *publicKey;
@property (readonly, copy, nonatomic) NSString *challengeIdentifier;
@property (readonly, copy, nonatomic) NSData *challengeResponse;
@property (readonly, copy, nonatomic) NSData *challengeCertificate;

+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;
- (id)serializeWithError:(id *)a0;
- (id)initWithPublicKey:(id)a0 challengeIdentifier:(id)a1 challengeResponse:(id)a2 challengeCertificate:(id)a3;

@end
