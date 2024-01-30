@class NSString, BRCAccountSessionFPFS, BRCContainerMetadataSyncPersistedState, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface BRCContainerMetadataSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAccountSessionFPFS *_session;
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

- (void)main;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)a0;
- (void).cxx_destruct;
- (void)_completedWithServerChangeToken:(id)a0 requestID:(unsigned long long)a1;
- (id)initWithSession:(id)a0 state:(id)a1;
- (void)performAfterCreatingZoneIfNeeded:(id /* block */)a0;
- (void)performAfterFetchingAssetContents:(id /* block */)a0;
- (void)performAfterFetchingRecordChanges:(id /* block */)a0;

@end
