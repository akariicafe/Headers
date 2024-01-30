@protocol WKKeyboardScrollableInternal;

@interface WKKeyboardScrollingAnimator : NSObject {
    id<WKKeyboardScrollableInternal> _scrollable;
    struct RetainPtr<CADisplayLink> { void *m_ptr; } _displayLink;
    struct optional<WebCore::KeyboardScroll> { union { char __null_state_; struct KeyboardScroll { struct FloatSize { BOOL hasIntrinsicWidth; BOOL hasIntrinsicHeight; float m_width; float m_height; } offset; struct FloatSize { BOOL hasIntrinsicWidth; BOOL hasIntrinsicHeight; float m_width; float m_height; } maximumVelocity; struct FloatSize { BOOL hasIntrinsicWidth; BOOL hasIntrinsicHeight; float m_width; float m_height; } force; unsigned char granularity; unsigned char direction; } __val_; } ; BOOL __engaged_; } _currentScroll;
    BOOL _scrollTriggeringKeyIsPressed;
    struct FloatSize { BOOL hasIntrinsicWidth; BOOL hasIntrinsicHeight; float m_width; float m_height; } _velocity;
    struct FloatPoint { float m_x; float m_y; } _idealPosition;
    struct FloatPoint { float m_x; float m_y; } _currentPosition;
    struct FloatPoint { float m_x; float m_y; } _idealPositionForMinimumTravel;
}

- (void)handleKeyEvent:(id)a0;
- (void)displayLinkFired:(id)a0;
- (void)willStartInteractiveScroll;
- (BOOL)scrollTriggeringKeyIsPressed;
- (BOOL)beginWithEvent:(id)a0;
- (const struct KeyboardScrollParameters { float x0; float x1; float x2; float x3; float x4; float x5; } *)parameters;
- (void)startDisplayLinkIfNeeded;
- (id)initWithScrollable:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (struct optional<WebCore::KeyboardScroll> { union { char x0; struct KeyboardScroll { struct FloatSize { BOOL x0; BOOL x1; float x2; float x3; } x0; struct FloatSize { BOOL x0; BOOL x1; float x2; float x3; } x1; struct FloatSize { BOOL x0; BOOL x1; float x2; float x3; } x2; unsigned char x3; unsigned char x4; } x1; } x0; BOOL x1; })keyboardScrollForEvent:(id)a0;
- (void)invalidate;
- (void)stopAnimatedScroll;
- (void)stopDisplayLink;
- (id).cxx_construct;

@end
