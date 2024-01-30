@interface WDHeartbeatSequenceListDataProvider : WDSampleListDataProvider

- (id)sampleTypes;
- (id)textForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (id)createQueryForSampleType:(id)a0 predicate:(id)a1 limit:(long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;
- (id)predicateForType:(id)a0;
- (id)secondaryTextForObject:(id)a0;

@end
