@protocol WKKeyboardScrollableInternal;

@interface WKKeyboardScrollingAnimator : NSObject {
    id<WKKeyboardScrollableInternal> _scrollable;
    struct RetainPtr<CADisplayLink> { void *m_ptr; } _displayLink;
    struct optional<WebCore::KeyboardScroll> { union { char __null_state_; struct KeyboardScroll { struct FloatSize { float m_width; float m_height; } offset; struct FloatSize { float m_width; float m_height; } maximumVelocity; struct FloatSize { float m_width; float m_height; } force; unsigned char granularity; unsigned char direction; } __val_; } ; BOOL __engaged_; } _currentScroll;
    BOOL _scrollTriggeringKeyIsPressed;
    struct FloatSize { float m_width; float m_height; } _velocity;
    struct FloatPoint { float m_x; float m_y; } _idealPosition;
    struct FloatPoint { float m_x; float m_y; } _currentPosition;
    struct FloatPoint { float m_x; float m_y; } _idealPositionForMinimumTravel;
}

- (void)handleKeyEvent:(id)a0;
- (struct optional<WebCore::KeyboardScroll> { union { char x0; struct KeyboardScroll { struct FloatSize { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; struct FloatSize { float x0; float x1; } x2; unsigned char x3; unsigned char x4; } x1; } x0; BOOL x1; })keyboardScrollForEvent:(id)a0;
- (id).cxx_construct;
- (void)willStartInteractiveScroll;
- (void)displayLinkFired:(id)a0;
- (void)stopDisplayLink;
- (BOOL)beginWithEvent:(id)a0;
- (BOOL)scrollTriggeringKeyIsPressed;
- (void)stopAnimatedScroll;
- (id)initWithScrollable:(id)a0;
- (id)init;
- (void)invalidate;
- (void)startDisplayLinkIfNeeded;
- (void).cxx_destruct;

@end
