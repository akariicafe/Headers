@class NSString;

@interface CNAutocompleteLocalContactsFetcher : NSObject <CNAutocompleteLocalQueryDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)autocompleteResultsForProperties:(id)a0 contactPredicate:(id)a1 contactStore:(id)a2 resultFactory:(id)a3 error:(id *)a4;
- (id)autocompleteResultsForProperties:(id)a0 fetchResults:(id)a1 resultFactory:(id)a2 contactStore:(id)a3;
- (id)contactsForPredicate:(id)a0 properties:(id)a1 contactStore:(id)a2 error:(id *)a3;
- (BOOL)doesMatchInfo:(id)a0 matchProperties:(id)a1;
- (id)keysToFetchForProperties:(id)a0;
- (id)queryNameForLogging;
- (id)resultsForSearchString:(id)a0 terms:(id)a1 properties:(id)a2 contactStore:(id)a3 error:(id *)a4;
- (id /* block */)transformWithProperties:(id)a0 factory:(id)a1;

@end
