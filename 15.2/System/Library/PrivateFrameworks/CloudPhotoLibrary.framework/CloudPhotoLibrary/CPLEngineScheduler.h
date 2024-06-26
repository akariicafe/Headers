@class NSDate, NSString, CPLSyncSession, NSMutableDictionary, NSCountedSet, CPLEngineLibrary, CPLPlatformObject, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent> {
    NSDate *_preparingFirstSessionStartDate;
    unsigned long long _requiredFirstState;
    unsigned long long _lastRequestGeneration;
    unsigned long long _currentRequestGeneration;
    BOOL _needsToUpdateLastSyncDate;
    CPLSyncSession *_nextSession;
    double _intervalForRetry;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentSyncState;
    unsigned long long _pendingRequiredFirstState;
    BOOL _shouldNoteServerHasChanges;
    CPLSyncSession *_currentSession;
    BOOL _opened;
    NSDate *_unavailabilityLimitDate;
    NSString *_unavailabilityReason;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    NSCountedSet *_blockingElements;
    NSMutableDictionary *_blockedElements;
    NSMutableSet *_blockWaiters;
    NSCountedSet *_unblockOnceElements;
    NSObject<OS_dispatch_queue> *_blockingLock;
    unsigned long long _significantWorkCalls;
    unsigned long long _disablingMinglingCount;
    NSDate *_lastSyncSessionDateCausedByForeground;
    NSDate *_deferDate;
    BOOL _protectAgainstFastRelaunch;
    BOOL _didWriteFirstSyncMarker;
    BOOL _delayedFirstSyncBecauseOfRapidLaunch;
    BOOL _isOverridingForeground;
    NSDate *_lastSuccessfulSyncSessionDate;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary;
@property (copy, nonatomic) id /* block */ requiredStateObserverBlock;
@property (copy, nonatomic) id /* block */ shouldBackOffOnErrorBlock;
@property (readonly, nonatomic) unsigned long long requiredState;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validElements;
+ (id)platformImplementationProtocol;

- (void)noteClientIsInBackground;
- (void)disableMingling;
- (void)_handleResetAnchorWithError:(id)a0 completionHandler:(id /* block */)a1;
- (id)_pathToFirstSynchronizationMarker;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)_writeFirstSynchronizationMarker;
- (void)unblockEngineElementOnce:(id)a0;
- (void)enableMingling;
- (void)noteClientIsBeginningSignificantWork;
- (void)blockEngineElement:(id)a0;
- (void)noteClientIsEndingSignificantWork;
- (void)testKey:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (void)forceStartSyncSession:(id)a0 withMinimalPhase:(unsigned long long)a1;
- (void)noteClientIsInForegroundQuietly:(BOOL)a0;
- (void)enableSynchronizationWithReason:(id)a0;
- (id)initWithEngineLibrary:(id)a0;
- (void)disableSynchronizationWithReason:(id)a0;
- (void)unblockEngineElement:(id)a0;
- (void)noteStoreNeedsCleanup;
- (void)startRequiredSyncSessionNow:(id)a0;
- (void)_stopPreparingFirstSession;
- (void)noteScopeNeedsToPushHighPriorityToTransport;
- (void)_handleResetCloudCacheWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resetFirstSynchronizationMarker;
- (void)_reallyUnscheduleSession;
- (void)_disableRetryAfterLocked;
- (BOOL)isSynchronizationDisabledWithReasonError:(id *)a0;
- (void)_startSyncSession:(id)a0 withMinimalPhase:(unsigned long long)a1 rewind:(BOOL)a2;
- (void)noteServerMightBeAvailableNow;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)a0;
- (void)_reallyStartSyncSession:(id)a0;
- (void)kickOffSyncSession;
- (void)noteContainerHasBeenWiped;
- (void)noteStoreNeedsSetup;
- (void)_noteSyncSessionNeededFromStateDontRewindImmediately:(unsigned long long)a0;
- (void)_updateOverridingForeground;
- (void)noteServerHasChanges;
- (BOOL)_syncSessionIsPossible;
- (void)noteScopeNeedsUpdate;
- (void)getCurrentRequiredStateWithCompletionHandler:(id /* block */)a0;
- (void)_disableSynchronizationBecauseContainerHasBeenWipedLocked;
- (void)noteSyncSessionSucceeded:(id)a0;
- (void)_handleResetClientCacheWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleResetGlobalAnchorWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_disableSynchronizationWithReasonLocked:(id)a0;
- (void)getStatusWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_unscheduleNextSyncSession;
- (void)_enableSynchronizationWithReasonLocked:(id)a0;
- (BOOL)isMinglingEnabled;
- (void)noteClientIsInSyncWithClientCache;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)a0 reason:(id)a1;
- (void)_backOff;
- (void)noteScopeNeedsToPushToTransport;
- (id)componentName;
- (BOOL)isClientInForeground;
- (void)noteScopeListNeedsUpdate;
- (void)noteResourceDownloadQueueIsFull;
- (void)noteNetworkStateDidChange;
- (BOOL)waitForEngineElementToBeBlocked:(id)a0 timeout:(double)a1;
- (void)_prepareFirstSession;
- (void)_setRequiredFirstState:(unsigned long long)a0;
- (void)_disableFastRelaunchProtection;
- (void)noteClientNeedsToPull;
- (void)_scheduleNextSyncSession;
- (void)noteSyncSession:(id)a0 failedDuringPhase:(unsigned long long)a1 withError:(id)a2;
- (void)_startRequiredSyncSession:(id)a0;
- (void)noteScopeNeedsToPullFromTransport;
- (void)_updateLastSyncDateIfNecessaryLocked;
- (void)noteStoreNeedsToUpdateDisabledFeatures;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)resetBackoffInterval;
- (void)willRunEngineElement:(id)a0;
- (void)_noteSyncSessionNeededFromState:(unsigned long long)a0;
- (id)_minimalDateForFirstSync;
- (void)noteTransportNeedsUpdate;
- (void)closeAndDeactivate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)noteServerIsUnavailableWithError:(id)a0;
- (void)_reallyNoteServerHasChangesLocked;
- (void)noteSyncSession:(id)a0 stateWillBeAttempted:(unsigned long long)a1;

@end
