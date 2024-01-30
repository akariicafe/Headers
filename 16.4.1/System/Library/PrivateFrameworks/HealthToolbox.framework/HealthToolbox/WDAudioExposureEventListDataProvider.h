@interface WDAudioExposureEventListDataProvider : WDSampleListDataProvider

- (long long)cellStyle;
- (id)sampleTypes;
- (id)titleForSection:(unsigned long long)a0;
- (id)customCellForObject:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;

@end
