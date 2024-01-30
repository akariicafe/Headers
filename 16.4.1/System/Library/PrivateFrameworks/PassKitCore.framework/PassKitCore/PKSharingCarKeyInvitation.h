@class NSString, PKPassShareActivationOptions, PKSharingMesageProprietaryData;

@interface PKSharingCarKeyInvitation : PKSharingCarKeyMessage

@property (readonly, nonatomic) unsigned long long radioTechnology;
@property (readonly, nonatomic) NSString *vehicleModel;
@property (readonly, nonatomic) NSString *vehicleIssuer;
@property (readonly, nonatomic) NSString *readerIdentifier;
@property (readonly, nonatomic) NSString *partnerIdentifier;
@property (readonly, nonatomic) NSString *brandIdentifier;
@property (readonly, nonatomic) PKSharingMesageProprietaryData *proprietaryData;
@property (readonly, nonatomic) PKPassShareActivationOptions *activationOptions;

+ (BOOL)supportsSecureCoding;
+ (id)_activationOptionsFromDictionary:(id)a0;
+ (void)_mergeActivationOptions:(id)a0 intoDictionary:(id)a1;

- (void).cxx_destruct;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithRawInvite:(id)a0 shareIdentifier:(id)a1 radioTechnology:(unsigned long long)a2 vehicleModel:(id)a3 vehicleIssuer:(id)a4 readerIdentifier:(id)a5 partnerIdentifier:(id)a6 brandIdentifier:(id)a7 carKeySharingDict:(id)a8 proprietaryData:(id)a9 activationOptions:(id)a10 displayInformation:(id)a11;

@end
