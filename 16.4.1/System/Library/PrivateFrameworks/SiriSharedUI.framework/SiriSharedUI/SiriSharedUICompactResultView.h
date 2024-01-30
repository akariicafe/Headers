@class SiriSharedUIViewStackConstraints, NSArray, NSString, SiriSharedUIAnimationContext, SiriSharedUIContentPlatterView, SiriSharedUIPanDismissalGestureRecognizer, UIButton;
@protocol SiriSharedUIStackableContentDelegate, SiriSharedUICompactResultViewDelegate;

@interface SiriSharedUICompactResultView : SiriSharedUIStandardView <SiriSharedUIContentPlatterViewDelegate, SiriSharedUICompactResultViewHosting>

@property (nonatomic) BOOL snippetNeedsSizing;
@property (retain, nonatomic, getter=_overlayButton) UIButton *overlayButton;
@property (nonatomic) struct CGSize { double width; double height; } previousContentSize;
@property (nonatomic) double previousSeparatorContentHeight;
@property (weak, nonatomic) id<SiriSharedUICompactResultViewDelegate> delegate;
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *snippetView;
@property (retain, nonatomic) SiriSharedUIPanDismissalGestureRecognizer *dismissalGestureRecognizer;
@property (weak, nonatomic) id<SiriSharedUIStackableContentDelegate> stackContainerDelegate;
@property (nonatomic) long long attachmentType;
@property (nonatomic) double attachmentYOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } portraitContentSize;
@property (retain, nonatomic) SiriSharedUIViewStackConstraints *stackConstraints;
@property (nonatomic) BOOL useLowerPriorityHeightConstraint;
@property (retain, nonatomic) NSArray *customAttachmentConstraints;
@property (retain, nonatomic) SiriSharedUIAnimationContext *animationContextForFrameAndLayoutUpdate;
@property (nonatomic) double darkenIntensity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsLayout;
- (void)relayout;
- (id)hostingView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)_isSnippetAnimatingInsertionOrRemoval;
- (struct CGSize { double x0; double x1; })_maxSizeForSnippet;
- (void)_overlayButtonWasTouchedUpInside:(id)a0;
- (id)_snippetInsertAnimation;
- (id)_snippetRemovalAnimation;
- (BOOL)_snippetViewIsLoading;
- (void)contentPlatterView:(id)a0 didScrollWithContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)contentPlatterViewScrolledToContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setDarkenIntensity:(double)a0 animated:(BOOL)a1;
- (void)setShowDimmingView:(BOOL)a0 animated:(BOOL)a1;
- (void)setShowSnippetView:(BOOL)a0 animated:(BOOL)a1;
- (void)setSnippetView:(id)a0 completion:(id /* block */)a1;
- (void)snippetContentDidUpdate;

@end
