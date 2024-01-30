@class CTPlanIdentifier, CTPlanTransferAttributes;

@interface CTInstalledPlan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTPlanIdentifier *planID;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;

- (id)iccid;
- (id)carrierName;
- (id)init;
- (void).cxx_destruct;
- (id)phoneNumber;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
