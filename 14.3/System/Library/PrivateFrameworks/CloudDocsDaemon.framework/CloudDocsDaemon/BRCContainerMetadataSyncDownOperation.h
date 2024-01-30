@class NSString, BRCAccountSession, BRCContainerMetadataSyncPersistedState, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface BRCContainerMetadataSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAccountSession *_session;
    BRCContainerMetadataSyncPersistedState *_state;
    NSMutableArray *_recordIDsForDesiredAssets;
    NSMutableArray *_desiredKeysForDesiredAssets;
    NSMutableDictionary *_recordIDsToVersionETagsForDesiredAssets;
    NSMutableSet *_containerIDsUpdated;
}

@property (readonly, nonatomic) BOOL shouldFetchAnotherBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initWithSession:(id)a0 state:(id)a1;
- (void)_completedWithServerChangeToken:(id)a0;
- (void)performAfterFetchingAssetContents:(id /* block */)a0;
- (void)performAfterFetchingRecordChanges:(id /* block */)a0;
- (void)performAfterCreatingZoneIfNeeded:(id /* block */)a0;

@end
