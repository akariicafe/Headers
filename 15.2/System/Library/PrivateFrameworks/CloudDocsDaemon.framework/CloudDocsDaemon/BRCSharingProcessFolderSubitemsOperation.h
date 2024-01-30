@class BRCItemID, NSString, BRCPrivateClientZone, BRCALRowID, NSMutableArray;

@interface BRCSharingProcessFolderSubitemsOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    unsigned long long _rowID;
    unsigned long long _processType;
    unsigned long long _batchSize;
    unsigned long long _failedSubitemsLeft;
    NSMutableArray *_sharedClientSubitems;
    NSMutableArray *_aliasItemsToDelete;
    NSMutableArray *_shareIDsToDelete;
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
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)removeSharedSubitemsWithCompletion:(id /* block */)a0;
- (BOOL)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)a0;
- (BOOL)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)a0;
- (void)processServerTruthWithCompletion:(id /* block */)a0;
- (void)processClientTruthWithCompletion:(id /* block */)a0;
- (id)initWithItem:(id)a0 processType:(unsigned long long)a1 maxSubitemsToFail:(unsigned long long)a2;
- (id)computeURLForItemID:(id)a0 rootURL:(id)a1;

@end
