@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener>

@property (retain, nonatomic) CKDispatchCache *dispatchCache;
@property (retain, nonatomic) CKMultiDict *pendingBlocks;

+ (id)snapshotCache;
+ (id)detailsPreviewCache;
+ (id)transcriptPreviewCache;
+ (id)mapThumbnailQueue;
+ (id)previewPrewarmQueue;
+ (id)stickerPreviewCache;
+ (void)_invalidateStickerPreviewCache;

- (id)notificationCenter;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enqueueSaveBlock:(id /* block */)a0 forMediaObject:(id)a1 withPriority:(long long)a2;
- (id)cachedPreviewForKey:(id)a0;
- (void)setCachedPreview:(id)a0 key:(id)a1;
- (BOOL)isGeneratingPreviewForKey:(id)a0;
- (void)enqueueSaveBlock:(id /* block */)a0 withPriority:(long long)a1;
- (void)enqueueGenerationBlock:(id /* block */)a0 completion:(id /* block */)a1 withPriority:(long long)a2 forKey:(id)a3;
- (void)systemApplicationDidSuspend;
- (void)flush;
- (void)didReceiveMemoryWarning;
- (void)transferRemoved:(id)a0;
- (void)clearQueueAndCachedPreviews;
- (void)beginGeneratingForKey:(id)a0;
- (void)endGeneratingForKey:(id)a0;
- (void)resume;
- (void)transferFinished:(id)a0;
- (id)initWithCacheLimit:(unsigned long long)a0;
- (BOOL)shouldReplaceCachedPreview:(id)a0 withPreview:(id)a1;
- (id)mediaObjectManager;
- (void)suspend;

@end
