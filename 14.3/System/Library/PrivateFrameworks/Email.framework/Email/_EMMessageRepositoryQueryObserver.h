@class NSString, EFQuery, EMMessageRepository, EMObjectID, EFCancelationToken, NSDate;
@protocol EMQueryResultsObserver;

@interface _EMMessageRepositoryQueryObserver : NSObject <EMMessageListItemQueryResultsObserver, EMRecoverableObserver> {
    EMMessageRepository *_repository;
    EFQuery *_query;
    EMObjectID *_observationIdentifier;
    id<EMQueryResultsObserver> _observer;
    EFCancelationToken *_token;
    NSDate *_lastRecoveryAttemptDate;
    long long _recoveryAttempt;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
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
- (void)_performQueryWithRemoteConnection:(id)a0 forRecovery:(BOOL)a1;

@end
