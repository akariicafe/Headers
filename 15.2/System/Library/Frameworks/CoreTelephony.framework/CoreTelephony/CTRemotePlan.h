@class CTRemotePlanIdentifier, CTPlanTransferAttributes, CTPlanSignUpDetails;

@interface CTRemotePlan : CTPlan

@property (retain, nonatomic) CTRemotePlanIdentifier *planID;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;
@property (retain, nonatomic) CTPlanSignUpDetails *signUpDetails;
@property (nonatomic) unsigned long long addOnPurchaseType;
@property (nonatomic) unsigned long long addOnCarrierFlowType;

+ (BOOL)supportsSecureCoding;

- (id)iccid;
- (id)phoneNumber;
- (id)carrierName;
- (void)encodeWithCoder:(id)a0;
- (id)countryCode;
- (id)description;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
