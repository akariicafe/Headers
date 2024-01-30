@interface HKRemoteCardioFitnessDataSource : HKQuantityTypeDataSource

- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (id /* block */)_cardioFitnessUserInfoCreationBlockWithAge:(long long)a0 biologicalSex:(long long)a1;
- (id /* block */)_userInfoBlockWithUnitController:(id)a0 displayType:(id)a1;
- (id)initWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;

@end
