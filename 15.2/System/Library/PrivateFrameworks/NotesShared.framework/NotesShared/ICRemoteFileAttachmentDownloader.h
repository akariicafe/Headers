@class NSOperationQueue, NSMutableDictionary;

@interface ICRemoteFileAttachmentDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)sharedDownloader;
+ (BOOL)needsToDownloadRemoteFileAttachments;
+ (id)allUndownloadedLegacyAttachmentsInContext:(id)a0;
+ (void)releaseSharedDownloaderIfPossible;
+ (void)initializeDownloaderAfterDelayIfNecessary;

- (void)reachabilityChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)downloadRemoteFileForAttachment:(id)a0;
- (void)resumeDownloadsAfterDelay;
- (void)downloadUndownloadedLegacyAttachments;
- (void)downloadRemoteFileForAttachmentObjectID:(id)a0;

@end
