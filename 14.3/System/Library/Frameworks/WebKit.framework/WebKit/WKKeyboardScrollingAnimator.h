@protocol WKKeyboardScrollableInternal;

@interface WKKeyboardScrollingAnimator : NSObject {
    id<WKKeyboardScrollableInternal> _scrollable;
    struct RetainPtr<CADisplayLink> { void *m_ptr; } _displayLink;
    struct Optional<WebKit::KeyboardScroll> { BOOL init_; union constexpr_storage_t<WebKit::KeyboardScroll> { unsigned char dummy_; struct KeyboardScroll { struct FloatSize { float m_width; float m_height; } offset; struct FloatSize { float m_width; float m_height; } maximumVelocity; struct FloatSize { float m_width; float m_height; } force; unsigned char increment; unsigned char direction; } value_; } storage_; } _currentScroll;
    BOOL _scrollTriggeringKeyIsPressed;
    struct FloatSize { float m_width; float m_height; } _velocity;
    struct FloatPoint { float m_x; float m_y; } _idealPosition;
    struct FloatPoint { float m_x; float m_y; } _currentPosition;
    struct FloatPoint { float m_x; float m_y; } _idealPositionForMinimumTravel;
}

- (void)handleKeyEvent:(id)a0;
- (const struct KeyboardScrollParameters { double x0; double x1; double x2; double x3; double x4; double x5; } *)parameters;
- (id)init;
- (void).cxx_destruct;
- (struct Optional<WebKit::KeyboardScroll> { BOOL x0; union constexpr_storage_t<WebKit::KeyboardScroll> { unsigned char x0; struct KeyboardScroll { struct FloatSize { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; struct FloatSize { float x0; float x1; } x2; unsigned char x3; unsigned char x4; } x1; } x1; })keyboardScrollForEvent:(id)a0;
- (void)startDisplayLinkIfNeeded;
- (void)stopDisplayLink;
- (id)initWithScrollable:(id)a0;
- (BOOL)scrollTriggeringKeyIsPressed;
- (BOOL)beginWithEvent:(id)a0;
- (void)stopAnimatedScroll;
- (id).cxx_construct;
- (void)willStartInteractiveScroll;
- (void)displayLinkFired:(id)a0;
- (void)invalidate;

@end
