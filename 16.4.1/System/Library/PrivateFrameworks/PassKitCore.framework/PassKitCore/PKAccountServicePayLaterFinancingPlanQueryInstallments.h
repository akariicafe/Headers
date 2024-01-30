@class NSArray, NSDictionary;

@interface PKAccountServicePayLaterFinancingPlanQueryInstallments : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *installments;
@property (readonly, copy, nonatomic) NSDictionary *installmentIdentifierToFinancingPlan;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_installmentIdentifierToFinancingPlanDictionaryRepresentation;
- (id)_installmentIdentifiers;
- (BOOL)_isEqualToPayLaterFinancingPlanQueryInstallments:(id)a0;
- (id)initWithInstallment:(id)a0 installmentIdentifierToFinancingPlan:(id)a1;

@end
