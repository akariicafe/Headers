@class BRCItemID, NSString, BRCPrivateClientZone, BRCALRowID, NSMutableArray;

@interface BRCSharingProcessFolderSubitemsOperation : _BRCFrameworkOperation <BRCListOperationDelegate, BRCOperationSubclass> {
    unsigned long long _rowID;
    unsigned long long _batchSize;
    unsigned long long _failedSubitemsLeft;
    unsigned long long _processType;
    NSMutableArray *_sharedClientSubitems;
    NSMutableArray *_sharedServerSubitems;
    NSMutableArray *_aliasItemsToDelete;
    NSMutableArray *_shareIDsToDelete;
    NSMutableArray *_activeListOperations;
    BRCPrivateClientZone *_rootClientZone;
    BRCItemID *_rootItemID;
    BRCALRowID *_appLibraryRowID;
    BOOL _isFSRoot;
    BOOL _alreadyHasShareID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)createActivity;
- (void)dealloc;
- (BOOL)shouldRetryForError:(id)a0;
- (void).cxx_destruct;
- (BOOL)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)a0;
- (BOOL)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)a0;
- (void)_stopObservingListOperation;
- (id)computeURLForItemID:(id)a0 rootURL:(id)a1;
- (BOOL)deleteShareInfoFromZone:(id)a0 zoneRowID:(id)a1 itemID:(id)a2 sharingOptions:(unsigned long long)a3 itemsTable:(id)a4;
- (id)initWithItem:(id)a0 processType:(unsigned long long)a1 maxSubitemsToFail:(unsigned long long)a2;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;
- (void)processClientTruthWithCompletion:(id /* block */)a0;
- (void)processServerItemsUnderItemID:(id)a0 completion:(id /* block */)a1;
- (void)processServerTruthWithCompletion:(id /* block */)a0;
- (void)removeSharedSubitemsWithCompletion:(id /* block */)a0;

@end
