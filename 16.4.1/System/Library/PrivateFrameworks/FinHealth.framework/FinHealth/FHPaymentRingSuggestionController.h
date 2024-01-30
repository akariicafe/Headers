@class NSArray, FHSearchSuggestionController;

@interface FHPaymentRingSuggestionController : NSObject {
    BOOL _isOnPlanCompletion;
    BOOL _isOnPaymentPlan;
    BOOL _currentStatementIsLastMonthsStatement;
    NSArray *_previousSelectedSuggestion;
    FHSearchSuggestionController *_searchController;
}

- (void).cxx_destruct;
- (BOOL)_categoryIsCurrentBalanceType:(unsigned long long)a0;
- (BOOL)_categoryIsPaymentPlan:(unsigned long long)a0;
- (id)_filterSuggestions:(id)a0 belowThreshold:(id)a1;
- (id)generatePaymentRingSuggestionsFromConvertedObjects:(id)a0 previousStatementPaymentsSum:(id)a1 currentStatementPaymentsSum:(id)a2 statementPurchasesSum:(id)a3 merchantCategoryTransactionSums:(id)a4 billPaymentSelectedSuggestedAmountData:(id)a5 isMonthZero:(BOOL)a6 isMonthOne:(BOOL)a7;
- (id)_abs:(id)a0;
- (BOOL)_allMandatoryValuesAreSameAmount:(id)a0;
- (id)_calculateThresholdForLastPaymentCategory:(unsigned long long)a0 statementBalance:(id)a1 lastPaymentCategoryAmount:(id)a2 previousStatementPaymentsSum:(id)a3 statementPurchasesSum:(id)a4;
- (BOOL)_fhEqualObjects:(id)a0 obj2:(id)a1;
- (void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)a0 minMerchantCategory1:(long long *)a1 minMerchantCategory2:(long long *)a2 minMerchantCategorySum1:(id *)a3 minMerchantCategorySum2:(id *)a4 merchantCategoryTransactionSums:(id)a5;
- (id)_suggestedAmountsForPayOffDateForStatementBalance:(id)a0 statementPurchasesSum:(id)a1 creditUtilization:(id)a2 lastPaymentCategory:(unsigned long long)a3;
- (id)_zerothOrFirstMonthPaymentRingSuggestionsForList:(id)a0;
- (id)generatePaymentRingSuggestion:(id)a0;

@end
