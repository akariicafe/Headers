@class SRAuthorizationStore, NSArray, NSString, NSSet, SRAuthorizationGroup, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface SRResearchDataPerCategoryViewController : UITableViewController <SRAuthorizationCellDelegate, SRSensorReaderDelegate, SRSensorPrunerDelegate>

@property (retain, nonatomic) NSMutableSet *authorizedBundleIds;
@property (retain, nonatomic) NSMutableSet *authorizedWriterBundleIds;
@property (retain, nonatomic) NSArray *appBundles;
@property (retain, nonatomic) NSArray *writerAppBundles;
@property (retain, nonatomic) NSSet *sensorIdentifiers;
@property (retain, nonatomic) NSMutableArray *readers;
@property (retain, nonatomic) NSMutableArray *pruners;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (retain, nonatomic) NSMutableArray *tombstones;
@property (nonatomic) long long numberOfDays;
@property (copy) id /* block */ cancelExportBlock;
@property (retain, nonatomic) SRAuthorizationGroup *authGroup;
@property (retain) SRAuthorizationStore *authStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)cancelExport;
- (void)exportData;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)sensorReader:(id)a0 fetchingRequest:(id)a1 didFetchResult:(id)a2;
- (void)sensorReader:(id)a0 didCompleteFetch:(id)a1;
- (void)sensorReader:(id)a0 fetchingRequest:(id)a1 failedWithError:(id)a2;
- (void)authorizationSwitchToggledWithValue:(BOOL)a0 indexPath:(id)a1;
- (void)populateDays;
- (long long)tableSectionFromIndexPathSection:(long long)a0;
- (id)bundleForIndexPath:(id)a0;
- (id)prepareDayCell;
- (id)prepareDeleteCell;
- (id)prepareExportCell;
- (void)showActionSheet;
- (void)confirmAuthChangeForBundle:(id)a0 value:(BOOL)a1 authService:(id)a2 authorizedBundleIds:(id)a3 setOverride:(BOOL)a4;
- (long long)daysFromDate:(id)a0 toDate:(id)a1;
- (void)deleteAllUnreleasedData;
- (void)presentDownloadPath:(id)a0 sandboxExtensionToken:(id)a1;

@end
