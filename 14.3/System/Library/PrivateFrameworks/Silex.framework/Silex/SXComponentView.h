@class SXColumnLayout, SXViewport, SXUnitConverter, NSString, UIView, SXFillView;
@protocol SXComponentStyle, SXDOMObjectProviding, SXComponentState, SXComponentLayout, SXComponentStyleRenderer, SXComponentHosting, SXComponentStyleRendererFactory, SXComponent, SXPresentationDelegate;

@interface SXComponentView : UIView <UIGestureRecognizerDelegate, SXTextCanvasRenderSource, SXAXAssistiveTechStatusChangeListener, SXTransitionableComponentView, SXComponentInteractable>

@property (readonly, nonatomic) id<SXComponentStyleRendererFactory> componentStyleRendererFactory;
@property (readonly, nonatomic) id<SXComponentStyleRenderer> componentStyleRenderer;
@property (retain, nonatomic) id<SXComponentStyle> componentStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (nonatomic) BOOL allowViewHierarchyRemoval;
@property (nonatomic) BOOL requiresThoroughFrameCalculations;
@property (nonatomic) BOOL hasAnimation;
@property (nonatomic) BOOL hasBehaviors;
@property (nonatomic) BOOL hasRenderedComponentStyle;
@property (retain, nonatomic) id<SXComponentState> state;
@property (weak, nonatomic) id<SXComponentHosting> componentHost;
@property (nonatomic) unsigned long long componentIndex;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } componentLayoutMargins;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } absoluteFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundViewFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderInsets;
@property (retain, nonatomic) SXColumnLayout *documentColumnLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationFrame;
@property (nonatomic) struct { BOOL size; BOOL position; BOOL state; } presentationChanges;
@property (readonly, nonatomic) id<SXComponent> component;
@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, weak, nonatomic) id<SXPresentationDelegate> presentationDelegate;
@property (readonly, nonatomic) id<SXComponentLayout> componentLayout;
@property (nonatomic) long long visibilityState;
@property (nonatomic) long long presentationState;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) SXFillView *fillView;
@property (readonly, nonatomic) BOOL hasRenderedContents;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } interactionFrame;
@property (readonly, nonatomic) BOOL isDraggable;
@property (nonatomic) BOOL animationsAndBehaviorsEnabled;
@property (readonly, nonatomic) SXUnitConverter *unitConverter;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) UIView *highlightView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *transitionContainerView;
@property (readonly, nonatomic) UIView *transitionContentView;
@property (readonly, nonatomic) BOOL transitionViewIsVisible;
@property (readonly, nonatomic) BOOL transitionViewShouldFadeInContent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitionVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitionContainerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitionContentFrame;
@property (readonly, nonatomic) BOOL isTransitionable;

- (void)configure;
- (void)assistiveTechnologyStatusDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)animationDidStart:(id)a0;
- (id)classification;
- (void)provideInfosLayoutTo:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didReceiveMemoryWarning;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3;
- (void)renderContentsIfNeeded;
- (void)receivedInfo:(id)a0 fromLayoutingPhaseWithIdentifier:(id)a1;
- (void)visibilityStateDidChangeFromState:(long long)a0;
- (void)loadComponent:(id)a0;
- (BOOL)gestureShouldBegin:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalFrameForContentView:(id)a0 behavior:(id)a1;
- (BOOL)allowHierarchyRemoval;
- (void)invalidateComponentStyle;
- (void)setupComponentStyleRendererForStyle:(id)a0;
- (void)prepareComponentStyleRendererForStyle:(id)a0;
- (void)renderComponentStyle;
- (void)updateAllowHierarchyRemovalWithComponent:(id)a0 componentStyle:(id)a1;
- (void)prepareForTransitionType:(unsigned long long)a0;
- (BOOL)usesThumbnailWithImageIdentifier:(id)a0;
- (BOOL)userInteractable;
- (void)willPresentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (id)contentViewForBehavior:(id)a0;
- (void)restoreBehavior;
- (void)animationDidFinish:(id)a0;
- (void)didApplyBehavior:(id)a0;

@end
