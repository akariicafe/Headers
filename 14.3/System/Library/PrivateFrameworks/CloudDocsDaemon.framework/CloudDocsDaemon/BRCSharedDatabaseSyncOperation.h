@class NSString, BRCServerChangeState;

@interface BRCSharedDatabaseSyncOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerChangeState *_changeState;
}

@property (copy, nonatomic) id /* block */ shareDBSyncCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queue;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)_performAfterAddingOwnerKeysForZoneIDs:(id)a0 block:(id /* block */)a1;
- (void)_performFetchChangedZones;
- (void)_performAfterRegisteringForPushes:(id /* block */)a0;
- (id)initWithSyncContext:(id)a0 changeState:(id)a1 group:(id)a2;

@end
