@protocol MTLDevice;

@interface CAMetalLayer : CALayer {
    void *_priv;
}

@property (nonatomic) BOOL fenceEnabled;
@property (nonatomic) BOOL serverSyncEnabled;
@property (nonatomic) BOOL lowLatency;
@property (nonatomic) BOOL exclusiveMode;
@property (nonatomic) double inputTime;
@property (nonatomic) BOOL nonDefaultColorspace;
@property (nonatomic) double drawableTimeoutSeconds;
@property (nonatomic) unsigned long long protectionOptions;
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

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)setContents:(id)a0;
- (void)setDisplaySyncEnabled:(BOOL)a0;
- (void)removeBackBuffers;
- (BOOL)displaySyncEnabled;
- (void)_didCommitLayer:(void *)a0;
- (void)setColorspace:(struct CGColorSpace { } *)a0 nonDefault:(BOOL)a1;
- (id)newDrawable;
- (id)init;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (void)_display;
- (id)nextDrawable;
- (void)dealloc;
- (void)discardContents;
- (BOOL)isDrawableAvailable;
- (void)didChangeValueForKey:(id)a0;

@end
