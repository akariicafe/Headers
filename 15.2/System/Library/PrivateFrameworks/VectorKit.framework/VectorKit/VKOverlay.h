@class NSString, VKVectorOverlayData, VKRasterTileOverlayProviderData;
@protocol VKOverlayDelegate;

@interface VKOverlay : NSObject <VKVectorOverlayDelegate, VKRasterTileOverlayProviderDelegate> {
    BOOL _canProvideVectorGeometry;
    id<VKOverlayDelegate> _delegate;
    unsigned int identifier;
    struct weak_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer *__ptr_; struct __shared_weak_count *__cntrl_; } _flyoverContainer;
    struct weak_ptr<md::OverlayContainer> { struct OverlayContainer *__ptr_; struct __shared_weak_count *__cntrl_; } _standardContainer;
    VKVectorOverlayData *_vectorData;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _vectorDataLock;
    VKRasterTileOverlayProviderData *_rasterTileProvider;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _rasterTileProviderLock;
}

@property (readonly, nonatomic) struct shared_ptr<md::RasterTileOverlayStyle> { struct RasterTileOverlayStyle *__ptr_; struct __shared_weak_count *__cntrl_; } rasterStyle;
@property (nonatomic) struct weak_ptr<md::GlobeOverlayContainer> { struct GlobeOverlayContainer *x0; struct __shared_weak_count *x1; } flyoverContainer;
@property (nonatomic) struct weak_ptr<md::OverlayContainer> { struct OverlayContainer *x0; struct __shared_weak_count *x1; } standardContainer;
@property (nonatomic) struct RunLoopController { struct MapEngine *x0; long long x1; long long x2; } *runLoopController;
@property (weak, nonatomic) id<VKOverlayDelegate> delegate;
@property (readonly) BOOL canProvideVectorData;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } replaceMapContentInRect;
@property (nonatomic) unsigned long long level;
@property (readonly, nonatomic) unsigned int identifier;
@property (nonatomic) long long blendMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 inContext:(struct CGContext { } *)a1;
- (void)vectorOverlayNeedsDisplay:(id)a0 needsFullInvalidate:(BOOL)a1;
- (void)_updateVectorData;
- (void)_updateRasterTileProvider;
- (void)rasterTileOverlayNeedsDisplay:(id)a0;
- (void)rasterTileOverlayDidChangeAlpha:(id)a0;
- (void)rasterTileOverlayNeedsInvalidate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setNeedsDisplayInRect:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a0 level:(long long)a1 reason:(unsigned long long)a2;
- (void)setNeedsDisplayForReason:(unsigned long long)a0;
- (id)rasterTileProvider;
- (BOOL)canPossiblyDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)vectorData;
- (void)dealloc;
- (id).cxx_construct;

@end
