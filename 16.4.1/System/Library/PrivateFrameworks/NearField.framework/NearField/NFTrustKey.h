@class NSString, NSArray, NSData, NSNumber;

@interface NFTrustKey : NFTrustObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSNumber *counterLimit;
@property (retain, nonatomic) NSNumber *counterValue;
@property (retain, nonatomic) NSArray *localValidations;
@property (retain, nonatomic) NSString *keyAttestationAuthority;
@property (retain, nonatomic) NSString *keyAttestation;

+ (BOOL)supportsSecureCoding;
+ (id)keyWithIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
