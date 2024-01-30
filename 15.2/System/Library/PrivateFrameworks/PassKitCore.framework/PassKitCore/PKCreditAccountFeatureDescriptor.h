@class NSArray, NSString;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor

@property (nonatomic) unsigned long long paymentFundingSourceTypes;
@property (nonatomic) unsigned long long paymentPresets;
@property (nonatomic) unsigned long long paymentFrequencies;
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData;
@property (copy, nonatomic) NSString *paymentTermsIdentifier;
@property (copy, nonatomic) NSString *fundingSourceTermsIdentifier;
@property (nonatomic) unsigned long long maximumAccountUsers;
@property (nonatomic) unsigned long long minimumOwnerAge;
@property (nonatomic) unsigned long long minimumParticipantAge;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToCreditAccountFeatureDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;

@end
