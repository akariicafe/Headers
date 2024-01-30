@class SRAuthorizationGroup, NSArray, NSSet, NSMutableSet, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface SRResearchDataPerCategoryViewController : UITableViewController <SRAuthorizationCellDelegate, SRSensorReaderDelegate, SRSensorPrunerDelegate, SRAuthorizationStoreDelegate>

@property (retain, nonatomic) NSMutableSet *authorizedBundleIds;
@property (retain, nonatomic) NSArray *appBundles;
@property (retain, nonatomic) NSSet *sensorIdentifiers;
@property (retain, nonatomic) NSMutableArray *readers;
@property (retain, nonatomic) NSMutableArray *pruners;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (retain, nonatomic) NSMutableArray *tombstones;
@property (nonatomic) long long numberOfDays;
@property (copy) id /* block */ cancelExportBlock;
@property (retain, nonatomic) SRAuthorizationGroup *authGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void)dealloc;
- (void)cancelExport;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)exportData;
- (void)viewDidLoad;
- (BOOL)sensorReader:(id)a0 fetchingRequest:(id)a1 didFetchResult:(id)a2;
- (void)sensorReader:(id)a0 didCompleteFetch:(id)a1;
- (void)sensorReader:(id)a0 fetchingRequest:(id)a1 failedWithError:(id)a2;
- (void)setValue:(BOOL)a0 indexPath:(id)a1;
- (void)populateDays;
- (id)bundleForRow:(unsigned long long)a0;
- (id)prepareDayCell;
- (id)prepareDeleteCell;
- (id)prepareExportCell;
- (void)showActionSheet;
- (void)confirmAuthChangeForBundle:(id)a0 value:(BOOL)a1;
- (long long)daysFromDate:(id)a0 toDate:(id)a1;
- (void)deleteAllUnreleasedData;
- (void)presentDownloadPath:(id)a0 sandboxExtensionToken:(id)a1;

@end
