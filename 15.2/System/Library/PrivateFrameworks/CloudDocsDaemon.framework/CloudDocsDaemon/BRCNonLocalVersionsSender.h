@class BRCAppLibrary, NSString, NSURL, CKRecordID, BRCStatInfo, NSObject, BRCServerZone, BRCXPCClient, BRCItemID;
@protocol BRNonLocalVersionReceiving, GSAdditionStoring;

@interface BRCNonLocalVersionsSender : _BRCOperation <BRNonLocalVersionSending, BRCOperationSubclass> {
    id<BRNonLocalVersionReceiving> _receiver;
    BRCItemID *_itemID;
    BRCStatInfo *_st;
    NSString *_currentEtag;
    NSString *_storagePathPrefix;
    NSObject<GSAdditionStoring> *_storage;
    BRCXPCClient *_client;
    BRCServerZone *_serverZone;
    BRCAppLibrary *_appLibrary;
    CKRecordID *_recordID;
    id /* block */ _reply;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *logicalURL;
@property (readonly, nonatomic) NSURL *physicalURL;
@property (nonatomic) BOOL includeCachedVersions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)senderWithLookup:(id)a0 client:(id)a1 XPCReceiver:(id)a2 error:(id *)a3;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (oneway void)invalidate;
- (void)listNonLocalVersionsWithReply:(id /* block */)a0;
- (id)initWithDocument:(id)a0 serverItem:(id)a1 relpath:(id)a2 client:(id)a3 XPCReceiver:(id)a4 error:(id *)a5;
- (id)_fetchThumbnailOperationForVersionRecord:(id)a0 physicalURL:(id)a1;
- (id)_depsTrackingOperation;
- (id)_fetchVersionsOperationWithDepsOp:(id)a0;

@end
