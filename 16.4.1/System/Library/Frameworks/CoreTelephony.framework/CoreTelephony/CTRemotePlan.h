@class CTRemotePlanIdentifier, CTPlanTransferAttributes, CTPlanSignUpDetails;

@interface CTRemotePlan : CTPlan

@property (retain, nonatomic) CTRemotePlanIdentifier *planID;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;
@property (retain, nonatomic) CTPlanSignUpDetails *signUpDetails;
@property (nonatomic) unsigned long long addOnPurchaseType;
@property (nonatomic) unsigned long long addOnCarrierFlowType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)phoneNumber;
- (BOOL)isEqual:(id)a0;
- (id)countryCode;
- (id)carrierName;
- (id)init;
- (id)label;
- (id)description;
- (void).cxx_destruct;
- (id)iccid;

@end
