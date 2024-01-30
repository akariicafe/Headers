@class NSString, NSSet, NSData, CRKAirDropTransferInfo, NSURL, SFAirDropClassroomTransferManager;

@interface CRKShowOpenDialogOperation : CATOperation <SFAirDropClassroomTransferDelegate> {
    NSSet *mURLs;
    BOOL mKeepOriginalFiles;
    NSData *mPreviewImageData;
    NSString *mSenderName;
    BOOL mAutoAccept;
    NSString *mSourceBundleIdentifier;
    NSString *mFilesDescription;
    NSSet *mAirDropItems;
    NSString *mTransferIdentifier;
    CRKAirDropTransferInfo *mTransferInfo;
    BOOL mTransferAccepted;
    BOOL mTransferFinished;
    NSURL *mTransferDirectoryURL;
    SFAirDropClassroomTransferManager *mTransferManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fakeBundleID;

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)cancel;
- (void)transferWithIdentifierWasAccepted:(id)a0;
- (void)transferWithIdentifierWasDeclined:(id)a0 withFailureReason:(unsigned long long)a1;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(BOOL)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(BOOL)a4 sourceBundleIdentifier:(id)a5;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(BOOL)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(BOOL)a4 sourceBundleIdentifier:(id)a5 filesDescription:(id)a6;
- (void)startTransfer;
- (void)transferDidStartWithSuccess:(BOOL)a0 destinationPath:(id)a1 error:(id)a2;
- (void)transferDidProgressWithSuccess:(BOOL)a0 destinationPath:(id)a1 error:(id)a2;
- (void)transferDidFinishWithSuccess:(BOOL)a0 destinationPath:(id)a1 error:(id)a2;
- (void)succeedIfNeeded;
- (void)cleanupHiddenTransferItemsIfNeeded;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(BOOL)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(BOOL)a4;

@end
