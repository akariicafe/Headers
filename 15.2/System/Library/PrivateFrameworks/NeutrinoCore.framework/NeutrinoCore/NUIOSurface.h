@class IOSurface, NSString, NSMutableDictionary, NUPixelFormat;

@interface NUIOSurface : NSObject {
    NSMutableDictionary *_textures;
}

@property (readonly, nonatomic) struct __IOSurface { } *IOSurfaceRef;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) long long sizeInBytes;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) struct CGColorSpace { } *colorSpace;

- (id)debugQuickLookObject;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0;
- (id)description;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void).cxx_destruct;
- (BOOL)write:(id /* block */)a0;
- (id)init;
- (BOOL)isPurged;
- (void)dealloc;
- (BOOL)read:(id /* block */)a0;
- (BOOL)makeNonPurgeable;
- (id)newRenderDestination;
- (int)_fetchPurgeState:(unsigned int *)a0;
- (id)_purgeStateDescription;
- (unsigned int)_purgeLevelToOSValue:(long long)a0;
- (void)_allocateSurface;
- (void)makePurgeable:(long long)a0;
- (id)textureForDevice:(id)a0;
- (id)_newTextureForDevice:(id)a0;

@end
