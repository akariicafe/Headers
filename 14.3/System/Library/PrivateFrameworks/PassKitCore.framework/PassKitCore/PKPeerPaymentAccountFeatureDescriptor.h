@class NSDecimalNumber, PKOSVersionRequirementRange;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange;
@property (copy, nonatomic) NSDecimalNumber *feePercentage;
@property (copy, nonatomic) NSDecimalNumber *minimumFee;
@property (copy, nonatomic) NSDecimalNumber *maximumFee;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
