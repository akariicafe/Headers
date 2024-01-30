@class HKDataMetadataWorkoutRouteSection, NSArray, HKSample, HKLocationReadings, NSMutableArray, HKLocationFetcher;
@protocol HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider, HKDataMetadataViewControllerDelegate;

@interface HKDataMetadataViewController : HKTableViewController <HKDataMetadataSubsampleDelegate, HKDataMetadataReportAccessDelegate>

@property (readonly, nonatomic) NSArray *subSampleTypes;
@property (readonly, nonatomic) id<HKDataMetadataViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) HKLocationFetcher *locationFetcher;
@property (retain, nonatomic) HKLocationReadings *locationReadings;
@property (retain, nonatomic) id<HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider> regulatedFeatureInfoProvider;
@property (retain, nonatomic) HKDataMetadataWorkoutRouteSection *workoutRouteSection;
@property (retain, nonatomic) HKSample *sample;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)defaultPredicateForSampleType:(id)a0;
- (id)viewControllerForSampleType:(id)a0 subSamplePredicate:(id)a1 title:(id)a2;
- (id)accessViewControllerForSample:(id)a0 healthStore:(id)a1;
- (id)initWithSample:(id)a0 usingInsetStyling:(BOOL)a1 profileName:(id)a2 delegate:(id)a3;
- (void)_loadSections;
- (id)initWithSample:(id)a0 usingInsetStyling:(BOOL)a1 profileName:(id)a2 regulatedFeatureInfoProvider:(id)a3 delegate:(id)a4;
- (void)_fetchWorkoutRouteLocations;
- (void)_localeOrDisplayTypeChange:(id)a0;
- (void)_fetchSubSampleTypes;
- (BOOL)_addSectionIfNonNull:(id)a0;
- (void)_addWorkoutRouteSection;
- (void)_exportButtonAction:(id)a0;
- (void)_updateSubSampleTypes:(id)a0 error:(id)a1;
- (void)_fetchRoutesWithSamplesHandler:(id /* block */)a0;
- (void)finishedAggregateQuery;

@end
