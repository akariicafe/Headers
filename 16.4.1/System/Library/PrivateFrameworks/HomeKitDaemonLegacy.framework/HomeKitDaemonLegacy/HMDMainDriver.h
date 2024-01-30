@class NSString, HMDCloudManager, HMDRetailDemoModeRequestHandler, HMDHomeManager, HMDCoreData, NSObject, HMDUpdater, HMDAccessoryBrowser, HMDMetricsManager;
@protocol OS_dispatch_queue, OS_os_log;

@interface HMDMainDriver : NSObject <HMFLogging, HMDRelaunchHandling> {
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMDAccessoryBrowser *accessoryBrowser;
@property (retain, nonatomic) HMDCloudManager *cloudDataSyncManager;
@property (retain, nonatomic) HMDUpdater *updater;
@property (retain, nonatomic) HMDRetailDemoModeRequestHandler *retailDemoModeRequestHandler;
@property (retain, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) HMDCoreData *coreData;
@property (readonly, nonatomic) HMDMetricsManager *metricsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)driver;
+ (id)logCategory;
+ (id)getLocalStoreFrom:(id)a0;
+ (id)loadHomeDataFromDemoModeStore:(id *)a0;
+ (id)loadHomeDataFromLocalStore:(id *)a0 decryptionFailed:(BOOL *)a1;
+ (id)loadHomeDataFromLocalStore:(id *)a0 fromLocation:(id)a1 decryptionFailed:(BOOL *)a2 forHH2Migration:(BOOL)a3;
+ (id)loadSQLArchiveWithDecryptionFail:(BOOL *)a0 fromLocation:(id)a1 forHH2Migration:(BOOL)a2 error:(id *)a3;

- (void)localeChanged;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)relaunch;
- (void)relaunchAfterDelay:(double)a0;
- (void)relaunchHomed;

@end
