@class NSString, HMDCloudManager, HMDHomeManager, HMDRetailDemoModeRequestHandler, HMBLocalDatabase, NSObject, HMDAccessoryBrowser, HMDUpdater, HMDCoreData, HMDMetricsManager;
@protocol OS_dispatch_queue;

@interface HMDMainDriver : NSObject <HMDRelaunchHandling, HMDCoreDataCloudTransformDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) HMDAccessoryBrowser *accessoryBrowser;
@property (retain, nonatomic) HMDCloudManager *cloudDataSyncManager;
@property (retain, nonatomic) HMDUpdater *updater;
@property (nonatomic, getter=isHH2MigrationInProgress) BOOL hh2MigrationInProgress;
@property (retain, nonatomic) HMDRetailDemoModeRequestHandler *retailDemoModeRequestHandler;
@property (retain, nonatomic) HMBLocalDatabase *localDatabase;
@property (retain, nonatomic) HMDCoreData *coreData;
@property (readonly, nonatomic) HMDMetricsManager *metricsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)driver;
+ (id)loadHomeDataFromLocalStore:(id *)a0 fromLocation:(id)a1 decryptionFailed:(BOOL *)a2 forHH2Migration:(BOOL)a3;
+ (id)getLocalStoreFrom:(id)a0;
+ (id)loadSQLArchiveWithDecryptionFail:(BOOL *)a0 fromLocation:(id)a1 forHH2Migration:(BOOL)a2 error:(id *)a3;
+ (id)loadHomeDataFromLocalStore:(id *)a0 decryptionFailed:(BOOL *)a1;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)localeChanged;
- (BOOL)cloudTransform:(id)a0 isPermittedForHomeWithModelID:(id)a1;
- (void)relaunch;
- (void)relaunchAfterDelay:(double)a0;
- (void)executeBTAJob:(const char *)a0 withXPCDict:(id)a1;
- (void)initBackgroundTaskAgent;
- (void)relaunchHomed;

@end
