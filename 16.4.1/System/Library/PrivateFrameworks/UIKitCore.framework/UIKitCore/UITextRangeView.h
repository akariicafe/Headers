@class UIView, NSString, NSArray, UIPointerInteraction, UISelectionGrabberCustomPath, UIResponder, UISelectionGrabber, NSMutableArray, UITouch, UITextRangeAdjustmentInteraction, UITextSelectionView;
@protocol UITextInput;

@interface UITextRangeView : UIView <UIPointerInteractionDelegate, UITextRangeAdjustmentInteractionDelegate> {
    UITextSelectionView *m_selectionView;
    UIResponder<UITextInput> *m_container;
    NSMutableArray *m_rectViews;
    UITouch *m_activeTouch;
    UIView *m_rectContainerView;
    UIPointerInteraction *_pointerInteraction;
}

@property (retain, nonatomic) UISelectionGrabberCustomPath *startCustomPath;
@property (retain, nonatomic) UISelectionGrabberCustomPath *endCustomPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startEdge;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endEdge;
@property (nonatomic) BOOL magnifying;
@property (nonatomic) BOOL isClearingRange;
@property (nonatomic) BOOL shouldStayVisible;
@property (readonly, nonatomic) UITextSelectionView *selectionView;
@property (readonly, nonatomic) UIResponder<UITextInput> *container;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } basePoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } extentPoint;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSArray *rects;
@property (readonly, nonatomic) BOOL autoscrolled;
@property (nonatomic) BOOL inGesture;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL rotating;
@property (nonatomic) BOOL scaling;
@property (nonatomic) BOOL inputViewIsChanging;
@property (nonatomic) BOOL baseIsStart;
@property (nonatomic) BOOL commandsWereShowing;
@property (retain, nonatomic) UISelectionGrabber *startGrabber;
@property (retain, nonatomic) UISelectionGrabber *endGrabber;
@property (nonatomic) struct CGPoint { double x; double y; } initialExtentPoint;
@property (nonatomic) BOOL animateUpdate;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } activeTouchPoint;
@property (nonatomic) BOOL willBeginMagnifying;
@property (readonly, nonatomic) BOOL areSelectionRectsVisible;
@property (retain, nonatomic) UITextRangeAdjustmentInteraction *adjustmentInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionClipRect;
- (void)startAnimating;
- (BOOL)shouldHitTestGrabbers;
- (void)stopAnimating;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)updateRectViews;
- (void)updateEdges;
- (void)prepareForMagnification;
- (struct CGPoint { double x0; double x1; })magnifierPoint;
- (void)textRangeAdjustmentInteractionWasCancelled:(id)a0;
- (void)removeFromSuperview;
- (void)willRotate;
- (void)didRotate;
- (struct CGPoint { double x0; double x1; })applyTouchOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateAfterEffectiveModeChange;
- (BOOL)_startIsHorizontal;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)textRangeAdjustmentInteraction:(id)a0 didEndAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setMagnifierOrientation;
- (void)textRangeAdjustmentInteraction:(id)a0 selectionMoved:(struct CGPoint { double x0; double x1; })a1 withTouchPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)animateHighlighterDelayedFadeInOnLayer:(id)a0;
- (BOOL)_gestureRecognizerShouldReceiveTouch:(id)a0;
- (void)willScroll;
- (void)_updateGrabbersVisibility:(BOOL)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForTextRangeAdjustmentInteraction:(id)a0;
- (id)containerCoordinateSpaceForTextRangeAdjustmentInteraction:(id)a0;
- (void)textRangeAdjustmentInteraction:(id)a0 didBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)pointCloserToEnd:(struct CGPoint { double x0; double x1; })a0 startEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 endEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGPoint { double x0; double x1; })convertFromMagnifierPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)inputViewWillChange;
- (void)scaleWillChange;
- (void)didScroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectionView:(id)a1;
- (void)animateHighlighterExpanderAnimation;
- (void)_cancelGrabberTransitionOutAnimations:(id)a0;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateGrabbers;
- (void)cancelDelayedActions;
- (void)inputViewDidChange;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldShowGrabbers;
- (void)beginMagnifying;
- (void)scaleDidChange;
- (void)updateDots;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_edgeHitRectForEdgeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 grabber:(id)a1 precision:(unsigned long long)a2;
- (void)doneMagnifying;
- (void)updateBaseAndExtentPointsFromEdges;
- (void).cxx_destruct;
- (BOOL)_endIsHorizontal;
- (void)clearRangeAnimated:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_startEdgeHitRectWithPrecision:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_endEdgeHitRectWithPrecision:(unsigned long long)a0;
- (void)animateHighlighterExpanderOnLayer:(id)a0 withOffset:(struct CGPoint { double x0; double x1; })a1;

@end
