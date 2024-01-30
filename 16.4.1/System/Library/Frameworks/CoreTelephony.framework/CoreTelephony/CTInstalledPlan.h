@class CTPlanIdentifier, CTPlanTransferAttributes;

@interface CTInstalledPlan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTPlanIdentifier *planID;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)phoneNumber;
- (BOOL)isEqual:(id)a0;
- (id)carrierName;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)iccid;

@end
