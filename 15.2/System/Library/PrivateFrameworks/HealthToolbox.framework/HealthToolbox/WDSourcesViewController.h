@class NSString, HKSourceListDataSource;

@interface WDSourcesViewController : WDHealthTableViewController <WDUserActivityResponder> {
    HKSourceListDataSource *_appsDataSource;
    HKSourceListDataSource *_devicesDataSource;
}

@property (copy, nonatomic) NSString *restorationSourceBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableViewSectionClasses;

- (void)applicationWillEnterForeground;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)pushViewController:(id)a0;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (id)uniqueUserActivityType;
- (id)initWithProfile:(id)a0 usingInsetStyling:(BOOL)a1;
- (void)_updateActivityForViewDidAppear;

@end
