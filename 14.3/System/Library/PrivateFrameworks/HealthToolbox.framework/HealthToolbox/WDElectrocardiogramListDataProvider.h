@interface WDElectrocardiogramListDataProvider : WDSampleListDataProvider

@property (nonatomic) BOOL shouldConsiderRequeryDueToDeletedObjects;
@property (nonatomic) unsigned long long recentSampleLimit;

- (unsigned long long)numberOfSections;
- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)a0;
- (id)sampleTypes;
- (void)updateController:(id)a0 didReceiveUpdateForType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3;
- (id)createQueryForSampleType:(id)a0 predicate:(id)a1 limit:(long long)a2 sortDescriptors:(id)a3 resultsHandler:(id /* block */)a4;
- (id)textForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (id)customCellForObject:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (void)customizeTableView:(id)a0;
- (double)customEstimatedCellHeight;
- (double)customCellHeight;
- (id)placeholderCellAtIndexPath:(id)a0 tableView:(id)a1;
- (id)_cellForSample:(id)a0 indexPath:(id)a1 tableView:(id)a2 activeAlgorithmVersion:(long long)a3;
- (void)refineSamplesWithCompletion:(id /* block */)a0;
- (BOOL)calendarDateSelectorVisible;
- (BOOL)canEditRowAtIndexPath:(id)a0;
- (id)queryDateForSelectedDate:(id)a0;
- (id)customLoadingCellForRowAtIndexPath:(id)a0 tableView:(id)a1;

@end
