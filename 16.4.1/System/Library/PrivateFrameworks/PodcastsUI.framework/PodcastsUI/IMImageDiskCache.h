@class NSRecursiveLock, NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface IMImageDiskCache : IMBaseDiskCache

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) double maxImageDimensionInPixels;
@property (readonly, nonatomic) double saveCompressionQuality;
@property (readonly, nonatomic) NSRecursiveLock *syncLock;
@property (readonly, nonatomic) NSMutableSet *proccessingKeys;
@property (readonly, nonatomic) NSMutableDictionary *completionHandlers;
@property (readonly, nonatomic) NSMutableDictionary *pendingPerformWhenAvailableOnDiskBlocks;
@property (readonly, nonatomic) NSString *onDiskFileType;

- (id)initWithBasePath:(id)a0;
- (id)imageForKey:(id)a0;
- (void).cxx_destruct;
- (id)pathForKey:(id)a0;
- (id)imageUrlForKey:(id)a0;
- (void)_startProcessingKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)_addImage:(id)a0 forKey:(id)a1 resizeIfTooBig:(BOOL)a2 manageProcessingState:(BOOL)a3 completion:(id /* block */)a4;
- (void)_addImageWithSourceUrl:(id)a0 forKey:(id)a1 discardTransparency:(BOOL)a2 enforceSquare:(BOOL)a3 maxDimensionInPixels:(double)a4 completion:(id /* block */)a5;
- (struct CGImageSource { } *)_copyImageSourceByConvertingImage:(struct CGImageSource { } *)a0 toFileType:(id)a1 destinationUrl:(id)a2;
- (id)_defaultImageSavingOptions;
- (id)_defaultImageSavingSourceOptions;
- (void)_finishProcessingKey:(id)a0 success:(BOOL)a1;
- (BOOL)_isProcessingKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)_needsResizing:(struct CGImageSource { } *)a0 maxDimensionInPixels:(double)a1;
- (id)_onDiskFileExtension;
- (void)_performWithSyncLock:(id /* block */)a0;
- (id)_resizeImageForKey:(id)a0 maxDimensionInPixels:(double)a1;
- (BOOL)_startProcessingForAddingKey:(id)a0 originalKey:(id)a1;
- (BOOL)_usesLessMemoryToConvertThenResizeImageSource:(struct CGImageSource { } *)a0 destinationDimensionInPixels:(double)a1;
- (BOOL)addImage:(id)a0 forKey:(id)a1;
- (void)addImageWithSourceUrl:(id)a0 forKey:(id)a1 discardTransparency:(BOOL)a2 enforceSquare:(BOOL)a3 maxDimensionInPixels:(double)a4 completion:(id /* block */)a5;
- (void)addImageWithSourceUrl:(id)a0 forKey:(id)a1 enforceSquare:(BOOL)a2 maxDimensionInPixels:(double)a3 completion:(id /* block */)a4;
- (void)addImagesWithSourceUrl:(id)a0 forKeys:(id)a1 discardTransparency:(BOOL)a2 enforceSquare:(BOOL)a3 completion:(id /* block */)a4;
- (BOOL)copyImageFromSourceUrl:(id)a0 sourceFileType:(id)a1 to:(id)a2 discardTransparency:(BOOL)a3 enforceSquare:(BOOL)a4 maxDimensionInPixels:(double)a5;
- (void)copyImageFromSourceUrl:(id)a0 to:(id)a1 discardTransparency:(BOOL)a2 enforceSquare:(BOOL)a3 maxDimensionInPixels:(double)a4 completion:(id /* block */)a5;
- (id)initWithBasePath:(id)a0 maxImageDimensionInPixels:(double)a1;
- (void)performWhenURLAvailableForImageForKey:(id)a0 block:(id /* block */)a1;

@end
