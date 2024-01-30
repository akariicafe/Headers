@class SCLPersistentSettings, NSString, NSURL, SCLSchoolModeCoordinatorConfiguration, SCLSettingsSyncCoordinator, NSMutableSet, SCLUnlockHistoryItem, SCLState, SCLScheduleSettings;

@interface SCLSchoolModeCoordinator : NSObject <SCLTransportControllerDelegate, SCLSchoolModeServerObserver> {
    int _firstUnlockToken;
    BOOL _hasReceivedFirstUnlock;
}

@property (readonly, nonatomic) NSMutableSet *clients;
@property (readonly, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) NSURL *scheduleURL;
@property (retain, nonatomic) SCLUnlockHistoryItem *pendingUnlockItem;
@property (retain, nonatomic) SCLPersistentSettings *persistentSettings;
@property (retain, nonatomic) SCLSettingsSyncCoordinator *settingsSyncCoordinator;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly, copy, nonatomic) SCLSchoolModeCoordinatorConfiguration *configuration;
@property (readonly, nonatomic) SCLState *currentState;
@property (retain, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)_configuration;
- (id)idsDevice;
- (void)setActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)server;
- (id)initWithConfiguration:(id)a0;
- (id)nrDevice;
- (id)scheduleSettings;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)fetchRecentUnlockHistoryItemsWithCompletion:(id /* block */)a0;
- (void)addUnlockHistoryItem:(id)a0 completion:(id /* block */)a1;
- (void)deleteHistoryWithCompletion:(id /* block */)a0;
- (void)server:(id)a0 didUpdateState:(id)a1 fromState:(id)a2;
- (void)transportController:(id)a0 didReceiveSchedule:(id)a1 forInitialSync:(BOOL)a2;
- (void)transportController:(id)a0 didReceiveUnlockHistoryItem:(id)a1;
- (id)currentScheduleSettingsForTransportController:(id)a0;
- (id)transportController;
- (void)_createSchoolTimeDirectoryIfNeeded;
- (void)_registerForFirstUnlockIfNeeded;
- (void)_requestRemoteScheduleSettingsIfNeeded;
- (void)_lock_loadPersistentSchedule;
- (id)historyStore;
- (void)activateSettingsSyncCoordinatorWithSettings:(id)a0;
- (void)_updateClientsWithSchedule:(id)a0 notify:(BOOL)a1;
- (void)_classCDataIsAvailable;
- (BOOL)applySchedule:(id)a0 forInitialSync:(BOOL)a1 error:(id *)a2;
- (void)_lock_updatePersistentSettingsWithBlock:(id /* block */)a0;
- (void)_noteHistoryDidUpdate;
- (void)_persistSettings:(id)a0;
- (BOOL)applySchedule:(id)a0 error:(id *)a1;
- (void)purgeOldHistoryItems;

@end
