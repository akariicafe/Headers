@class NSOperationQueue, NSMutableDictionary;

@interface QLThumbnailGenerationQueue : NSObject

@property (retain) NSMutableDictionary *queuedURLs;
@property (retain) NSOperationQueue *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)a0 atBackgroundPriority:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)a0;

@end
