@class WDProfile, NSPredicate, NSString, HKDisplayType, NSMutableSet, NSMutableArray, HKUnitPreferenceController;

@interface WDSampleListStatisticsDataProvider : NSObject <WDDataListViewControllerDataProvider>

@property (retain) NSMutableArray *data;
@property (retain, nonatomic) NSMutableArray *activeDataQueries;
@property (retain, nonatomic) NSMutableSet *activeQueryTypes;
@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly, nonatomic) WDProfile *profile;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) NSPredicate *defaultQueryPredicate;
@property BOOL hasCompleteDataSet;
@property (copy, nonatomic) NSString *profileName;
@property (readonly, nonatomic) long long cellStyle;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) BOOL textAdjustsFontSizeToFitWidth;
@property (nonatomic) BOOL hasDetailViewController;
@property (readonly, nonatomic) double customCellHeight;
@property (readonly, nonatomic) double customEstimatedCellHeight;
@property (readonly) BOOL calendarDateSelectorVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sampleTypes;
- (void)deleteAllData;
- (void).cxx_destruct;
- (id)titleForSection:(unsigned long long)a0;
- (void)stopCollectingData;
- (id)textForObject:(id)a0;
- (id)secondaryTextForObject:(id)a0;
- (id)viewControllerForItemAtIndexPath:(id)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1;
- (void)startCollectingDataWithUpdateHandler:(id /* block */)a0;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)a0;
- (id)customCellForObject:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (void)deleteObjectsAtIndexPath:(id)a0 healthStore:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)customizeTableView:(id)a0;
- (id)_statisticsAtIndexPath:(id)a0;
- (void)viewControllerIsNearEndOfScreen;
- (void)_startPartialDataStatisticsCollectionQueryForSampleType:(id)a0 updateHandler:(id /* block */)a1;
- (id)_predicateForTheLastMonth;
- (unsigned long long)_statisticsOptionsForSampleType:(id)a0;
- (void)_handleResultsCollection:(id)a0 fromQuery:(id)a1 sampleType:(id)a2 areComplete:(BOOL)a3 withError:(id)a4 updateHandler:(id /* block */)a5;
- (void)_startCompleteDataStatisticsCollectionQueryForSampleType:(id)a0 updateHandler:(id /* block */)a1;

@end
