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

- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)handleKeyEvent:(id)a0;
- (void)didFinishScrolling;
- (void)willStartInteractiveScroll;
- (BOOL)scrollTriggeringKeyIsPressed;
- (BOOL)beginWithEvent:(id)a0;
- (struct RectEdges<bool> { struct array<bool, 4> { BOOL x0[4]; } x0; })rubberbandableDirections;
- (struct CGPoint { double x0; double x1; })boundedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)isKeyboardScrollable;
- (id)init;
- (void)scrollWithScrollToExtentAnimationTo:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithScrollView:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (void)scrollToContentOffset:(struct FloatPoint { float x0; float x1; })a0 animated:(BOOL)a1;
- (double)distanceForIncrement:(unsigned char)a0 inDirection:(unsigned char)a1;
- (id).cxx_construct;
- (struct RectEdges<bool> { struct array<bool, 4> { BOOL x0[4]; } x0; })scrollableDirectionsFromOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })interactiveScrollVelocity;

@end
