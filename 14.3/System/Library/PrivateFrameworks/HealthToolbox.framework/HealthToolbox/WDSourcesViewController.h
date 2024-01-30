@class NSString, HKSourceListDataSource;

@interface WDSourcesViewController : WDHealthTableViewController <WDUserActivityResponder> {
    HKSourceListDataSource *_dataSource;
}

@property (copy, nonatomic) NSString *restorationSourceBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableViewSectionClasses;

- (void).cxx_destruct;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (id)uniqueUserActivityType;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)applicationWillEnterForeground;
- (void)pushViewController:(id)a0;
- (void)viewDidLoad;
- (id)initWithProfile:(id)a0 usingInsetStyling:(BOOL)a1;
- (void)_updateActivityForViewDidAppear;

@end
