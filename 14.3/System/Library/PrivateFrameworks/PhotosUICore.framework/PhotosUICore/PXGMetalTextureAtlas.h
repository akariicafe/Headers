@class NSIndexSet, NSString, NSMutableIndexSet, NSMutableDictionary, NSObject, PXGColorProgram;
@protocol MTLDevice, PXGMetalTextureAtlasDelegate, MTLTexture, OS_dispatch_queue;

@interface PXGMetalTextureAtlas : PXGImageTexture <PXGMetalSpriteTexture> {
    id<MTLDevice> _device;
    NSObject<OS_dispatch_queue> *_syncQueue;
    long long _cols;
    unsigned long long _bytesPerPixel;
    NSMutableIndexSet *_thumbnailIndexesUsedBySprites;
    NSMutableIndexSet *_spriteIndexesUsedBySprites;
    unsigned int *_spriteIndexByThumbnailIndex;
    NSIndexSet *_renderedSpriteIndexes;
    _Atomic short _count;
    NSMutableIndexSet *_thumbnailIndexesPendingCheckin;
    NSMutableIndexSet *_thumbnailIndexesBeingCheckedIn;
    _Atomic unsigned char _isPerformingThumbnailCheckin;
    char *_retainCountByThumbnailIndex;
    struct { } *_guarded_textureInfoByThumbnailIndex;
    NSMutableIndexSet *_syncQueue_availableThumbnailIndexes;
    NSMutableDictionary *_syncQueue_thumbnailsInUseByRenderPass;
    struct { int x0; unsigned int x1; unsigned int x2; } *_syncQueue_pendingThumbnailRequestInfo;
    unsigned long long _syncQueue_pendingThumbnailRequestInfoCount;
    unsigned long long _syncQueue_pendingThumbnailRequestInfoCapacity;
}

@property (readonly, copy, nonatomic) NSIndexSet *thumbnailIndexesUsedBySprites;
@property (readonly, nonatomic) NSIndexSet *renderedSpriteIndexes;
@property (weak, nonatomic) id<PXGMetalTextureAtlasDelegate> delegate;
@property (readonly) BOOL isUnused;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly, nonatomic) unsigned int capacity;
@property (readonly, nonatomic) unsigned int count;
@property (retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) id<MTLTexture> chromaTexture;
@property (readonly, nonatomic) PXGColorProgram *colorProgram;
@property (nonatomic) long long renderPipelineIndex;
@property (readonly, nonatomic) BOOL isAtlas;
@property (readonly, nonatomic) BOOL isCaptureTexture;
@property (readonly, nonatomic) int shaderFlags;
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly, nonatomic) long long estimatedByteSize;
@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) struct CGImage { } *imageRepresentation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)maxCapacityForThumbnailSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned long long)a1;

- (void)removeSpriteIndex:(unsigned int)a0 atThumbnailIndex:(unsigned int)a1;
- (void)applyChangeDetails:(id)a0;
- (void)addSpriteWithTextureRequestID:(int)a0 deliveryOrder:(unsigned int)a1;
- (id)init;
- (void)_checkinPendingThumbnailIndexesIfNeeded;
- (void).cxx_destruct;
- (void)processPendingTextureRequestIDsWithHandler:(id /* block */)a0;
- (void)_invalidateRenderedSpriteIndexes;
- (BOOL)containsSpriteIndex:(unsigned int)a0;
- (void)dealloc;
- (void)processPendingThumbnailRequestIDsWithHandler:(id /* block */)a0;
- (void)prepareForRender:(long long)a0;
- (void)_syncQueue_retainThumbnailsAtIndexes:(id)a0;
- (void)_syncQueue_releaseThumbnailsAtIndexes:(id)a0;
- (void)getSpriteIndexes:(unsigned int *)a0 maxSpriteCount:(unsigned int)a1;
- (void)getTextureInfos:(struct { } *)a0 forSpriteIndexes:(unsigned int *)a1 geometries:(const struct { struct { double x0; double x1; float x2; } x0; } *)a2 spriteStyles:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a3 spriteInfos:(const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a4 screenScale:(double)a5 count:(unsigned int)a6;
- (unsigned int)addSpriteWithTextureRequestID:(int)a0 thumbnailData:(id)a1 bytesPerRow:(unsigned long long)a2 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_syncQueue_releaseThumbnailAtIndex:(long long)a0;
- (void)_syncQueue_resizeStorageIfNeeded;
- (void)removeSpriteIndex:(unsigned int)a0;
- (void)_syncQueue_checkinThumbnailIndex:(unsigned int)a0;
- (unsigned int)_syncQueue_checkoutNextThumbnailIndex;
- (void)_syncQueue_retainThumbnailAtIndex:(long long)a0;
- (id)initWithThumbnailSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned long long)a1 capacity:(unsigned int)a2 colorProgram:(id)a3 device:(id)a4;
- (void)cleanupAfterRender:(long long)a0;

@end
