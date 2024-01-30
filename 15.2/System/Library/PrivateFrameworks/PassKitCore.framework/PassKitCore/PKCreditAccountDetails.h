@class NSDate, NSString, NSURL, PKCreditAccountRates, NSSet, PKCurrencyAmount, NSTimeZone, PKCreditAccountSummary;

@interface PKCreditAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSDate *mergeDate;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSTimeZone *productTimeZone;
@property (copy, nonatomic) NSSet *physicalCards;
@property (copy, nonatomic) NSSet *virtualCards;
@property (nonatomic) BOOL termsAcceptanceRequired;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSURL *associatedPassURL;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier;
@property (copy, nonatomic) NSString *associatedPassSerialNumber;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) PKCreditAccountSummary *accountSummary;
@property (retain, nonatomic) PKCreditAccountRates *rates;
@property (copy, nonatomic) NSSet *installmentPlans;
@property (readonly, nonatomic, getter=isInMonthOfMerge) BOOL inMonthOfMerge;
@property (readonly, copy, nonatomic) PKCurrencyAmount *cardBalance;
@property (readonly, copy, nonatomic) PKCurrencyAmount *totalBalance;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)installmentPlanWithIdentifier:(id)a0;
- (void)addOrUpdateVirtualCard:(id)a0;
- (void)removeVirtualCard:(id)a0;
- (id)virtualCardWithIdentifier:(id)a0;
- (void)addOrUpdatePhysicalCard:(id)a0;
- (long long)numberOfActiveInstallments;
- (long long)numberOfActiveStatementedInstallments;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)ingestExtendedAccountDetails:(id)a0;

@end
