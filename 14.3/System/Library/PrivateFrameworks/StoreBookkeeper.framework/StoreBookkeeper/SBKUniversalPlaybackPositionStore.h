@class NSObject, NSMutableArray, NSTimer, NSString, NSDate, SBKAsynchronousTask, SBKRequestHandler;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;

@interface SBKUniversalPlaybackPositionStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isActive;
    BOOL _hasLocalChangesToSync;
    NSMutableArray *_pendingTaskBlocks;
    NSString *_domain;
    unsigned long long _automaticSynchronizeOptions;
    double _initialAutosyncInterval;
    double _pollingLimitFromBag;
    double _autorefreshInterval;
    BOOL _refreshTimerActive;
    id _accountsObserver;
    id _prefsObserver;
}

@property (retain) SBKAsynchronousTask *currentTask;
@property (retain) SBKAsynchronousTask *lookupDomainVersionTask;
@property (retain) SBKAsynchronousTask *bagLookupTask;
@property (retain) SBKRequestHandler *currentTaskRequestHandler;
@property (retain) NSDate *dateToFireNextTimer;
@property (retain) NSTimer *timer;
@property (readonly, weak) id<SBKUniversalPlaybackPositionDataSource> dataSource;
@property unsigned long long automaticSynchronizeOptions;
@property BOOL hasLocalChangesToSync;

+ (id)keyValueStoreItemIdentifierForItem:(id)a0;

- (void)becomeActive;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resignActive;
- (void)_timerFired:(id)a0;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)a0;
- (void)_onQueueLoadBagContextWithCompletionHandler:(id /* block */)a0;
- (void)_updateForStoreAccountsChange;
- (id)initWithInitialUpdateDelay:(double)a0;
- (void)_onQueueStopTimer;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)a0;
- (void)_onQueueSuspendTimer;
- (BOOL)_automaticallySynchronizeOnBecomeActive;
- (void)_onQueueResumeTimer;
- (void)_onQueueUpdateTimerForActiveChanges;
- (BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)_onQueuePushMetadataItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)_onQueuePullMetadataItemWithItemIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (id)_accountForSyncing;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(id /* block */)a0;
- (void)_onQueueRunTaskWithName:(id)a0 taskCompletionHandler:(id /* block */)a1 runTaskBlock:(id /* block */)a2;
- (void)_onQueueStartNewTimer;
- (void)_onQueueRunNextPendingTaskBlock;
- (double)_effectiveAutorefreshRate;
- (void)_updateSettingsFromLoadedBagContext:(id)a0;
- (BOOL)_timerIsStopped;
- (void)_onQueueScheduleTimer;
- (void)deprecated_setDataSource:(id)a0;
- (id)initWithDomain:(id)a0 dataSource:(id)a1 automaticSynchronizeOptions:(unsigned long long)a2 isActive:(BOOL)a3;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)a0;
- (BOOL)automaticallySynchronizeLocalChangesOnResignActive;
- (void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)a0;
- (BOOL)automaticallySynchronizeOnBecomeActive;
- (void)synchronizeImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)pushMetadataItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)pullMetadataItemWithItemIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)synchronizeImmediatelyWithCompletionBlock:(id /* block */)a0;
- (void)checkForAvailabilityWithCompletionBlock:(id /* block */)a0;
- (void)loadRemoteDomainVersionWithCompletionBlock:(id /* block */)a0;
- (void)loadBagContextWithCompletionBlock:(id /* block */)a0;

@end
