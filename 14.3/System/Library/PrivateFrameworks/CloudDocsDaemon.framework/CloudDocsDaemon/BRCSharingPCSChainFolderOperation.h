@class BRCItemID, NSString, BRCAppLibrary, BRCServerItem;

@interface BRCSharingPCSChainFolderOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCServerItem *_serverItem;
    BRCAppLibrary *_appLibrary;
    unsigned long long _chainedRecordsCount;
}

@property (readonly, nonatomic) BRCItemID *rootItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (id)createActivity;
- (void)_performPCSChainBatch;

@end
