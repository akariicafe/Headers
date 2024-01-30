@interface HKCardioFitnessPopulationNormsViewModel : HKPopulationNormsAbstractViewModel

- (id)footerText;
- (id)viewTitle;
- (id)ageBucketsTitle;
- (id)associatedSampleType;
- (id)chartTitle;
- (id)classificationIndexForSampleValue:(double)a0 age:(long long)a1 sex:(long long)a2;
- (id)currentDataForBiologicalSex;
- (id)hk_UIAutomationIdentifier;
- (id)levelsTitle;
- (id)localizedClassificationDescriptionForIndex:(unsigned long long)a0;
- (id)localizedClassificationNameForIndex:(unsigned long long)a0;
- (id)localizedClassificationTitleForIndex:(unsigned long long)a0;
- (double)maximumSampleValueQuantity;
- (unsigned long long)maximumUserAgeBucketIndex;
- (double)minimumSampleValueQuantity;
- (unsigned long long)numberOfClassifications;
- (id)quantityUnitTitle;
- (id)seriesHighlightedColor;
- (id)seriesHighlightedSegmentColor;
- (BOOL)shouldShowClassificationTitle;

@end
