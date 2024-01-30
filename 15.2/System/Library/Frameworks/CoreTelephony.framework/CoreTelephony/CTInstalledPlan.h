@class CTPlanIdentifier, CTPlanTransferAttributes;

@interface CTInstalledPlan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTPlanIdentifier *planID;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;

- (id)iccid;
- (id)phoneNumber;
- (id)carrierName;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
