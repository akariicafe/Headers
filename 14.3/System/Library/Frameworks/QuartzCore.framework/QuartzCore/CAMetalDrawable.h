@class CAMetalLayer, NSString, IOSurfaceSharedEvent, NSMutableArray;
@protocol MTLTexture;

@interface CAMetalDrawable : NSObject <CAMetalDrawable, CAMetalDrawableSPI, MTLDrawableSPI> {
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; struct _CAMetalLayerPrivate *x6; struct __IOSurface *x7; id x8; id x9; struct CGColorSpace *x10; unsigned char x11; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; } *_priv;
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

- (void)present;
- (void)presentAfterMinimumDuration:(double)a0;
- (void).cxx_destruct;
- (BOOL)hasPresentedHandlers;
- (void)dealloc;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; struct _CAMetalLayerPrivate *x6; struct __IOSurface *x7; id x8; id x9; struct CGColorSpace *x10; unsigned char x11; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; } *)a0 layer:(id)a1;
- (void)didScheduledPresent;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; struct _CAMetalLayerPrivate *x6; struct __IOSurface *x7; id x8; id x9; struct CGColorSpace *x10; unsigned char x11; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; } *)priv;
- (void)addPresentScheduledHandler:(id /* block */)a0;
- (void)didPresentAtTime:(double)a0;
- (id)cachedTexture;
- (void)presentAtTime:(double)a0;
- (void)addPresentedHandler:(id /* block */)a0;
- (void)releasePrivateReferences:(struct _CAMetalLayerPrivate { struct Atomic { struct { int x0; } x0; } x0; struct Atomic { struct { int x0; } x0; } x1; struct SpinLock { struct { int x0; } x0; } x2; struct _CAImageQueue *x3; id x4; double x5; double x6; struct List<_CAMetalDrawablePrivate *> *x7; unsigned int x8; id x9; id x10; unsigned long long x11; unsigned long long x12; struct CGSize { double x0; double x1; } x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; struct Atomic { struct { int x0; } x0; } x18; id x19; struct Atomic { struct { int x0; } x0; } x20; struct Atomic { struct { int x0; } x0; } x21; id x22; id x23; id x24; struct SpinLock { struct { int x0; } x0; } x25; id x26; unsigned long long x27; struct SpinLock { struct { int x0; } x0; } x28; id x29; unsigned long long x30; struct CGColorSpace *x31; unsigned long long x32; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; unsigned char x37 : 1; unsigned char x38 : 1; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; unsigned char x42 : 1; } *)a0;

@end
