@class NUGLTexture, NSString, NUIOSurface, NUPixelFormat, NURegion;

@interface NUIOSurfaceStorage : _NUAbstractBufferStorage <NUSurfaceStorage, NUPurgeableStorage> {
    long long _purgeLevel;
    BOOL _purgeable;
    NUIOSurface *_surface;
    NUGLTexture *_texture;
}

@property (readonly) struct { long long x0; long long x1; } size;
@property (readonly) long long sizeInBytes;
@property (readonly) NUPixelFormat *format;
@property (readonly) NURegion *validRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPurged;
- (int)useCount;
- (BOOL)isShared;
- (void).cxx_destruct;
- (id)initWithSurface:(id)a0;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)incrementUseCount;
- (BOOL)decrementUseCount;
- (id)_texture;
- (BOOL)isPurgeable;
- (BOOL)isInUse;
- (long long)rowBytes;
- (BOOL)makeNonPurgeable;
- (void)makePurgeable;
- (long long)purgeLevel;
- (void)adjustPurgeLevel:(long long)a0;
- (long long)copyFromStorage:(id)a0 region:(id)a1;
- (long long)readBufferInRegion:(id)a0 block:(id /* block */)a1;
- (long long)writeBufferInRegion:(id)a0 block:(id /* block */)a1;
- (long long)useAsCIImageWithOptions:(id)a0 renderer:(id)a1 block:(id /* block */)a2;
- (long long)useAsCIRenderDestinationWithRenderer:(id)a0 block:(id /* block */)a1;
- (void)_allocateSurface;
- (long long)readSurfaceInRegion:(id)a0 block:(id /* block */)a1;
- (long long)writeSurfaceInRegion:(id)a0 block:(id /* block */)a1;
- (long long)readTextureInRegion:(id)a0 block:(id /* block */)a1;
- (long long)writeTextureInRegion:(id)a0 block:(id /* block */)a1;

@end
