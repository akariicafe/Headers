@class NSArray, NSDictionary, NSString, HDProfile, HDDaemonSyncEntityManager;

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {
    HDProfile *_profile;
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
- (BOOL)resetNextAnchorsForStore:(id)a0 profile:(id)a1 minimumElapsedTime:(double)a2 error:(id *)a3;
- (BOOL)performSyncSession:(id)a0 accessibilityAssertion:(id)a1 error:(id *)a2;
- (BOOL)getReceivedAnchorMap:(id)a0 forStore:(id)a1 error:(id *)a2;
- (BOOL)applySyncChange:(id)a0 forStore:(id)a1 error:(id *)a2;
- (id)syncAnchorRangesIfRequiredForSession:(id)a0 startingAnchors:(id)a1 error:(id *)a2;
- (void)resetAnchorsWithFailedChanges:(id)a0 store:(id)a1;
- (void)resetStore:(id)a0;
- (BOOL)updateLocalVersionsForStore:(id)a0 profile:(id)a1 error:(id *)a2;
- (BOOL)applyAcknowledgedAnchorMap:(id)a0 forStore:(id)a1 resetNext:(BOOL)a2 resetInvalid:(BOOL)a3 error:(id *)a4;
- (void).cxx_destruct;

@end
