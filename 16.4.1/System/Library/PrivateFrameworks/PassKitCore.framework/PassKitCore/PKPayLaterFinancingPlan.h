@class NSDate, NSString, PKPayLaterFinancingPlanScheduleSummary, NSArray, PKPayLaterFinancingPlanSummary, PKPayLaterFinancingPlanFundingSource, PKPayLaterPaymentSource, PKPayLaterMerchant, PKPayLaterFinancingPlanTermsDetails;

@interface PKPayLaterFinancingPlan : NSObject <NSSecureCoding, NSCopying> {
    PKPayLaterPaymentSource *_paymentSource;
    NSString *_fundingSourceName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *planIdentifier;
@property (nonatomic) unsigned long long productType;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic) unsigned long long planChannel;
@property (nonatomic) BOOL requiresGenericMessaging;
@property (nonatomic, getter=isCancellable) BOOL cancellable;
@property (retain, nonatomic) PKPayLaterFinancingPlanSummary *planSummary;
@property (retain, nonatomic) PKPayLaterFinancingPlanScheduleSummary *scheduleSummary;
@property (retain, nonatomic) NSArray *disputes;
@property (retain, nonatomic) PKPayLaterMerchant *merchant;
@property (retain, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource;
@property (retain, nonatomic) PKPayLaterFinancingPlanTermsDetails *termsDetails;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long updateReasons;

+ (id)aprStringForNumber:(id)a0;
+ (id)completedFinancingPlanStates;
+ (BOOL)requiresGenericMessagingForAccount:(id)a0 financingPlans:(id)a1;
+ (BOOL)canMakePaymentsWithAccountState:(unsigned long long)a0;
+ (id)pendingFinancingPlanStates;
+ (id)activeFinancingPlanStates;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToPayLaterFinancingPlan:(id)a0;
- (void)_loadPaymentSource;
- (void)addUpdateReasons:(unsigned long long)a0;
- (id)displayableLoanIdentifier;
- (id)disputeWithIdentifier:(id)a0;
- (id)fundingSourceName;
- (BOOL)installmentWasPaidEarly:(id)a0;
- (id)nextDueInstallmentAfterInstallmentIdentifier:(id)a0;
- (id)paymentSource;
- (id)refundPaymentsNotAssociatedWithDispute;
- (BOOL)updateReasonIsInitialDownload;

@end
