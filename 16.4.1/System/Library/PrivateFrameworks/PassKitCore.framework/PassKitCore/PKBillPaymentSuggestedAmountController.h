@class _DPStringRecorder, PKAccountUserCollection, NSArray, NSMutableDictionary, PKTransactionSource, NSMutableArray, PKAccountServiceAccountResolutionCofiguration, NSDateFormatter, NSDecimalNumber, PKAccount;

@interface PKBillPaymentSuggestedAmountController : NSObject {
    NSDateFormatter *_monthAndDayFormatter;
    NSDateFormatter *_monthFormatter;
    NSDecimalNumber *_currentStatementPaymentsSum;
    NSDecimalNumber *_previousStatementPaymentsSum;
    NSDecimalNumber *_statementPurchasesSum;
    NSMutableDictionary *_merchantCategoryTransactionSums;
    BOOL _isOnPlanCompletion;
    BOOL _isOnPaymentPlan;
    BOOL _currentStatementIsLastMonthsStatement;
    BOOL _isMonthZero;
    BOOL _isMonthOne;
    long long _numberOfActiveInstallments;
    long long _numberOfActiveStatementedInstallments;
    NSMutableArray *_differentialPrivacyFeatures;
    _DPStringRecorder *_differentialPrivacyRecorder;
}

@property (retain, nonatomic) PKAccountServiceAccountResolutionCofiguration *configuration;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (readonly, nonatomic) PKTransactionSource *transactionSource;
@property (readonly, nonatomic) NSArray *currentStatementSelectedSuggestedAmountEvents;
@property (readonly, nonatomic) NSArray *previousStatementSelectedSuggestedAmountEvents;
@property (readonly, nonatomic) NSArray *approvedTransactionsPurchasesSinceStatement;
@property (readonly, nonatomic) NSArray *approvedTransactionsBillPaymentSinceStatement;
@property (readonly, nonatomic) NSArray *approvedTransactionsPurchasesForPreviousStatement;
@property (readonly, nonatomic) NSArray *approvedTransactionsBillPaymentForPreviousStatement;

+ (void)_approvedTransactionsForPreviousStatementForAccount:(id)a0 transactionSource:(id)a1 transactionType:(long long)a2 completion:(id /* block */)a3;
+ (void)_approvedTransactionsSinceStatementForAccount:(id)a0 transactionSource:(id)a1 transactionType:(long long)a2 completion:(id /* block */)a3;
+ (void)approvedTransactionsBillPaymentForPreviousStatementForAccount:(id)a0 transactionSource:(id)a1 completion:(id /* block */)a2;
+ (void)approvedTransactionsBillPaymentSinceStatementForAccount:(id)a0 transactionSource:(id)a1 completion:(id /* block */)a2;
+ (void)approvedTransactionsPurchasesForPreviousStatementForAccount:(id)a0 transactionSource:(id)a1 completion:(id /* block */)a2;
+ (void)approvedTransactionsPurchasesSinceStatementForAccount:(id)a0 transactionSource:(id)a1 completion:(id /* block */)a2;
+ (void)currentStatementSelectedSuggestedAmountEventsForAccount:(id)a0 completion:(id /* block */)a1;
+ (void)defaultControllerForAccount:(id)a0 accountUserCollection:(id)a1 transactionSource:(id)a2 configuration:(id)a3 completion:(id /* block */)a4;
+ (void)previousStatementSelectedSuggestedAmountEventsForAccount:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)_populatePriorityValuesForList:(id)a0;
- (BOOL)_allMandatoryValuesAreSameAmount;
- (BOOL)_calculateCurrentStatementIsLastMonthsStatement;
- (id)_calculateThresholdForLastPaymentCategory:(unsigned long long)a0 statementBalance:(id)a1 suggestedAmountWithSameCategory:(id)a2;
- (BOOL)_categoryIsCurrentBalanceType:(unsigned long long)a0;
- (BOOL)_categoryIsPaymentPlan:(unsigned long long)a0;
- (id)_createDefaultAmountSuggestionListFromAccount;
- (id)_filterSuggestions:(id)a0 belowThreshold:(id)a1;
- (void)_generateAmountSuggestionListUsingTransactionHistoryForList:(id)a0;
- (void)_initializeDifferentialPrivacy:(id)a0 accountSummary:(id)a1;
- (id)_messageForSuggestion:(id)a0;
- (void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)a0 minMerchantCategory1:(long long *)a1 minMerchantCategory2:(long long *)a2 minMerchantCategorySum1:(id *)a3 minMerchantCategorySum2:(id *)a4;
- (id)_planCompletionTitleString;
- (void)_populateStringValuesForList:(id)a0;
- (id)_remainingStatementBalanceGapDescriptionText;
- (id)_remainingStatementBalanceGapTitleText;
- (id)_remainingStatementBalanceMessageString;
- (id)_remainingStatementBalanceTitleString;
- (void)_setDifferentialPrivacyFeature:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (BOOL)_suggestedAmountListIsValidAfterPurgeIfNecessary:(id)a0;
- (id)_suggestedAmountsForPayOffDateForStatementBalance:(id)a0 creditUtilization:(id)a1 lastPaymentCategory:(unsigned long long)a2;
- (id)_titleForSuggestion:(id)a0;
- (void)_zerothOrFirstMonthBillPaymentSuggestionsForList:(id)a0;
- (id)differentialPrivacyFeaturesAsString;
- (id)generateAmountSuggestionListWithFinHealth:(BOOL)a0;
- (id)initWithAccount:(id)a0 accountUserCollection:(id)a1 transactionSource:(id)a2 currentStatementSelectedSuggestedAmountEvents:(id)a3 previousStatementSelectedSuggestedAmountEvents:(id)a4 approvedTransactionsPurchasesSinceStatement:(id)a5 approvedTransactionsPurchasesForPreviousStatement:(id)a6 approvedTransactionsBillPaymentSinceStatement:(id)a7 approvedTransactionsBillPaymentForPreviousStatement:(id)a8 configuration:(id)a9;
- (void)recordPaymentActionWithDifferentialPrivacy:(unsigned long long)a0;

@end
