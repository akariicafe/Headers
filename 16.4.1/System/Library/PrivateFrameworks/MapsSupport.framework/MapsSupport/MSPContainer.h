@class NSHashTable, NSString, NSArray, NSCountedSet, MSPContainerPersister, MSPQuerySource, NSObject, NSMutableSet, NSMutableArray;
@protocol NSObject, MSPContainerStateSnapshot, OS_dispatch_queue, NSCopying;

@interface MSPContainer : NSObject <MSPContainerPersisterDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<MSPContainerStateSnapshot> _currentStateSnapshot;
    NSArray *_currentProcessedContents;
    NSHashTable *_observers;
    NSCountedSet *_editCoalescingContexts;
    BOOL _isCommittingEnqueuedEdits;
    id<NSObject, NSCopying> _contextCoalescingFor;
    BOOL _coalescedEditsNeedEntireContents;
    NSMutableSet *_coalescedPartialContentIdentifiersToFetch;
    NSMutableArray *_enqueuedCoalescingEditBarrierBlocks;
    NSMutableArray *_enqueuedCoalescingCompletionBlocks;
    BOOL _hasScheduledDelayedCommitForCoalescedEdits;
    BOOL _hasLoadedContents;
}

@property (readonly, nonatomic) MSPQuerySource *entireContentsQuerySource;
@property (readonly, nonatomic) MSPContainerPersister *persister;
@property (readonly, nonatomic, getter=_accessQueue) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) BOOL _preventsAssertionsForDuplicateStorageIdentifiers;
@property (nonatomic, getter=_simulatesClearingDiscardableDataAfterOperations, setter=_setSimulatesClearingDiscardableDataAfterOperations:) BOOL simulatesClearingDiscardableDataAfterOperations;
@property (readonly, nonatomic) BOOL containerHasLoadedContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_disableLogging;
+ (BOOL)_deletes:(unsigned long long)a0 mayRepresentDataLossIfAppliedTo:(unsigned long long)a1;
+ (void)_preventAssertionsForDuplicateStorageIdentifiersInContainersCreatedPerfomingBlock:(id /* block */)a0;
+ (void)clearDiscardableDataFromAllContainers;
+ (void)mutableObjectContentDidUpdate:(id)a0;

- (void)addObserver:(id)a0;
- (void)_processNewLoadedContents:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_commitEditWithFinalContents:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_processNewEditedContents:(id)a0;
- (BOOL)_checkAndAddCoalescedEditForContext:(id)a0 identifiers:(id)a1 enqueuedBlock:(id /* block */)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)_clearObjectCacheIfNeeded;
- (void)_commitPendingCoalescedEditsIfAny;
- (void)_endCoalescingEditsForContext:(id)a0;
- (void)_forEachObserver:(id /* block */)a0;
- (id)_objectsWithDuplicateStorageIdentifiersFromArray:(id)a0;
- (void)_performInitialLoadNotifyingObservers:(BOOL)a0 kickOffSynchronously:(BOOL)a1 completion:(id /* block */)a2;
- (id)_processedContentsForPersisterContents:(id)a0;
- (void)accessContentsUsingConcurrentBlock:(id /* block */)a0;
- (void)accessStateSnapshotUsingConcurrentBlock:(id /* block */)a0;
- (id)beginCoalescingEditsWithContext:(id)a0;
- (void)coalesceEditsForContext:(id)a0 inBlock:(id /* block */)a1;
- (void)editByMergingStateSnapshot:(id)a0 mergeOptions:(id)a1 context:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)editContentsUsingBarrierBlock:(id /* block */)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)editContentsUsingBarrierBlock:(id /* block */)a0 context:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)editObjectsWithIdentifiers:(id)a0 usingBarrierBlock:(id /* block */)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)editObjectsWithIdentifiers:(id)a0 usingBarrierBlock:(id /* block */)a1 context:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)eraseFromStorageTypes:(unsigned long long)a0 withCompletionQueue:(id)a1 completion:(id /* block */)a2;
- (void)eraseWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithPersister:(id)a0;
- (void)persisterContentsDidChangeExternally:(id)a0;

@end
