@class PKPayLaterProductAssessmentInstallmentSummary, NSArray, NSDictionary, PKPayLaterPreliminaryAssessment, NSDecimalNumber;

@interface PKPayLaterProductAssessment : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_financingOptionIdentifierMap;
    PKPayLaterProductAssessmentInstallmentSummary *_lowestPossibleInstallmentSummary;
    NSDecimalNumber *_minimumAPR;
    NSDecimalNumber *_maximumAPR;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long productType;
@property (readonly, nonatomic) unsigned long long financingEligibility;
@property (readonly, copy, nonatomic) NSArray *financingOptions;
@property (readonly, nonatomic) PKPayLaterPreliminaryAssessment *preliminaryAssessment;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEligible;
- (id)analyticsFinancingOptionType;
- (id)financingOptionWithIdentifier:(id)a0;

@end
