@class PKPayLaterFinancingPlanFundingSource;

@interface PKPayLaterUnavailablePassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)identifier;
- (void).cxx_destruct;
- (id)name;
- (id)initWithFundingSource:(id)a0;

@end
