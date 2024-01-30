@class NSString, HMMatterHome;

@interface HMCHIPEcosystemPairAccessoryRequest : HMCHIPEcosystemRequest

@property (readonly, copy, nonatomic) HMMatterHome *home;
@property (readonly, copy, nonatomic) NSString *pairingIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)messageType;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPairingIdentifier:(id)a0 home:(id)a1;

@end
