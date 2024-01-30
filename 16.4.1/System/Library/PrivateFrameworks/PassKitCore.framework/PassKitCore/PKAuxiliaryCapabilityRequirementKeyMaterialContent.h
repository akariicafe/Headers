@class NSData, NSArray;

@interface PKAuxiliaryCapabilityRequirementKeyMaterialContent : NSObject

@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSArray *attestation;
@property (retain, nonatomic) NSArray *secondaryAttestation;
@property (retain, nonatomic) NSData *authorization;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSArray *certificateChain;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)a0;

@end
