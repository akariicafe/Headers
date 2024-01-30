@class NSDecimalNumber;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *feePercentage;
@property (copy, nonatomic) NSDecimalNumber *minimumFee;
@property (copy, nonatomic) NSDecimalNumber *maximumFee;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;

@end
