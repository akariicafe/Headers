@class HMBCloudDatabase, NSString, HMFUnfairLock, NSObject, CKContainer;
@protocol OS_dispatch_queue;

@interface HMDHH2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate, HMBCloudZoneDelegate> {
    HMFUnfairLock *_lock;
}

@property (nonatomic) BOOL autoFrameworkSwitch;
@property (retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone;
@property (retain, nonatomic) CKContainer *containerToCheckCloudKitReachability;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueueToCheckCloudKitReachability;
@property (copy, nonatomic) id /* block */ completionBlockToBeCalledBeforeSwitchingFramework;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)relaunchHomed:(id /* block */)a0;
+ (void)setHH2EnablementPreferenceKey:(BOOL)a0;
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
+ (void)switchBackToHH1AndRelaunch;
+ (void)switchToHH2AndRelaunchHomed;

- (void).cxx_destruct;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (id)initWithAutoSwitchEnabledWithFrameworkSwitchCompletionHandler:(id /* block */)a0;
- (id)initWithAutoSwitchDisabled;
- (id)initWithAutoSwitch:(BOOL)a0 callBeforeFrameworkSwitch:(id /* block */)a1;
- (void)createHH2CloudDatabaseAndStartSyncing;
- (void)performInitialSyncAndSwitchFrameworkIfRequired;
- (BOOL)waitForHH2SentinelZoneToBeFetchedFromCloud;
- (void)performInitialSync:(id /* block */)a0;
- (void)createHH2SentinelZoneWithCompletionHandler:(id /* block */)a0;
- (BOOL)waitForHH2SentinelZoneToBeCreated:(double)a0;
- (BOOL)checkExistenceOfHH2SentinelZone;
- (void)makeSureWeAreRunningInRightEnvironment;
- (BOOL)_areWeRunningInRightEnvironment;
- (void)waitForHH2SentinelZoneToBeRemoved;
- (void)removeHH2SentinelZoneWithCompletion:(id /* block */)a0;
- (BOOL)areCloudKitServersReachable;
- (void)waitForCloudKitAccountToBeAvailable;

@end
