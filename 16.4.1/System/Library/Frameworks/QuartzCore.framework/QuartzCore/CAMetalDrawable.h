@class CAMetalLayer, NSString, IOSurfaceSharedEvent, NSMutableArray;
@protocol MTLTexture;

@interface CAMetalDrawable : NSObject <CAMetalDrawable, CAMetalDrawableSPI, MTLDrawableSPI> {
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; struct _CAMetalLayerPrivate *x9; struct __IOSurface *x10; id x11; id x12; struct CGColorSpace *x13; id x14; unsigned char x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; } *_priv;
    id<MTLTexture> _cachedTexture;
    CAMetalLayer *_layer;
    NSMutableArray *_presentedHandlers;
    NSMutableArray *_presentScheduledHandlers;
}

@property (nonatomic) unsigned long long drawableID;
@property (retain, nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned int insertSeed;
@property (nonatomic) unsigned int updateSeed;
@property (nonatomic) BOOL didComposite;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double presentedTime;
@property (nonatomic) unsigned int presentScheduledInsertSeed;
@property (nonatomic) BOOL presentScheduledInsertSeedValid;
@property (readonly) id<MTLTexture> texture;
@property (readonly) CAMetalLayer *layer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dirtyRect;

- (void)didScheduledPresent;
- (void)addPresentScheduledHandler:(id /* block */)a0;
- (void)releasePrivateReferences:(void *)a0;
- (void)present;
- (void)didPresentAtTime:(double)a0;
- (void)presentAtTime:(double)a0;
- (void)presentWithOptions:(id)a0;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; struct _CAMetalLayerPrivate *x9; struct __IOSurface *x10; id x11; id x12; struct CGColorSpace *x13; id x14; unsigned char x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; } *)priv;
- (void)dealloc;
- (BOOL)hasPresentedHandlers;
- (id)cachedTexture;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; struct _CAMetalLayerPrivate *x9; struct __IOSurface *x10; id x11; id x12; struct CGColorSpace *x13; id x14; unsigned char x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; } *)a0 layer:(id)a1;
- (id)newTextureWithResourceIndex:(unsigned long long)a0;
- (void)presentAfterMinimumDuration:(double)a0;
- (void)addPresentedHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
