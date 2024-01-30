@class AKPageController, NSString, AKMainEventHandler, UIScrollView, UIPointerInteraction;

@interface AKOverlayView : UIView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIPointerInteractionDelegate>

@property (weak) AKPageController *pageController;
@property (weak) AKMainEventHandler *mainEventHandler;
@property BOOL isObserving;
@property BOOL deferWasMovedToSuperviewUntilMoveToWindow;
@property (retain) UIScrollView *observedScrollView;
@property BOOL scrollViewIsInLiveMagnify;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)paste:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)cut:(id)a0;
- (void)copy:(id)a0;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)didMoveToSuperview;
- (id)keyCommands;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithPageController:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)delete:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)didMoveToWindow;
- (id)annotationController;
- (void)_scrollViewDidEndDecelerating:(id)a0;
- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_scrollViewDidEndDragging:(id)a0;
- (BOOL)_scribbleInteractionIsEnabled:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_scribbleInteraction:(id)a0 hitToleranceInsetsForElement:(id)a1 defaultInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)_setupObservation;
- (void)duplicate:(id)a0;
- (void)updateLayers;
- (void)editTextAnnotation:(id)a0;
- (void)_teardownObservation;
- (void)_willRemoveFromOldSuperview;
- (void)_wasMovedToNewSuperview;
- (void)_updateLayersUsingScrollView;
- (void)_postScrollViewRectChangedNotification;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)a0;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)a0 dismissSelectionMenu:(BOOL)a1;
- (void)_willStartLiveMagnify:(id)a0;
- (void)_willEndLiveMagnify:(id)a0;
- (void)_scrollViewDidEndAnimation:(id)a0;
- (void)_scrollViewDidScrollToTop:(id)a0;
- (void)_postScrollViewScrollOrMagnifyEndNotification;
- (BOOL)_isEditingTextBoxAnnotation;

@end
