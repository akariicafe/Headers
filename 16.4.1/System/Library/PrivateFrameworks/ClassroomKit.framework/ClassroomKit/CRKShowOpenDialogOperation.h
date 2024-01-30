@class NSSet, NSString, NSData, NSURL;
@protocol CRKSharingPrimitives, CRKFileSystemPrimitives, CRKSharingAirDropTransfer;

@interface CRKShowOpenDialogOperation : CATOperation {
    NSSet *mURLs;
    BOOL mKeepOriginalFiles;
    NSData *mPreviewImageData;
    NSString *mSenderName;
    BOOL mAutoAccept;
    NSString *mSourceBundleIdentifier;
    NSString *mFilesDescription;
    BOOL mTransferAccepted;
    BOOL mTransferFinished;
    NSURL *mTransferDirectoryURL;
}

@property (readonly, nonatomic) double cleanupDelay;
@property (readonly, nonatomic) id<CRKSharingPrimitives> sharingPrimitives;
@property (readonly, nonatomic) id<CRKFileSystemPrimitives> fileSystemPrimitives;
@property (retain, nonatomic) id<CRKSharingAirDropTransfer> transfer;

+ (id)fakeBundleID;

- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (void)transferWithIdentifierWasAccepted:(id)a0;
- (void)succeedIfNeeded;
- (void)cleanupHiddenTransferItemsIfNeeded;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(BOOL)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(BOOL)a4;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(BOOL)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(BOOL)a4 sourceBundleIdentifier:(id)a5;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(BOOL)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(BOOL)a4 sourceBundleIdentifier:(id)a5 filesDescription:(id)a6;
- (id)initWithFileURLs:(id)a0 keepOriginalFiles:(BOOL)a1 previewImageData:(id)a2 senderName:(id)a3 autoAccept:(BOOL)a4 sourceBundleIdentifier:(id)a5 filesDescription:(id)a6 cleanupDelay:(double)a7 sharingPrimitives:(id)a8 fileSystemPrimitives:(id)a9;
- (void)startTransfer;
- (void)transferDidFinishWithSuccess:(BOOL)a0 destinationPath:(id)a1 error:(id)a2;
- (void)transferDidProgressWithSuccess:(BOOL)a0 destinationPath:(id)a1 error:(id)a2;
- (void)transferDidStartWithSuccess:(BOOL)a0 destinationPath:(id)a1 error:(id)a2;
- (void)transferWithIdentifierWasDeclined:(id)a0 error:(id)a1;

@end
