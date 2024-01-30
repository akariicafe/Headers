@class HMFTimer, NSString, HMDBackgroundOperationGraph, HAPPairingIdentity, NSOperationQueue, NSMutableArray, HMDHomeManager;
@protocol HMDBackgroundOperationManagerCurrentDeviceStateDataSource;

@interface HMDBackgroundOperationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *operationList;
@property (retain, nonatomic) NSMutableArray *dataSourceList;
@property (retain, nonatomic) NSString *backgroundOperationsDataStorePath;
@property (readonly, nonatomic) HMFTimer *expirationTimer;
@property (readonly, nonatomic) HMFTimer *deferralTimer;
@property (readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer;
@property (readonly, nonatomic) HMDBackgroundOperationGraph *opGraph;
@property (retain, nonatomic) HAPPairingIdentity *hh1Key;
@property (retain, nonatomic) HAPPairingIdentity *hh2Key;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (readonly, nonatomic) id<HMDBackgroundOperationManagerCurrentDeviceStateDataSource> currentDeviceStateDataSource;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (id)findHomeUsingIdentifier:(id)a0 homeManager:(id)a1;
+ (id)findAccessoryUsing:(id)a0 fromHome:(id)a1;
+ (id)getAllReachableAccessories:(id)a0;
+ (id)findAccessoryUsing:(id)a0 homeManager:(id)a1;
+ (id)findHomeWhereThisDeviceIsConfirmedPrimaryResident:(id)a0;
+ (id)sharedManager;
+ (id)getAllPairedAccessoriesOfAllHomes:(id)a0;
+ (id)logCategory;

- (void)addOperation:(id)a0;
- (void)scheduleTimerToCheckAndRemoveExpiredOperation;
- (void)timerDidFire:(id)a0;
- (void)completeProcessingForOperation:(id)a0;
- (void)scheduleHH2KeyRollOperationForHome:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)scheduleHH2KeyRollIfNecessaryDueToNotification:(id)a0;
- (id)getHH2ControllerKey;
- (id)__unarchiveFromDiskForUnitTesting;
- (void)removeOperationsForAccessoryIdentifier:(id)a0 operationKind:(id)a1;
- (void)evaluateOperations;
- (void)removeAllOperationsBeforeStartingHH2Migration;
- (void)scheduleHH2KeyRollForAccessory:(id)a0;
- (void)__archiveToDiskForUnitTesting:(id)a0;
- (void)removeAllOperationForAccessoryIdentifier:(id)a0;
- (void)scheduleHH2KeyRollIfNecessary;
- (void)__removeAllOperationsForUnitTesting;
- (id)initWithLocalStorePath:(id)a0 currentDeviceStateDataSource:(id)a1;
- (void)makeSureToLoadPairingIdentities;
- (id)unarchiveFromDisk;
- (void)__resetAndRebuildOperationGraphForUnitTesting;
- (BOOL)_scheduleKeyRollForAccessory:(id)a0;
- (void)scheduleTimerToRetryDeferredOperations;
- (id)dumpState;
- (BOOL)shouldWeScheduleKeyRollOperationsOnThisDevice;
- (void)auditOwnerPairingForAirPlayAccessory:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)_runOperation:(id)a0 withParameters:(id)a1;
- (void)addDataSource:(id)a0;
- (void)auditKeyChainEntryForAccessory:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)addDefaultDataSources;
- (void)dataSourceHasUpdate:(id)a0;
- (id)__getReadyToExecuteOperations;
- (id)__initForUnitTesting:(id)a0;
- (BOOL)scheduleHH2KeyRollForAirPlayAccessory:(id)a0 previousIdentity:(id)a1 newIdentity:(id)a2;
- (void)_scheduleHH2KeyRollIfNecessary:(id)a0;
- (void)startSchedulingKeyRollOperations:(BOOL)a0 forAccessory:(id)a1;
- (void)registerForNotifications;
- (void)_runOperationsAfterEvaluatingPredicate:(id)a0;
- (void)_dataSourceHasUpdate:(id)a0;
- (void)__removeAllDataSourcesForUnitTesting;
- (BOOL)scheduleHH2KeyRollForAccessory:(id)a0 previousIdentity:(id)a1 newIdentity:(id)a2;
- (void)auditKeyChainEntriesAndScheduleKeyRollOperationsIfNecessaryForHome:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)removeOperation:(id)a0;
- (void)_scheduleHH2AirPlayKeyRollIfNecessary:(id)a0;
- (void)__clearLocalStoreForUnitTesting;
- (BOOL)addOperationDependency:(id)a0 dependsOn:(id)a1;
- (void)checkAndRemoveExpiredOperations;
- (void)scheduleHH2KeyRollForAirPlayAccessory:(id)a0;
- (void).cxx_destruct;
- (id)getHH1ControllerKey;

@end
