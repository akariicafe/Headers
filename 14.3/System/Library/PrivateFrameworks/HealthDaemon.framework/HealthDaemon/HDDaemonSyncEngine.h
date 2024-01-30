@class NSArray, NSDictionary, NSString, HDProfile, NSObject, HDDaemonSyncEntityManager;
@protocol OS_dispatch_queue;

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDDaemonSyncEntityManager *_entityManager;
}

@property (copy, nonatomic) id /* block */ unitTest_didCompleteReadTransaction;
@property (readonly, copy, nonatomic) NSArray *allOrderedSyncEntities;
@property (readonly, copy, nonatomic) NSDictionary *allSyncEntitiesByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (BOOL)getReceivedAnchorMap:(id)a0 forStore:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)_validateSequenceNumberForSyncChange:(id)a0 store:(id)a1 error:(id *)a2;
- (long long)session:(id)a0 requiresSyncWithAnchors:(id)a1 error:(id *)a2;
- (BOOL)applyAcknowledgedAnchorMap:(id)a0 forStore:(id)a1 resetNext:(BOOL)a2 resetInvalid:(BOOL)a3 error:(id *)a4;
- (BOOL)applySyncChange:(id)a0 forStore:(id)a1 error:(id *)a2;
- (void)_resetStore:(id)a0;
- (long long)_synchronizeSyncEntityClass:(Class)a0 session:(id)a1 startAnchor:(long long *)a2 finalAnchor:(long long)a3 postTransactionBlocks:(id)a4 error:(id *)a5;
- (BOOL)_applySyncChange:(id)a0 entity:(Class)a1 store:(id)a2 error:(id *)a3;
- (long long)nextSyncAnchorForEntity:(Class)a0 session:(id)a1 startSyncAnchor:(long long)a2 error:(id *)a3;
- (id)_syncAnchorMapForSyncEntityClass:(Class)a0 session:(id)a1 error:(id *)a2;
- (void)resetAnchorsWithFailedChanges:(id)a0 store:(id)a1;
- (BOOL)performSyncSession:(id)a0 accessibilityAssertion:(id)a1 error:(id *)a2;
- (long long)_validateAnchorsForSyncChange:(id)a0 store:(id)a1 error:(id *)a2;
- (void)resetStore:(id)a0;
- (BOOL)resetNextAnchorsForStore:(id)a0 profile:(id)a1 minimumElapsedTime:(double)a2 error:(id *)a3;
- (BOOL)_performSyncSession:(id)a0 databaseAccessibilityAssertion:(id)a1 error:(id *)a2;

@end
