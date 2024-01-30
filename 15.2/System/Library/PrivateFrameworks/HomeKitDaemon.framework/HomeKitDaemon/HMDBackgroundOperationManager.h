@class NSString, HMFTimer, HAPPairingIdentity, HMDBackgroundOperationGraph, NSOperationQueue, HMDHomeManager, NSMutableArray, HMFUnfairLock;

@interface HMDBackgroundOperationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMutableArray *operationList;
@property (retain, nonatomic) NSMutableArray *dataSourceList;
@property (retain, nonatomic) NSString *backgroundOperationsDataStorePath;
@property (readonly, nonatomic) HMFTimer *expirationTimer;
@property (readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer;
@property (readonly, nonatomic) HMDBackgroundOperationGraph *opGraph;
@property (retain, nonatomic) HAPPairingIdentity *hh1Key;
@property (retain, nonatomic) HAPPairingIdentity *hh2Key;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (id)logCategory;
+ (id)sharedManager;
+ (id)getAllPairedAccessoriesOfAllHomes:(id)a0;
+ (id)getAllReachableAccessories:(id)a0;
+ (id)findAccessoryUsing:(id)a0 homeManager:(id)a1;
+ (id)findAccessoryUsing:(id)a0 fromHome:(id)a1;
+ (id)findHomeUsingIdentifier:(id)a0 homeManager:(id)a1;

- (id)dumpState;
- (void)timerDidFire:(id)a0;
- (void)addDataSource:(id)a0;
- (void)registerForNotifications:(BOOL)a0;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)removeOperation:(id)a0;
- (void)scheduleHH2KeyRollForAccessory:(id)a0;
- (void)_scheduleHH2KeyRollIfNecessary:(id)a0;
- (BOOL)shouldWeScheduleKeyRollOperationsOnThisDevice;
- (BOOL)addOperationDependency:(id)a0 dependsOn:(id)a1;
- (void)startSchedulingKeyRollOperations:(BOOL)a0 forAccessory:(id)a1;
- (void)scheduleHH2KeyRollIfNecessaryDueToNotification:(id)a0;
- (void)scheduleHH2KeyRollIfNecessary;
- (void)makeSureToLoadPairingIdentities;
- (void)auditKeyChainEntryForAccessory:(id)a0;
- (void)scheduleHH2KeyRollOperationForHome:(id)a0 isResident:(BOOL)a1;
- (id)getHH1ControllerKey;
- (id)getHH2ControllerKey;
- (void)auditKeyChainEntriesAndScheduleKeyRollOperationsIfNecessaryForHome:(id)a0;
- (BOOL)scheduleHH2KeyRollForAccessory:(id)a0 previousIdentity:(id)a1 newIdentity:(id)a2;
- (void)removeOperationsForAccessoryIdentifier:(id)a0 operationKind:(id)a1;
- (id)initWithLocalStorePath:(id)a0;
- (void)addDefaultDataSources;
- (void)dataSourceHasUpdate:(id)a0;
- (void)_dataSourceHasUpdate:(id)a0;
- (void)_runOperationsAfterEvaluatingPredicate:(id)a0;
- (void)_runOperation:(id)a0 withParameters:(id)a1;
- (void)checkAndRemoveExpiredOperations;
- (void)scheduleTimerToCheckAndRemoveExpiredOperation;
- (void)completeProcessingForOperation:(id)a0;
- (id)unarchiveFromDisk;
- (void)removeAllOperationsBeforeStartingHH2Migration;
- (void)removeAllOperationForAccessoryIdentifier:(id)a0;
- (id)__getReadyToExecuteOperations;
- (void)__removeAllDataSourcesForUnitTesting;
- (void)__removeAllOperationsForUnitTesting;
- (void)__resetAndRebuildOperationGraphForUnitTesting;
- (void)__clearLocalStoreForUnitTesting;
- (id)__initForUnitTesting;
- (id)__unarchiveFromDiskForUnitTesting;
- (void)__archiveToDiskForUnitTesting:(id)a0;

@end
