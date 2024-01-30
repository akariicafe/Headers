@class ICAttachmentPreviewImageLoader, NSString, NSURL, NSManagedObjectID, ICAppearanceInfo, ICAttachmentThumbnailOperationQueue, ICThumbnailDataCache, NSMutableArray;

@interface ICAttachmentThumbnailOperation : NSOperation <ICAttachmentThumbnailOperation>

@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) double scale;
@property (retain, nonatomic) ICAppearanceInfo *appearanceInfo;
@property (retain, nonatomic) ICThumbnailDataCache *cache;
@property (retain, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) id /* block */ fallbackBlock;
@property (copy, nonatomic) id /* block */ processingBlock;
@property (weak, nonatomic) ICAttachmentThumbnailOperationQueue *queue;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) NSManagedObjectID *attachmentID;
@property (nonatomic) BOOL attachmentPropertiesCaptured;
@property (retain, nonatomic) ICAttachmentPreviewImageLoader *attachmentPreviewImageLoader;
@property (retain, nonatomic) NSURL *mediaURL;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) BOOL showAsFileIcon;
@property (nonatomic) BOOL isMovie;

- (void)main;
- (void)addCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)capturePropertiesFromAttachment:(id)a0;
- (id)initWithAttachment:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceInfo:(id)a3 cache:(id)a4 cacheKey:(id)a5 processingBlock:(id /* block */)a6 completionBlock:(id /* block */)a7 fallbackBlock:(id /* block */)a8 queue:(id)a9;
- (BOOL)isMatchingOperationForCacheKey:(id)a0 cache:(id)a1;
- (void)requestThumbnail;

@end
