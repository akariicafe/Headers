@class NSDate, NSString, CPLSyncSession, NSArray, NSMutableDictionary, NSCountedSet, CPLEngineLibrary, CPLPlatformObject, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent> {
    NSDate *_preparingFirstSessionStartDate;
    unsigned long long _requiredFirstState;
    unsigned long long _lastRequestGeneration;
    unsigned long long _currentRequestGeneration;
    BOOL _needsToUpdateLastSyncDate;
    CPLSyncSession *_nextSession;
    double _intervalForRetry;
    NSDate *_proposedScheduleDate;
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
    NSArray *_lastSessionInformation;
    NSArray *_lastScopeIdentifiersExcludedFromPushToTransport;
    NSArray *_lastScopeIdentifiersExludedFromMingling;
    id _syncObserver;
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

- (void)enableSynchronizationWithReason:(id)a0;
- (void)disableSynchronizationWithReason:(id)a0;
- (void)enableMingling;
- (void)noteClientIsInForegroundQuietly:(BOOL)a0;
- (id)componentName;
- (void)blockEngineElement:(id)a0;
- (void)_updateLastSyncDateIfNecessaryLocked;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)unblockEngineElement:(id)a0;
- (void)unblockEngineElementOnce:(id)a0;
- (void)disableMingling;
- (void)testKey:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)a0 reason:(id)a1;
- (void)_disableFastRelaunchProtection;
- (void)_scheduleNextSyncSession;
- (void)forceStartSyncSession:(id)a0 withMinimalPhase:(unsigned long long)a1;
- (BOOL)isClientInForeground;
- (void)_enableSynchronizationWithReasonLocked:(id)a0;
- (void)noteQuotaHasChanged;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)_noteSyncSessionNeededFromStateDontRewindImmediately:(unsigned long long)a0;
- (void)_reallyNoteServerHasChangesLocked;
- (void)blockAllSyncSessionsWithReason:(id)a0 onlyIfBlocked:(BOOL)a1 block:(id /* block */)a2;
- (void)noteNetworkStateDidChange;
- (void)_handleResetAnchorWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteScopeNeedsToPushToTransport;
- (void)_keepSessionInformation:(id)a0;
- (void)_disableSynchronizationWithReasonLocked:(id)a0;
- (void)disableSynchronizationIfBlockedWithReason:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleResetClientCacheWithError:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithEngineLibrary:(id)a0;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)a0;
- (void)noteScopeNeedsUpdate;
- (void)noteServerIsUnavailableWithError:(id)a0;
- (void)_updateOverridingForeground;
- (BOOL)isMinglingEnabled;
- (BOOL)_syncSessionIsPossible;
- (void)noteTransportNeedsUpdate;
- (void)noteClientIsInSyncWithClientCache;
- (void)_noteSyncSessionNeededFromState:(unsigned long long)a0 proposedScheduleDate:(id)a1;
- (void)startRequiredSyncSessionNow:(id)a0;
- (void)noteClientNeedsToPull;
- (void)_startRequiredSyncSession:(id)a0;
- (void)noteScopeNeedsToPushHighPriorityToTransport;
- (void)noteResourceDownloadQueueIsFull;
- (void)_reallyUnscheduleSession;
- (void)closeAndDeactivate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_handleResetGlobalAnchorWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteContainerHasBeenWiped;
- (void)noteScopeListNeedsUpdate;
- (void)_writeFirstSynchronizationMarker;
- (void)noteServerMightBeAvailableNow;
- (void)_handleResetCloudCacheWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)willRunEngineElement:(id)a0;
- (void)_resetFirstSynchronizationMarker;
- (void)_prepareFirstSession;
- (void)kickOffSyncSession;
- (void)noteStoreNeedsToUpdateDisabledFeatures;
- (void)_disableSynchronizationBecauseContainerHasBeenWipedLocked;
- (void)noteServerHasChanges;
- (void)_stopPreparingFirstSession;
- (void)_disableRetryAfterLocked;
- (void)noteSyncSession:(id)a0 stateWillBeAttempted:(unsigned long long)a1;
- (void)noteSyncSession:(id)a0 failedDuringPhase:(unsigned long long)a1 withError:(id)a2;
- (id)_minimalDateForFirstSync;
- (void)getCurrentRequiredStateWithCompletionHandler:(id /* block */)a0;
- (void)getStatusWithCompletionHandler:(id /* block */)a0;
- (void)resetBackoffInterval;
- (id)_pathToFirstSynchronizationMarker;
- (void)_reallyStartSyncSession:(id)a0;
- (void)_startSyncSession:(id)a0 withMinimalPhase:(unsigned long long)a1 rewind:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isSynchronizationDisabledWithReasonError:(id *)a0;
- (void)_unscheduleNextSyncSession;
- (void)noteStoreNeedsCleanup;
- (void)noteStoreNeedsSetup;
- (void)noteSyncSessionSucceeded:(id)a0;
- (BOOL)waitForEngineElementToBeBlocked:(id)a0 timeout:(double)a1;
- (void)noteScopeNeedsToPullFromTransport;
- (void)_setRequiredFirstState:(unsigned long long)a0;
- (void)_backOff;

@end
