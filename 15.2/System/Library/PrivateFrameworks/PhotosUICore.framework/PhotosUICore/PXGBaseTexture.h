@class NSIndexSet, NSString, NSMutableIndexSet;

@interface PXGBaseTexture : NSObject <PXGSpriteTexture, PXGMutableSpriteTexture> {
    NSMutableIndexSet *_spriteIndexes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct { int x0; unsigned int x1; } *_lock_pendingImageRequestInfo;
    unsigned long long _lock_pendingImageRequestInfoCount;
    unsigned long long _lock_pendingImageRequestInfoCapacity;
    BOOL _isDegraded;
}

@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly, nonatomic) BOOL hasSprites;
@property (readonly, nonatomic) long long estimatedByteSize;
@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) struct CGImage { } *imageRepresentation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsDegraded:(BOOL)a0;
- (void)applyChangeDetails:(id)a0;
- (void)addSpriteWithTextureRequestID:(int)a0 deliveryOrder:(unsigned int)a1;
- (BOOL)containsSpriteIndex:(unsigned int)a0;
- (void)getSpriteIndexes:(unsigned int *)a0 maxSpriteCount:(unsigned int)a1;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateSpriteIndexes:(id /* block */)a0;
- (void)removeSpriteIndex:(unsigned int)a0;
- (void)dealloc;
- (void)processPendingTextureRequestIDsWithHandler:(id /* block */)a0;
- (BOOL)hasPendingTextureRequestID:(int)a0 deliveryOrder:(unsigned int)a1;
- (BOOL)removePendingSpriteWithTextureRequestID:(int)a0 ifDeliveredBefore:(unsigned int)a1;
- (void)_addSpriteIndex:(unsigned int)a0;
- (void)addSpriteIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAllSpriteIndexes;
- (void)_filterPendingTextureRequestIDsWithPredicate:(id /* block */)a0;
- (void)_lock_resizeStorageIfNeeded;

@end
