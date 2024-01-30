@class NSDecimalNumber, NSArray, NSString, PKBillPaymentSuggestedAmount, NSMutableDictionary;

@interface PKBillPaymentSuggestedAmountList : NSObject {
    NSMutableDictionary *_suggestionsForCategory;
    NSMutableDictionary *_suggestionsForAmount;
    NSMutableDictionary *_suggestedAmountGapMessageForAmount;
}

@property (readonly, copy, nonatomic) NSArray *sortedSuggestedAmounts;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy, nonatomic) NSDecimalNumber *minimumAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *remainingStatementAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *maximumAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *smalllestSuggestionAmountBelowRemainingStatementAmount;
@property (retain, nonatomic) PKBillPaymentSuggestedAmount *initialSuggestedAmount;

+ (id)roundingHandler;
+ (id)boundaryAngle;
+ (unsigned long long)maximumNumberSuggestions;
+ (id)requiredSuggestedAmountCategories;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)canAddCategory:(unsigned long long)a0;
- (id)_boundaryAmount;
- (BOOL)_addSuggestedAmount:(id)a0 force:(BOOL)a1;
- (void)_createMandatorySuggestions;
- (id)_lastSuggestedAmountThatIsNotRequred;
- (void)_removeSuggestedAmount:(id)a0;
- (id)_smalllestSuggestionAmountBelowRemainingStatementAmount;
- (id)_sortedAmounts;
- (id)_sortedSuggestedAmounts;
- (BOOL)_suggestedAmountIsRequiredCategory:(id)a0;
- (id)_suggestedAmountThatIsNotRequired:(id)a0 suggestedAmount2:(id)a1;
- (void)_updateValues;
- (BOOL)addSuggestedAmount:(id)a0;
- (void)addSuggestedAmountGapMessage:(id)a0 forStartSuggestedAmount:(id)a1;
- (void)addSuggestedAmountList:(id)a0;
- (void)attemptToPurgeInvalidSuggestedAmounts;
- (id)billPaymentSelectedSuggestedAmountDataEventForAmount:(id)a0 accountIdentifier:(id)a1 statementIdentifier:(id)a2;
- (BOOL)canAddAmount:(id)a0;
- (BOOL)canAddAmount:(id)a0 andCategory:(unsigned long long)a1;
- (id)initWithCurrencyCode:(id)a0 remainingMinimumPayment:(id)a1 remainingStatementBalance:(id)a2 currentBalance:(id)a3;
- (BOOL)isValidWithUnableReason:(unsigned long long *)a0;
- (id)maximumSuggestedAmount;
- (id)maximumSuggestedAmountFromCategories:(id)a0;
- (id)minimumSuggestedAmount;
- (id)minimumSuggestedAmountFromCategories:(id)a0;
- (BOOL)suggestedAmount:(id)a0 isAdjoiningSuggestedAmount:(id)a1;
- (id)suggestedAmountAfterSuggestedAmount:(id)a0;
- (id)suggestedAmountBeforeSuggestedAmount:(id)a0;
- (id)suggestedAmountGapMessageForStartSuggestedAmount:(id)a0;
- (id)suggestedAmountWithCategory:(unsigned long long)a0;

@end
