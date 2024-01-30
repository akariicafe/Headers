@class NSString;
@protocol WKKeyboardScrollViewAnimatorDelegate;

@interface WKKeyboardScrollViewAnimator : NSObject <WKKeyboardScrollableInternal> {
    struct WeakObjCPtr<UIScrollView> { id m_weakReference; } _scrollView;
    struct RetainPtr<WKKeyboardScrollingAnimator> { void *m_ptr; } _animator;
    BOOL _delegateRespondsToIsKeyboardScrollable;
    BOOL _delegateRespondsToDistanceForIncrement;
    BOOL _delegateRespondsToWillScroll;
    BOOL _delegateRespondsToDidFinishScrolling;
}

@property (weak, nonatomic) id<WKKeyboardScrollViewAnimatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleKeyEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didFinishScrolling;
- (void)dealloc;
- (struct RectEdges<bool> { struct array<bool, 4> { BOOL x0[4]; } x0; })scrollableDirectionsFromOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollWithScrollToExtentAnimationTo:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollToContentOffset:(struct FloatPoint { float x0; float x1; })a0 animated:(BOOL)a1;
- (BOOL)scrollTriggeringKeyIsPressed;
- (BOOL)beginWithEvent:(id)a0;
- (struct RectEdges<bool> { struct array<bool, 4> { BOOL x0[4]; } x0; })rubberbandableDirections;
- (id).cxx_construct;
- (void)willStartInteractiveScroll;
- (id)initWithScrollView:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (double)distanceForIncrement:(unsigned char)a0 inDirection:(unsigned char)a1;
- (BOOL)isKeyboardScrollable;
- (struct CGSize { double x0; double x1; })interactiveScrollVelocity;
- (void)invalidate;
- (struct CGPoint { double x0; double x1; })boundedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
