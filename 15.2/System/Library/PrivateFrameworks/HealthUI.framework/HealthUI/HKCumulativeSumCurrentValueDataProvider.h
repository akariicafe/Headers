@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider

- (id)currentValue;
- (id)fetchOperationWithCompletion:(id /* block */)a0;
- (id)_mostRecentValueQueryWithCompletion:(id /* block */)a0;
- (void)_dataProviderValueFromMostRecentSample:(id)a0 completion:(id /* block */)a1;
- (void)_sumFromDate:(id)a0 toDate:(id)a1 completion:(id /* block */)a2;

@end
