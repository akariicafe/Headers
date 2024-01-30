@class NSArray, NSString, NSIndexSet, NSObject, PXGColorProgram;
@protocol PXGTextureConverter, MTLDevice, OS_dispatch_queue, PXGTextureAtlasManagerDelegate;

@interface PXGMetalTextureAtlasManager : NSObject <PXGMetalTextureAtlasDelegate, PXGTextureAtlasManager> {
    id<MTLDevice> _device;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

@property (copy) NSArray *atlasTextures;
@property (readonly, nonatomic) PXGColorProgram *colorProgram;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (readonly, nonatomic) unsigned int capacityPerAtlas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGTextureConverter> textureConverter;
@property (weak, nonatomic) id<PXGTextureAtlasManagerDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes;
@property (readonly, copy, nonatomic) NSArray *textures;

- (void)applyChangeDetails:(id)a0;
- (void)_getAtlas:(id *)a0 localThumbnailIndex:(unsigned int *)a1 forGlobalThumbnailIndex:(unsigned int)a2;
- (void)removeSpriteIndex:(unsigned int)a0 atThumbnailIndex:(unsigned int)a1;
- (void)pruneUnusedTextures;
- (void)textureAtlasDidBecomeUnused:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_requestQueue_getNextAvailableAtlas:(id *)a0 thumbnailOffset:(unsigned int *)a1;
- (void)processPendingThumbnailRequestIDsWithHandler:(id /* block */)a0;
- (void)_updateAtlasSpriteIndexSkips;
- (void)addSpriteWithTextureRequestID:(int)a0 thumbnailData:(id)a1 size:(struct CGSize { double x0; double x1; })a2 bytesPerRow:(unsigned long long)a3 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)initWithThumbnailSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned long long)a1 capacityPerAtlas:(unsigned int)a2 requestQueue:(id)a3 layoutQueue:(id)a4 colorProgram:(id)a5 device:(id)a6;

@end
