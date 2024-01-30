@interface HKCardioFitnessPopulationNormsViewModel : HKPopulationNormsAbstractViewModel

- (id)viewTitle;
- (id)footerText;
- (id)localizedClassificationDescriptionForIndex:(unsigned long long)a0;
- (id)localizedClassificationTitleForIndex:(unsigned long long)a0;
- (id)localizedClassificationNameForIndex:(unsigned long long)a0;
- (id)classificationIndexForSampleValue:(double)a0 age:(long long)a1 sex:(long long)a2;
- (unsigned long long)numberOfClassifications;
- (id)currentDataForBiologicalSex;
- (id)associatedSampleType;
- (id)seriesHighlightedColor;
- (id)chartTitle;
- (id)levelsTitle;
- (id)quantityUnitTitle;
- (id)ageBucketsTitle;
- (id)seriesHighlightedSegmentColor;
- (BOOL)shouldShowClassificationTitle;
- (unsigned long long)maximumUserAgeBucketIndex;
- (double)maximumSampleValueQuantity;
- (double)minimumSampleValueQuantity;

@end
