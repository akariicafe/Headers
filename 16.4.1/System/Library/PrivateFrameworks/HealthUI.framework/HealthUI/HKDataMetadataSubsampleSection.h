@class NSArray, HKHealthStore, HKSample, HKDisplayTypeController, HKUnitPreferenceController, NSMutableDictionary;
@protocol HKDataMetadataSubsampleDelegate;

@interface HKDataMetadataSubsampleSection : HKDataMetadataSection

@property (readonly, nonatomic) HKSample *sample;
@property (readonly, nonatomic) NSArray *subSampleTypes;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (readonly, weak, nonatomic) id<HKDataMetadataSubsampleDelegate> subsampleDelegate;
@property (retain, nonatomic) NSMutableDictionary *aggregationValue;

- (void).cxx_destruct;
- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)_formattedValueWithUnits:(id)a0 sampleType:(id)a1;
- (id)_mergeTypesForFixedValues:(id)a0 subSampleTypes:(id)a1;
- (id)_subSampleAggregatePredicate:(id)a0;
- (void)_submitAverageAggregateQueryForQuantityType:(id)a0 aggregateQueryFinishedBlock:(id /* block */)a1;
- (void)_submitCountStandHourQueryForSampleType:(id)a0 aggregateQueryFinishedBlock:(id /* block */)a1;
- (void)_submitSingleValueQueryForQuantityType:(id)a0 aggregateQueryFinishedBlock:(id /* block */)a1;
- (void)_submitSubSampleAggregateQueriesWithCompletion:(id /* block */)a0;
- (void)_submitSumAggregateQueryForQuantityType:(id)a0 aggregateQueryFinishedBlock:(id /* block */)a1;
- (id)_trimAndSortSampleTypes:(id)a0;
- (void)_updateAggregateValue:(id)a0 sampleType:(id)a1 aggregateQueryFinishedBlock:(id /* block */)a2;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (id)displayNameForSampleType:(id)a0 displayTypeController:(id)a1;
- (id)initWithSample:(id)a0 subSampleTypes:(id)a1 healthStore:(id)a2 displayTypeController:(id)a3 unitController:(id)a4 subsampleDelegate:(id)a5;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end
