@class CTRemotePlanIdentifier, CTPlanTransferAttributes;

@interface CTRemotePlan : CTPlan

@property (retain, nonatomic) CTRemotePlanIdentifier *planID;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;

+ (BOOL)supportsSecureCoding;

- (id)iccid;
- (id)carrierName;
- (id)init;
- (void).cxx_destruct;
- (id)phoneNumber;
- (id)countryCode;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (void)encodeWithCoder:(id)a0;

@end
