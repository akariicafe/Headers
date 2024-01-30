@class NSOperationQueue, NSMutableDictionary;

@interface ICRemoteFileAttachmentDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)sharedDownloader;
+ (id)allUndownloadedLegacyAttachmentsInContext:(id)a0;
+ (void)initializeDownloaderAfterDelayIfNecessary;
+ (BOOL)needsToDownloadRemoteFileAttachments;
+ (void)releaseSharedDownloaderIfPossible;

- (void)reachabilityChanged:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadRemoteFileForAttachment:(id)a0;
- (void)downloadRemoteFileForAttachmentObjectID:(id)a0;
- (void)downloadUndownloadedLegacyAttachments;
- (void)resumeDownloadsAfterDelay;

@end
