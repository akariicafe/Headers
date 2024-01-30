@interface WebTextIndicatorLayer : CALayer {
    struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> { struct TextIndicator *m_ptr; } _textIndicator;
    struct RetainPtr<NSArray> { void *m_ptr; } _bounceLayers;
    struct CGSize { double width; double height; } _margin;
    BOOL _hasCompletedAnimation;
}

@property (nonatomic, getter=isFadingOut) BOOL fadingOut;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textIndicator:(void *)a1 margin:(struct CGSize { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)indicatorWantsManualAnimation:(const void *)a0;
- (BOOL)hasCompletedAnimation;
- (void)hideWithCompletionHandler:(id /* block */)a0;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (BOOL)indicatorWantsBounce:(const void *)a0;
- (void)setAnimationProgress:(float)a0;
- (id).cxx_construct;
- (double)_animationDuration;
- (void)present;

@end
