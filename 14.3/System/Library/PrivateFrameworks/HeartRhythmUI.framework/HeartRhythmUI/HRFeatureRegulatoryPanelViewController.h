@class UINavigationController, NSArray, NSString, HKHeartRhythmAvailability, UIViewController;
@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;

@interface HRFeatureRegulatoryPanelViewController : HKTableViewController <HKHeartRhythmAvailabilityObserver, HRFeatureRegulatoryReenableFeatureActionDelegate>

@property (retain, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (weak, nonatomic) UIViewController<HRFeatureRegulatoryReenableFeatureActionDelegate> *delegate;
@property (retain, nonatomic) UINavigationController *onboardingNavigationController;
@property (readonly, nonatomic) NSArray *displayableItems;
@property (nonatomic) BOOL isElectrocardiogramRecordingOnboarded;
@property (nonatomic) BOOL isAtrialFibrillationDetectionOnboarded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseOldVersioningFormat;

- (void)protectedDataDidBecomeAvailable:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)heartRhythmAvailabilityDidUpdate;
- (id)initWithHealthStore:(id)a0 delegate:(id)a1;
- (void)viewDidLoad;
- (void)didSelectReenableFeatureForProductName:(id)a0;
- (void)receivedHeartRhythmAvailabilityNotification;

@end
