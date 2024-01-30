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
- (void)didFinishScrolling;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (id).cxx_construct;
- (void)willStartInteractiveScroll;
- (BOOL)beginWithEvent:(id)a0;
- (BOOL)scrollTriggeringKeyIsPressed;
- (void)dealloc;
- (double)distanceForIncrement:(unsigned char)a0 inDirection:(unsigned char)a1;
- (void)scrollWithScrollToExtentAnimationTo:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollToContentOffset:(struct FloatPoint { float x0; float x1; })a0 animated:(BOOL)a1;
- (id)init;
- (struct RectEdges<bool> { struct array<bool, 4UL> { BOOL x0[4]; } x0; })rubberbandableDirections;
- (struct RectEdges<bool> { struct array<bool, 4UL> { BOOL x0[4]; } x0; })scrollableDirectionsFromOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithScrollView:(id)a0;
- (void)invalidate;
- (struct CGSize { double x0; double x1; })interactiveScrollVelocity;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })boundedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isKeyboardScrollable;

@end
