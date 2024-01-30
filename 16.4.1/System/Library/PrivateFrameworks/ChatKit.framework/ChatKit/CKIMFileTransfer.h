@class IMMessage, NSString, NSDictionary, NSURL, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface CKIMFileTransfer : NSObject <CKFileTransfer> {
    int _mediaObjectCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (copy, nonatomic) NSURL *linkFileURL;
@property (nonatomic) long long transferState;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (retain, nonatomic) IMMessage *IMMessage;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSDictionary *transcoderUserInfo;
@property (readonly, copy, nonatomic) NSDictionary *stickerUserInfo;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long currentBytes;
@property (readonly, nonatomic) unsigned long long totalBytes;
@property (readonly, nonatomic) BOOL isSticker;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) BOOL hideAttachment;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) long long commSafetySensitive;
@property (readonly, nonatomic, getter=isFileURLFinalized) BOOL fileURLFinalized;
@property (readonly, nonatomic, getter=isFileDataReady) BOOL fileDataReady;
@property (readonly, nonatomic, getter=isRejected) BOOL rejected;
@property (readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, nonatomic, getter=isRestoring) BOOL restoring;
@property (readonly, nonatomic) BOOL isFromMomentShare;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fileManager;
- (id)syncController;
- (id)notificationCenter;
- (void)dealloc;
- (void).cxx_destruct;
- (void)transferUpdated:(id)a0;
- (id)initWithTransferGUID:(id)a0 imMessage:(id)a1;
- (void)_reloadTransferAndDetermineIfUpdated:(inout BOOL *)a0;
- (void)attachmentRestored:(id)a0;
- (void)fetchHighQualityFile:(id /* block */)a0;
- (id)imFileTransferCenter;
- (id)initWithFileURL:(id)a0 transcoderUserInfo:(id)a1 attributionInfo:(id)a2 hideAttachment:(BOOL)a3;
- (id)initWithFileURL:(id)a0 transcoderUserInfo:(id)a1 attributionInfo:(id)a2 hideAttachment:(BOOL)a3 isScreenshot:(BOOL)a4;
- (id)initWithStickerFileURL:(id)a0 transferUserInfo:(id)a1 attributionInfo:(id)a2;
- (id)linkFileURLWithFilename:(id)a0;
- (void)mediaObjectAdded;
- (void)mediaObjectRemoved;
- (void)reloadTransfer;

@end
