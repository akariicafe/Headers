@class CAMetalLayer, NSString, IOSurfaceSharedEvent, NSMutableArray;
@protocol MTLTexture;

@interface CAMetalDrawable : NSObject <CAMetalDrawable, CAMetalDrawableSPI, MTLDrawableSPI> {
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct _CAMetalLayerPrivate *x7; struct __IOSurface *x8; id x9; id x10; struct CGColorSpace *x11; unsigned char x12; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; } *_priv;
    id<MTLTexture> _cachedTexture;
    CAMetalLayer *_layer;
    NSMutableArray *_presentedHandlers;
    NSMutableArray *_presentScheduledHandlers;
}

@property (nonatomic) unsigned long long drawableID;
@property (retain, nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned int insertSeed;
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

- (void)presentAfterMinimumDuration:(double)a0;
- (void)releasePrivateReferences:(void *)a0;
- (id)cachedTexture;
- (void).cxx_destruct;
- (void)addPresentedHandler:(id /* block */)a0;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct _CAMetalLayerPrivate *x7; struct __IOSurface *x8; id x9; id x10; struct CGColorSpace *x11; unsigned char x12; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; } *)a0 layer:(id)a1;
- (void)didPresentAtTime:(double)a0;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct _CAMetalLayerPrivate *x7; struct __IOSurface *x8; id x9; id x10; struct CGColorSpace *x11; unsigned char x12; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; } *)priv;
- (BOOL)hasPresentedHandlers;
- (void)addPresentScheduledHandler:(id /* block */)a0;
- (void)presentAtTime:(double)a0;
- (void)dealloc;
- (void)didScheduledPresent;
- (void)present;

@end
