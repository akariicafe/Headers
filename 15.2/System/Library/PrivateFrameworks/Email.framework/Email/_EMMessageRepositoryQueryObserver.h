@class NSString, EFQuery, EMMessageRepository, EMObjectID, EFCancelationToken;
@protocol EFScheduler, EFCancelable, EMQueryResultsObserver;

@interface _EMMessageRepositoryQueryObserver : NSObject <EMMessageListItemQueryResultsObserver, EMRecoverableObserver> {
    EMMessageRepository *_repository;
    EFQuery *_query;
    EMObjectID *_observationIdentifier;
    id<EMQueryResultsObserver> _observer;
    EFCancelationToken *_token;
    id<EFCancelable> _remoteCancelable;
    id<EFScheduler> _recoveryScheduler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recoveryLock;
    long long _recoveryAttempt;
    BOOL _recoveryIsScheduled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)observer:(id)a0 wasUpdated:(id)a1;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 before:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 after:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 before:(id)a2;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 after:(id)a2;
- (void)observer:(id)a0 matchedChangesForObjectIDs:(id)a1;
- (void)observer:(id)a0 matchedDeletedObjectIDs:(id)a1;
- (void)observer:(id)a0 replacedExistingObjectID:(id)a1 withNewObjectID:(id)a2;
- (void)observer:(id)a0 matchedOldestItemsUpdatedForMailboxes:(id)a1;
- (void)observerDidFinishInitialLoad:(id)a0;
- (void)observerWillRestart:(id)a0;
- (void)observerDidFinishRemoteSearch:(id)a0;
- (void)recoverQueryWithRemoteConnection:(id)a0;
- (id)initWithRepository:(id)a0 query:(id)a1 observer:(id)a2;
- (void)performQueryWithRemoteConnection:(id)a0;
- (void)refreshQueryWithRemoteConnection:(id)a0;
- (void)_performQueryWithRemoteConnection:(id)a0 forRecovery:(BOOL)a1;

@end
