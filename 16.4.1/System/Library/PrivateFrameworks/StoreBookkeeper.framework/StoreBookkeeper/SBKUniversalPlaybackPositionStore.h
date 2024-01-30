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

- (void)resignActive;
- (void)becomeActive;
- (void)dealloc;
- (void)_timerFired:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)a0 withCompletionBlock:(id /* block */)a1;
- (BOOL)_timerIsStopped;
- (id)initWithDomain:(id)a0 dataSource:(id)a1 automaticSynchronizeOptions:(unsigned long long)a2 isActive:(BOOL)a3;
- (void)_onQueueRunNextPendingTaskBlock;
- (id)_accountForSyncing;
- (BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
- (BOOL)_automaticallySynchronizeOnBecomeActive;
- (double)_effectiveAutorefreshRate;
- (void)_onQueueLoadBagContextWithCompletionHandler:(id /* block */)a0;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(id /* block */)a0;
- (void)_onQueuePullMetadataItemWithItemIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)_onQueuePushMetadataItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)_onQueueResumeTimer;
- (void)_onQueueRunTaskWithName:(id)a0 taskCompletionHandler:(id /* block */)a1 runTaskBlock:(id /* block */)a2;
- (void)_onQueueScheduleTimer;
- (void)_onQueueStartNewTimer;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)a0;
- (void)_onQueueStopTimer;
- (void)_onQueueSuspendTimer;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)_onQueueUpdateTimerForActiveChanges;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)a0;
- (void)_updateForStoreAccountsChange;
- (void)_updateSettingsFromLoadedBagContext:(id)a0;
- (BOOL)automaticallySynchronizeLocalChangesOnResignActive;
- (BOOL)automaticallySynchronizeOnBecomeActive;
- (void)checkForAvailabilityWithCompletionBlock:(id /* block */)a0;
- (void)deprecated_setDataSource:(id)a0;
- (id)initWithDomain:(id)a0 dataSource:(id)a1 automaticSynchronizeOptions:(unsigned long long)a2 accountIdentifier:(id)a3 isActive:(BOOL)a4;
- (id)initWithInitialUpdateDelay:(double)a0;
- (void)loadBagContextWithCompletionBlock:(id /* block */)a0;
- (void)loadRemoteDomainVersionWithCompletionBlock:(id /* block */)a0;
- (void)pullMetadataItemWithItemIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)pushMetadataItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)a0;
- (void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)a0;
- (void)synchronizeImmediatelyWithCompletionBlock:(id /* block */)a0;
- (void)synchronizeImmediatelyWithCompletionHandler:(id /* block */)a0;

@end
