@class NSFetchedResultsController, NSString, NSArray, NSTimer, NSDate, NSNumber, STUsageDetailsViewModel;
@protocol STPersistenceControllerProtocol;

@interface STUsageDetailsViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STUsageDetailsViewModelCoordinator>

@property (class, copy) NSString *defaultDeviceIdentifierForLocalUser;
@property (class, copy) NSNumber *defaultUsageReportTypeForLocalUser;

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSNumber *userDSID;
@property (copy, nonatomic) NSArray *devices;
@property (readonly) long long usageContext;
@property (retain, nonatomic) id<STPersistenceControllerProtocol> persistenceController;
@property (retain, nonatomic) NSFetchedResultsController *usageBlocksFetchedResultsController;
@property (retain, nonatomic) NSDate *lastUsageDataRefreshTime;
@property (retain, nonatomic) NSTimer *usageDataRefreshTimer;
@property (nonatomic) unsigned long long usageDataRefreshReferenceCount;
@property (getter=isRefreshing) BOOL refreshing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) STUsageDetailsViewModel *viewModel;
@property (copy, nonatomic) NSString *selectedDeviceIdentifier;

+ (id)defaultDeviceIdentifierForChild:(id)a0;
+ (id)defaultUsageReportTypeForChild:(id)a0;
+ (void)setDefaultUsageReportType:(id)a0 childDSID:(id)a1;
+ (void)setDefaultDeviceIdentifier:(id)a0 childDSID:(id)a1;

- (void).cxx_destruct;
- (void)loadViewModelWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)controllerDidChangeContent:(id)a0;
- (void)startRefreshingUsageData;
- (void)stopRefreshingUsageData;
- (void)refreshUsageData;
- (id)initWithPersistenceController:(id)a0 organizationIdentifier:(id)a1 userDSID:(id)a2 devices:(id)a3 selectedDeviceIdentifier:(id)a4 selectedUsageReportType:(id)a5 usageContext:(long long)a6;
- (void)scheduleRefreshUsageData;
- (void)_refreshUsageDataAndReschedule;
- (void)_refreshUsageDataWithCompletion:(id /* block */)a0;
- (id)_usageBlocksWithUser:(id)a0 device:(id)a1 error:(id *)a2;
- (void)_loadAllHistoricalUsageWithUsageBlocks:(id)a0 selectedItemDisplayName:(id)a1 selectedDay:(unsigned long long)a2 selectedWeek:(unsigned long long)a3 hadUsageData:(BOOL)a4 referenceDate:(id)a5 completionHandler:(id /* block */)a6;
- (void)_loadTodayUsageWithUsageBlocks:(id)a0 selectedItemDisplayName:(id)a1 referenceDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)_loadLastWeekUsageWithUsageBlocks:(id)a0 selectedItemDisplayName:(id)a1 referenceDate:(id)a2 completionHandler:(id /* block */)a3;
- (id)_usageItemsWithUsageBlocks:(id)a0 lastUpdatedDate:(id *)a1 firstPickupByWeekdayByWeek:(id)a2 referenceDate:(id)a3 usageContext:(long long)a4;
- (void)_updateWeekAndDayReportsWithUsageItems:(id)a0 weekStartDate:(id)a1 lastUpdatedDate:(id)a2 referenceDate:(id)a3 selectedItemDisplayName:(id)a4 isSelectedWeek:(BOOL)a5 selectedDay:(unsigned long long)a6 weekUsageReports:(id)a7 dayUsageReports:(id)a8 dayUsageReportByWeekdays:(id)a9 firstPickupByWeekdayByWeek:(id)a10;

@end
