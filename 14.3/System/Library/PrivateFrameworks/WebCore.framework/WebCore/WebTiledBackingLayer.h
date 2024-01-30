@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> > { struct __compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController> > { struct TileController *__value_; } __ptr_; } _tileController;
}

- (double)contentsScale;
- (BOOL)isOpaque;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)setDrawsAsynchronously:(BOOL)a0;
- (void)dealloc;
- (void)setNeedsDisplay;
- (BOOL)drawsAsynchronously;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)actionForKey:(id)a0;
- (void)setOpaque:(BOOL)a0;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (id).cxx_construct;
- (void)setBorderWidth:(double)a0;
- (struct TileController { void /* function */ **x0; struct PlatformCALayer *x1; float x2; float x3; struct unique_ptr<WebCore::TileCoverageMap, std::__1::default_delete<WebCore::TileCoverageMap> > { struct __compressed_pair<WebCore::TileCoverageMap *, std::__1::default_delete<WebCore::TileCoverageMap> > { struct TileCoverageMap *x0; } x0; } x4; struct unique_ptr<WebCore::TileGrid, std::__1::default_delete<WebCore::TileGrid> > { struct __compressed_pair<WebCore::TileGrid *, std::__1::default_delete<WebCore::TileGrid> > { struct TileGrid *x0; } x0; } x5; struct unique_ptr<WebCore::TileGrid, std::__1::default_delete<WebCore::TileGrid> > { struct __compressed_pair<WebCore::TileGrid *, std::__1::default_delete<WebCore::TileGrid> > { struct TileGrid *x0; } x0; } x6; struct unique_ptr<WebCore::HistoricalVelocityData, std::__1::default_delete<WebCore::HistoricalVelocityData> > { struct __compressed_pair<WebCore::HistoricalVelocityData *, std::__1::default_delete<WebCore::HistoricalVelocityData> > { struct HistoricalVelocityData *x0; } x0; } x7; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x8; struct Optional<WebCore::FloatRect> { BOOL x0; union constexpr_storage_t<WebCore::FloatRect> { unsigned char x0; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x1; } x1; } x9; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x10; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x11; struct Timer { void /* function */ **x0; struct MonotonicTime { double x0; } x1; struct Seconds { double x0; } x2; struct RefPtr<WebCore::ThreadTimerHeapItem, WTF::DumbPtrTraits<WebCore::ThreadTimerHeapItem> > { struct ThreadTimerHeapItem *x0; } x3; struct Ref<WTF::Thread, WTF::DumbPtrTraits<WTF::Thread> > { struct Thread *x0; } x4; struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *x0; } x0; } x0; } x5; } x12; struct DeferrableOneShotTimer { void /* function */ **x0; struct MonotonicTime { double x0; } x1; struct Seconds { double x0; } x2; struct RefPtr<WebCore::ThreadTimerHeapItem, WTF::DumbPtrTraits<WebCore::ThreadTimerHeapItem> > { struct ThreadTimerHeapItem *x0; } x3; struct Ref<WTF::Thread, WTF::DumbPtrTraits<WTF::Thread> > { struct Thread *x0; } x4; struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *x0; } x0; } x0; } x5; struct Seconds { double x0; } x6; BOOL x7; } x13; unsigned int x14; struct VelocityData { float x0; float x1; float x2; struct MonotonicTime { double x0; } x3; } x15; int x16; unsigned int x17; struct RectEdges<bool> { struct array<bool, 4> { BOOL x0[4]; } x0; } x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x30; float x31; int x32; float x33; } *)createTileController:(struct PlatformCALayer { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; int x2; unsigned long long x3; struct RetainPtr<CALayer> { void *x0; } x4; struct PlatformCALayerClient *x5; } *)a0;
- (void)setWantsDeepColorBackingStore:(BOOL)a0;
- (void)setSupportsSubpixelAntialiasedText:(BOOL)a0;
- (struct TiledBacking { void /* function */ **x0; } *)tiledBacking;
- (BOOL)wantsDeepColorBackingStore;
- (BOOL)supportsSubpixelAntialiasedText;
- (void)invalidate;

@end
