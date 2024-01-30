@class NSArray, SiriSharedUIViewStack, NSLayoutConstraint, UIView, SiriSharedUIRectSet;

@interface SiriSharedUIViewStackContainer : SiriSharedUIStandardView <SiriSharedUIStackableContentDelegate, SiriSharedUIViewStackContainerHosting>

@property (retain, nonatomic) UIView *containingView;
@property (retain, nonatomic) SiriSharedUIViewStack *customConstraintsViewStack;
@property (retain, nonatomic) SiriSharedUIViewStack *bottomViewStack;
@property (retain, nonatomic) SiriSharedUIViewStack *topViewStack;
@property (retain, nonatomic) NSLayoutConstraint *topContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *temporaryTopConstraintForBottomViewStack;
@property (copy, nonatomic, getter=_transitionalContentViewFrames, setter=_setTransitionalContentViewFrames:) SiriSharedUIRectSet *transitionalContentViewFrames;
@property (readonly, nonatomic) NSArray *contentViews;
@property (readonly, nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;

- (void)addContentView:(id)a0;
- (void)relayout;
- (id)hostingView;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)removeContentView:(id)a0;
- (void)_attachContentView:(id)a0;
- (void)_clearTransitionalContentViewFrameSnapshots;
- (void)_configureContainingView;
- (void)_configureCustomTopAndBottomViews:(id)a0;
- (id)_mostRecentBottomStackViewAnchor;
- (id)_mostRecentTopStackViewAnchor;
- (void)_setContentViews:(id)a0;
- (void)_snapshotContentViewFramesForTransition;
- (id)_stackContainingContentView:(id)a0;
- (void)_updateContainingViewConstraints;
- (void)_updateContainingViewTopConstraint;
- (void)_updateContainingViewTrailingConstraint;
- (void)didDismissModalContent;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentViews:(id)a1;
- (void)setBottomPadding:(double)a0 animatedWithDuration:(double)a1 animationOptions:(unsigned long long)a2 alongsideAnimations:(id /* block */)a3 completion:(id /* block */)a4;
- (void)stackableContentDidLayout:(id)a0;
- (double)stackableContentMaximumContainerWidth;
- (void)stackableContentWillUpdateLayout:(id)a0 withUpdatedContentSize:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;
- (id)stackableViewsWithAttachment:(long long)a0;
- (void)willDismissModalContent;
- (void)willPresentModalContent;

@end
