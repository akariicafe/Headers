@class NSArray, NSString;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor

@property (nonatomic) unsigned long long paymentFundingSourceTypes;
@property (nonatomic) unsigned long long paymentPresets;
@property (nonatomic) unsigned long long paymentFrequencies;
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData;
@property (copy, nonatomic) NSString *paymentTermsIdentifier;
@property (copy, nonatomic) NSString *fundingSourceTermsIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToCreditAccountFeatureDescriptor:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
