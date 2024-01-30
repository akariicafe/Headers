@class HKObserverSet, NSString, HDProfile, _HKDelayedOperation, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HDConceptIndexManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDHealthRecordsAccountExistenceObserver, HDOntologyDatabaseAvailabilityObserver, HDOntologyImportStatusObserver> {
    unsigned long long _batchSize;
    HDProfile *_profile;
    HKObserverSet *_observerSet;
    _Atomic BOOL _isOntologyUpdating;
    _Atomic BOOL _isInvalidated;
    Class _conceptIndexerClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _hasScheduledIndexing;
    BOOL _shouldResetIndexNextExecution;
    NSObject<OS_dispatch_queue> *_delayedOperationQueue;
    NSMutableArray *_cachedReasonsForReindex;
    _HKDelayedOperation *_updateIndexOperation;
    double _conceptIndexUpdateDebounceIntervalOverride;
}

@property (nonatomic) BOOL ignoresAutomaticProcessingTriggers;
@property (copy, nonatomic) id /* block */ unitTesting_conceptIndexManagerDidFinish;
@property (copy, nonatomic) id /* block */ unitTesting_scheduledConceptIndexWorkDidFailAndClearState;
@property (readonly) unsigned long long currentExecutionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)accountExistenceNotifier:(id)a0 didChangeHealthRecordAccountExistence:(BOOL)a1;
- (id)initWithProfile:(id)a0;
- (void)ontologyDatabase:(id)a0 didBecomeAvailable:(BOOL)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id)initWithConceptIndexerClass:(Class)a0 batchSize:(unsigned long long)a1 profile:(id)a2;
- (BOOL)unitTest_hasScheduledIndexing;
- (void)profileDidBecomeReady:(id)a0;
- (void)unitTest_setHasScheduledIndexing:(BOOL)a0;
- (void)ontologyDatabaseReferenceOntologyFinishedImport:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)addObserver:(id)a0;
- (void)resetWithReindex;
- (void)removeObserver:(id)a0;
- (BOOL)performanceTest_triggerConceptIndexing;
- (void)unitTest_scheduleUpdateWithDescription:(id)a0;
- (void).cxx_destruct;
- (void)invalidateAndWait;
- (id)init;
- (void)unitTest_triggerConceptIndexing;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)unitTest_debounceUpdateDelayOverride:(double)a0;
- (void)dealloc;
- (void)ontologyDatabaseReferenceOntologyWillImport:(id)a0;

@end
