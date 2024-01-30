@class WDProfile, NSMutableDictionary, HBXUnitSupport, HKHealthChartFactory;

@interface HBXViewControllerFactory : NSObject

@property (class, readonly, nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x0; } x0; unsigned int x1; } factoriesLock;
@property (class, readonly, nonatomic) NSMutableDictionary *factories;

@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) HBXUnitSupport *unitSupport;
@property (retain, nonatomic) HKHealthChartFactory *chartFactory;

+ (id)sharedInstance;
+ (id)sharedInstanceForHealthStore:(id)a0;
+ (void)resetSharedInstances;

- (id)initWithHealthStore:(id)a0;
- (id)notificationManager;
- (id)init;
- (void).cxx_destruct;
- (id)createActivityChartForActivityMoveMode:(long long)a0 displayDate:(id)a1 activityOptions:(unsigned long long)a2 chartSharableModel:(id)a3;
- (void)createAndStartExportForViewController:(id)a0;
- (id)createDataSourcesTableViewController:(id)a0;
- (id)createDeviceStoredDataViewControllerForDevice:(id)a0 withHealthStore:(id)a1 usingInsetStyling:(BOOL)a2;
- (id)createHKUnitPreferenceController;
- (id)createListViewController:(id)a0;
- (id)createLocalDeviceStoredDataViewControllerForSource:(id)a0 withHealthStore:(id)a1 usingInsetStyling:(BOOL)a2;
- (id)createResearchStudySourcesViewControllerUsingInsetStyling:(BOOL)a0 restorationStudyBundleIdentifier:(id)a1;
- (id)createSingleAppAuthorizationViewControllerUsingInsetStyling:(BOOL)a0 restorationApplicationBundleIdentifier:(id)a1;
- (id)createUnitPreferencesController:(id)a0;
- (id)createWatchStoredDataViewControllerForSource:(id)a0 withHealthStore:(id)a1 usingInsetStyling:(BOOL)a2;
- (id)detailViewControllerForSourceModel:(id)a0 withHealthStore:(id)a1;
- (id)localizedUnitDisplayNameForDisplayType:(id)a0 nameContext:(long long)a1;
- (id)createClinicalDocumentOverviewViewController;
- (id)createDeletedSourceMessageViewControllerForSource:(id)a0;
- (id)localizedDisplayNameForUnit:(id)a0;
- (id)preferredUnitForType:(id)a0;
- (id)unitStringForType:(id)a0;
- (id)createAppSourcesViewControllerUsingInsetStyling:(BOOL)a0;
- (id)createBuddyViewControllerWithHealthDetailsLast:(BOOL)a0;
- (id)createChartForTypeIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 minimumSize:(struct CGSize { double x0; double x1; })a3 disableXAxis:(BOOL)a4;
- (id)createContactConsolidationControllerInViewController:(id)a0;
- (id)createDeviceSourcesViewControllerUsingInsetStyling:(BOOL)a0;
- (id)createElectrocardiogramDataMetadataViewControllerWithElectrocardiogram:(id)a0 dataProvider:(id)a1;
- (id)createElectrocardiogramListDataProvider;
- (id)createFavoritesController;
- (id)createInteractiveChartForType:(id)a0 preferredOverlay:(long long)a1 displayDate:(id)a2;
- (id)createInteractiveChartForType:(id)a0 preferredOverlay:(long long)a1 displayDateInterval:(id)a2;
- (id)createSourcesViewControllerUsingInsetStyling:(BOOL)a0;
- (void)fetchUserDefaultForKey:(id)a0 withCallback:(id /* block */)a1;
- (id)localizedPreferredUnitDisplayNameForType:(id)a0;
- (id)localizedPreferredUnitDisplayNameForType:(id)a0 nameContext:(long long)a1;
- (void)updatePreferredUnit:(id)a0 forType:(id)a1;

@end
