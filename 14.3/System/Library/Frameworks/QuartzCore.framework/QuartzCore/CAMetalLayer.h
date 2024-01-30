@protocol MTLDevice;

@interface CAMetalLayer : CALayer {
    struct _CAMetalLayerPrivate { struct Atomic { struct { int x0; } x0; } x0; struct Atomic { struct { int x0; } x0; } x1; struct SpinLock { struct { int x0; } x0; } x2; struct _CAImageQueue *x3; id x4; double x5; double x6; struct List<_CAMetalDrawablePrivate *> *x7; unsigned int x8; id x9; id x10; unsigned long long x11; unsigned long long x12; struct CGSize { double x0; double x1; } x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; struct Atomic { struct { int x0; } x0; } x18; id x19; struct Atomic { struct { int x0; } x0; } x20; struct Atomic { struct { int x0; } x0; } x21; id x22; id x23; id x24; struct SpinLock { struct { int x0; } x0; } x25; id x26; unsigned long long x27; struct SpinLock { struct { int x0; } x0; } x28; id x29; unsigned long long x30; struct CGColorSpace *x31; unsigned long long x32; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; unsigned char x37 : 1; unsigned char x38 : 1; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; unsigned char x42 : 1; } *_priv;
}

@property (nonatomic) BOOL fenceEnabled;
@property (nonatomic) BOOL serverSyncEnabled;
@property (nonatomic) BOOL lowLatency;
@property (nonatomic) BOOL exclusiveMode;
@property (nonatomic) double inputTime;
@property (nonatomic) BOOL nonDefaultColorspace;
@property (nonatomic) double drawableTimeoutSeconds;
@property (readonly, nonatomic) unsigned long long displayCompositingInternalStatus;
@property (retain) id<MTLDevice> device;
@property (readonly) id<MTLDevice> preferredDevice;
@property unsigned long long pixelFormat;
@property BOOL framebufferOnly;
@property struct CGSize { double x0; double x1; } drawableSize;
@property unsigned long long maximumDrawableCount;
@property BOOL presentsWithTransaction;
@property struct CGColorSpace { } *colorspace;
@property BOOL allowsNextDrawableTimeout;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)defaultValueForKey:(id)a0;

- (void)_display;
- (void)_didCommitLayer:(struct Transaction { struct Shared *x0; struct HashTable<CA::Layer *, unsigned int *> *x1; int x2; unsigned int x3; struct Level *x4; struct List<void (^)()> *x5; struct Command *x6; struct Deleted *x7; struct List<const void *> *x8; struct Context *x9; struct HashTable<CA::Layer *, CA::Layer *> *x10; struct __CFRunLoop *x11; struct __CFRunLoopObserver *x12; struct LayoutList *x13; struct List<CA::Layer *> *x14; struct Atomic { struct { int x0; } x0; } x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; } *)a0;
- (id)init;
- (id)nextDrawable;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)removeBackBuffers;
- (BOOL)isDrawableAvailable;
- (void)setColorspace:(struct CGColorSpace { } *)a0 nonDefault:(BOOL)a1;
- (BOOL)displaySyncEnabled;
- (void)didChangeValueForKey:(id)a0;
- (void)setContents:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (id)newDrawable;
- (void)setDisplaySyncEnabled:(BOOL)a0;
- (void)discardContents;

@end
