@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener>

@property (retain, nonatomic) CKDispatchCache *dispatchCache;
@property (retain, nonatomic) CKMultiDict *pendingBlocks;

+ (id)transcriptPreviewCache;
+ (id)mapThumbnailQueue;
+ (id)snapshotCache;
+ (void)_invalidateStickerPreviewCache;
+ (id)previewPrewarmQueue;
+ (id)stickerPreviewCache;
+ (id)detailsPreviewCache;

- (void)flush;
- (void)didReceiveMemoryWarning;
- (void)systemApplicationDidSuspend;
- (id)notificationCenter;
- (id)cachedPreviewForKey:(id)a0;
- (void)setCachedPreview:(id)a0 key:(id)a1;
- (BOOL)isGeneratingPreviewForKey:(id)a0;
- (void)enqueueSaveBlock:(id /* block */)a0 withPriority:(long long)a1;
- (void)enqueueGenerationBlock:(id /* block */)a0 completion:(id /* block */)a1 withPriority:(long long)a2 forKey:(id)a3;
- (void)transferRemoved:(id)a0;
- (void)enqueueSaveBlock:(id /* block */)a0 forMediaObject:(id)a1 withPriority:(long long)a2;
- (void)clearQueueAndCachedPreviews;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (id)initWithCacheLimit:(unsigned long long)a0;
- (void)beginGeneratingForKey:(id)a0;
- (void)endGeneratingForKey:(id)a0;
- (BOOL)shouldReplaceCachedPreview:(id)a0 withPreview:(id)a1;
- (id)mediaObjectManager;
- (void)transferFinished:(id)a0;

@end
