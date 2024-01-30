@interface WDAtrialFibrillationEventListDataProvider : WDSampleListDataProvider

- (long long)cellStyle;
- (id)sampleTypes;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (id)customCellForObject:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (double)customEstimatedCellHeight;
- (double)customCellHeight;

@end
