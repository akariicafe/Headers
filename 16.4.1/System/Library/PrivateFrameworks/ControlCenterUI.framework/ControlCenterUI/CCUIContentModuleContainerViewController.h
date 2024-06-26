@class CCUIContentModuleContainerPresentationController, NSString, UITapGestureRecognizer, UIView, _UIClickPresentationInteraction, NSArray, CCUIContentModuleBackgroundView, UIViewController, CCUIContentModuleContentContainerView;
@protocol CCUIContentModule, CCUIContentModuleContainerViewControllerDelegate, CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUIContentModuleContainerViewController : UIViewController <_UIClickPresentationInteractionDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContainer, CCUISafeAppearancePropagationProvider, UIPointerInteractionDelegate>

@property (copy, nonatomic) NSString *moduleIdentifier;
@property (retain, nonatomic) id<CCUIContentModule> contentModule;
@property (retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (retain, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (retain, nonatomic) CCUIContentModuleContainerPresentationController *presentationController;
@property (nonatomic) BOOL contentModuleProvidesOwnPlatter;
@property (retain, nonatomic) UIView *highlightWrapperView;
@property (retain, nonatomic) CCUIContentModuleBackgroundView *backgroundView;
@property (retain, nonatomic) CCUIContentModuleContentContainerView *contentContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) _UIClickPresentationInteraction *clickPresentationInteraction;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (retain, nonatomic) UITapGestureRecognizer *expandModuleOnTouchTapRecognizer;
@property (nonatomic, getter=isAuthenticatedForExpandedModulePresentation) BOOL authenticatedForExpandedModulePresentation;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expandedContentEdgeInsets;
@property (readonly, nonatomic) CCUIContentModuleContentContainerView *moduleContentView;
@property (weak, nonatomic) id<CCUIContentModuleContainerViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *materialGroupName;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *childViewControllersForAppearancePropagation;

- (void)willBecomeActive;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)_handleTapGestureRecognizer:(id)a0;
- (void)willResignActive;
- (BOOL)clickPresentationInteractionShouldPresent:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)ccui_shouldPropagateAppearanceCalls;
- (void)expandModule;
- (void)_closeExpandedModule:(BOOL)a0;
- (void)dismissPresentedContentAnimated:(BOOL)a0;
- (BOOL)definesContentModuleContainer;
- (void)transitionToExpandedMode:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentFrameForRestState;
- (void)_findTopLevelGestureRecognizersForView:(id)a0 installOnView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentationFrameForExpandedState;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentBoundsForExpandedState;
- (void)dismissExpandedModuleAnimated:(BOOL)a0;
- (void)willPresentViewController:(id)a0;
- (double)_continuousCornerRadiusForExpandedState;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrameForExpandedState;
- (void)_configureMaskViewIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentFrameForExpandedState;
- (BOOL)_canShowWhileLocked;
- (void)_handleExpandModuleForTapGestureRecognizer:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (double)_continuousCornerRadiusForCompactState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerFrameForExpandedState;
- (id)clickPresentationInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_isForceTouchAvailable;
- (void)_configureForContentModuleGroupRenderingIfNecessary;
- (void)clickPresentationInteractionEnded:(id)a0 wasCancelled:(BOOL)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrameForRestState;
- (void)willDismissViewController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentBoundsForTransitionProgress:(double)a0;
- (void)_loadBackgroundViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)clickPresentationInteractionShouldBegin:(id)a0;
- (void)dismissModulePresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_setDidExpandModulePreference;
- (void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)a0 toBlockingGestureRecognizers:(id)a1;
- (id)init;
- (void)_loadContentViewController:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)clickPresentationInteraction:(id)a0 presentationForPresentingViewController:(id)a1;
- (void)displayWillTurnOff;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (void)viewWillLayoutSubviews;
- (void)_didEndTransitionWithContentModuleContainerTransition:(id)a0 completed:(BOOL)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithModuleIdentifier:(id)a0 contentModule:(id)a1 presentationContext:(id)a2;

@end
