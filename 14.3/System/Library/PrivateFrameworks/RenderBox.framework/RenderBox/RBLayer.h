@class NSDictionary, RBDevice, NSTimer;

@interface RBLayer : CALayer <_RBDrawableDelegate, RBDrawableStatistics> {
    struct objc_ptr<RBDevice *> { RBDevice *_p; } _device;
    BOOL _pendingFlush;
    NSTimer *_collectionTimer;
    struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> > { struct __compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> > { struct Drawable *__value_; } __ptr_; } _drawable;
    struct refcounted_ptr<(anonymous namespace)::ImageQueue> { struct ImageQueue *_p; } _imageQueue;
    unsigned long long _statistics_mask;
    double _statistics_alpha;
    struct spin_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _statistics_handler_lock;
    struct objc_ptr<void (^)(id<RBDrawableStatistics>)> { id /* block */ _p; } _statistics_handler;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _deallocating;
    BOOL _visible;
    BOOL _needs_display_on_visible;
    BOOL _pending_visible_callback;
}

@property (retain, nonatomic) RBDevice *device;
@property (nonatomic) BOOL rendersAsynchronously;
@property (nonatomic) int colorMode;
@property (nonatomic) BOOL promotesFramebuffer;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) BOOL clearsBackground;
@property (nonatomic) struct { float red; float green; float blue; float alpha; } clearColor;
@property (nonatomic) long long maxDrawableCount;
@property (readonly, nonatomic, getter=isDrawableAvailable) BOOL drawableAvailable;
@property (nonatomic) BOOL needsSynchronousUpdate;
@property (readonly, copy, nonatomic) NSDictionary *statistics;
@property (copy, nonatomic) id /* block */ statisticsHandler;

+ (id)defaultValueForKey:(id)a0;

- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)display;
- (id)initWithCoder:(id)a0;
- (void)rb_init;
- (id).cxx_construct;
- (void)setContents:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)waitUntilAsyncRenderingCompleted;
- (void)_RBDrawableStatisticsDidChange;
- (void)resetStatistics:(unsigned long long)a0 alpha:(double)a1;
- (void)drawInDisplayList:(id)a0;
- (void)copyImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 completionQueue:(id)a2 handler:(id /* block */)a3;

@end
