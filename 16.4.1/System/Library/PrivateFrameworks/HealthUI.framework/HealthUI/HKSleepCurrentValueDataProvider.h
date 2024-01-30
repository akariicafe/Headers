@interface HKSleepCurrentValueDataProvider : HKValueDataProvider

- (id)currentValue;
- (id)_currentSleepQueryWithCompletion:(id /* block */)a0;
- (void)_dataProviderValueFromMostRecentSample:(id)a0 completion:(id /* block */)a1;
- (void)_fetchQueryResultFromDate:(id)a0 toDate:(id)a1 completion:(id /* block */)a2;
- (id)_queryDateRangeFromSampleDate:(id)a0;
- (id)fetchOperationWithCompletion:(id /* block */)a0;

@end
