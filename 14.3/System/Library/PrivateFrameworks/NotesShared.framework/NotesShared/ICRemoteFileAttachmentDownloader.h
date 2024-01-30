@class NSOperationQueue, NSMutableDictionary;

@interface ICRemoteFileAttachmentDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (BOOL)needsToDownloadRemoteFileAttachments;
+ (id)sharedDownloader;
+ (id)allUndownloadedLegacyAttachmentsInContext:(id)a0;
+ (void)releaseSharedDownloaderIfPossible;
+ (void)initializeDownloaderAfterDelayIfNecessary;

- (void)reachabilityChanged:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resumeDownloadsAfterDelay;
- (void)downloadUndownloadedLegacyAttachments;
- (void)downloadRemoteFileForAttachment:(id)a0;
- (void)downloadRemoteFileForAttachmentObjectID:(id)a0;

@end
