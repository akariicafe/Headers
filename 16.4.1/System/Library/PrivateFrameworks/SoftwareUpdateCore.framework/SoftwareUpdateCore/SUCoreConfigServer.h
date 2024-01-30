@class NSTimer, NSString, NSDate, SUCoreFSM, NSMutableDictionary, MAAsset, SUCoreConfig, NSObject, SUCorePersistedState;
@protocol OS_dispatch_queue;

@interface SUCoreConfigServer : SUCoreConfig

@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSDate *lastScanTime;
@property (retain, nonatomic) NSDate *nextScanTime;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) MAAsset *lastLocatedAsset;
@property (retain, nonatomic) SUCoreFSM *stateMachine;
@property (retain, nonatomic) SUCorePersistedState *persistedState;
@property (retain, nonatomic) NSMutableDictionary *listenerDelegates;
@property (retain, nonatomic) SUCoreConfig *coreConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateQueue;

+ (id)_generateStateTable;
+ (id)allowedServerKeys;
+ (id)allowedServerProjects;
+ (id)persistedStateFilePath;
+ (id)sharedServerSettings;

- (long long)performAction:(id)a0 onEvent:(id)a1 inState:(id)a2 withInfo:(id)a3 nextState:(id)a4 error:(id *)a5;
- (void)dealloc;
- (long long)actionUnknownAction:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_stateSafeDetermineNextScanTime;
- (long long)actionConfigScheduleScan:(id)a0 error:(id *)a1;
- (id)_nextScanTimeFromDate:(id)a0;
- (id)_stateSafeDownloadOptions;
- (void)_stateSafeInformDelegatesOfConfiguration:(id)a0 error:(id)a1;
- (id)_stateSafeLoadUUIDString;
- (void)_stateSafeResetState;
- (id)_stateSafeSelectBestAssetFromArray:(id)a0 error:(id *)a1;
- (id)_stateSafeSelectBestAssetFromMultipleAssetArray:(id)a0 bestAsset:(id *)a1 selectionReason:(id *)a2;
- (void)_stateSafeSendInstalledEventWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_stateSafeSendNewEvent:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_stateSafeSendScheduledEventWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_stateSafeUpdateState;
- (long long)actionConfigAdjustSettings:(id)a0 error:(id *)a1;
- (long long)actionConfigDownloadAsset:(id)a0 error:(id *)a1;
- (long long)actionConfigDownloadCatalog:(id)a0 error:(id *)a1;
- (long long)actionConfigQueryAsset:(id)a0 error:(id *)a1;
- (void)installServerSettings;
- (void)listenForConfigChanges:(id)a0 withName:(id)a1;
- (id)scheduledActivityName;

@end
