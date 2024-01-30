@class NSIndexSet, NSString, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_queue;

@interface PXGBaseTexture : NSObject <PXGSpriteTexture, PXGMutableSpriteTexture> {
    NSMutableIndexSet *_spriteIndexes;
    NSObject<OS_dispatch_queue> *_syncQueue;
    struct { int x0; unsigned int x1; } *_syncQueue_pendingImageRequestInfo;
    unsigned long long _syncQueue_pendingImageRequestInfoCount;
    unsigned long long _syncQueue_pendingImageRequestInfoCapacity;
}

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

- (void)applyChangeDetails:(id)a0;
- (void)addSpriteWithTextureRequestID:(int)a0 deliveryOrder:(unsigned int)a1;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateSpriteIndexes:(id /* block */)a0;
- (void)processPendingTextureRequestIDsWithHandler:(id /* block */)a0;
- (BOOL)containsSpriteIndex:(unsigned int)a0;
- (void)dealloc;
- (void)getSpriteIndexes:(unsigned int *)a0 maxSpriteCount:(unsigned int)a1;
- (void)_syncQueue_resizeStorageIfNeeded;
- (void)removeSpriteIndex:(unsigned int)a0;
- (void)_addSpriteIndex:(unsigned int)a0;
- (void)addSpriteIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAllSpriteIndexes;

@end
