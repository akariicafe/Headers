@class NSTimer, NSString, NSDate, NSObject, NSMutableArray, SBKAsynchronousTask, SBKRequestHandler, NSNumber;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;

@interface SBKUniversalPlaybackPositionStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isActive;
    BOOL _hasLocalChangesToSync;
    NSMutableArray *_pendingTaskBlocks;
    NSString *_domain;
    NSNumber *_accountIdentifier;
    unsigned long long _automaticSynchronizeOptions;
    double _initialAutosyncInterval;
    double _pollingLimitFromBag;
    double _autorefreshInterval;
    BOOL _refreshTimerActive;
    id _accountsObserver;
    id _prefsObserver;
}

@property (retain, nonatomic) SBKAsynchronousTask *currentTask;
@property (retain, nonatomic) SBKAsynchronousTask *lookupDomainVersionTask;
@property (retain, nonatomic) SBKAsynchronousTask *bagLookupTask;
@property (retain, nonatomic) SBKRequestHandler *currentTaskRequestHandler;
@property (retain, nonatomic) NSDate *dateToFireNextTimer;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly, weak, nonatomic) id<SBKUniversalPlaybackPositionDataSource> dataSource;
@property (nonatomic) unsigned long long automaticSynchronizeOptions;
@property (nonatomic) BOOL hasLocalChangesToSync;

+ (id)keyValueStoreItemIdentifierForItem:(id)a0;

- (void)becomeActive;
- (void)resignActive;
- (void).cxx_destruct;
- (id)init;
- (void)_timerFired:(id)a0;
- (void)dealloc;
- (void)deprecated_setDataSource:(id)a0;
- (id)initWithDomain:(id)a0 dataSource:(id)a1 automaticSynchronizeOptions:(unsigned long long)a2 isActive:(BOOL)a3;
- (id)initWithDomain:(id)a0 dataSource:(id)a1 automaticSynchronizeOptions:(unsigned long long)a2 accountIdentifier:(id)a3 isActive:(BOOL)a4;
- (id)initWithInitialUpdateDelay:(double)a0;
- (void)_onQueueUpdateTimerForActiveChanges;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)a0;
- (BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
- (BOOL)automaticallySynchronizeLocalChangesOnResignActive;
- (void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)a0;
- (BOOL)_automaticallySynchronizeOnBecomeActive;
- (BOOL)automaticallySynchronizeOnBecomeActive;
- (void)synchronizeImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)pushMetadataItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)pullMetadataItemWithItemIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)synchronizeImmediatelyWithCompletionBlock:(id /* block */)a0;
- (void)checkForAvailabilityWithCompletionBlock:(id /* block */)a0;
- (void)loadRemoteDomainVersionWithCompletionBlock:(id /* block */)a0;
- (void)loadBagContextWithCompletionBlock:(id /* block */)a0;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(id /* block */)a0;
- (void)_onQueueRunNextPendingTaskBlock;
- (void)_onQueueRunTaskWithName:(id)a0 taskCompletionHandler:(id /* block */)a1 runTaskBlock:(id /* block */)a2;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)_onQueuePushMetadataItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)_onQueuePullMetadataItemWithItemIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (id)_accountForSyncing;
- (void)_updateSettingsFromLoadedBagContext:(id)a0;
- (void)_onQueueLoadBagContextWithCompletionHandler:(id /* block */)a0;
- (void)_updateForStoreAccountsChange;
- (double)_effectiveAutorefreshRate;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)a0;
- (BOOL)_timerIsStopped;
- (void)_onQueueScheduleTimer;
- (void)_onQueueSuspendTimer;
- (void)_onQueueResumeTimer;
- (void)_onQueueStopTimer;
- (void)_onQueueStartNewTimer;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)a0;

@end
