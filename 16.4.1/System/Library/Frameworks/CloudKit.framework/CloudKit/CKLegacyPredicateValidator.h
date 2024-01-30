@interface CKLegacyPredicateValidator : CKPredicateValidator

- (void)validateCompoundPredicate:(id)a0;
- (BOOL)validateContainsAllInPredicate:(id)a0;
- (unsigned long long)_comparisonOptionForString:(id)a0;
- (void)validateComparisonPredicate:(id)a0;
- (BOOL)validateInPredicate:(id)a0;
- (BOOL)validateContainsAnyPredicate:(id)a0;
- (BOOL)validateContainsPredicate:(id)a0;
- (BOOL)validateFullTextSearchPredicate:(id)a0;
- (void)validate:(id)a0;
- (BOOL)validateBetweenPredicate:(id)a0;
- (BOOL)validateNearPredicate:(id)a0;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (BOOL)validateBeginsWithPredicate:(id)a0;
- (BOOL)validateBasicOperatorPredicate:(id)a0;

@end
