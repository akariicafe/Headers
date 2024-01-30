@class _UIClickInteraction, NSString, NCClickInteractionPresentedControl, UIView, NCTouchEaterGestureRecognizer, MTMaterialView;
@protocol NCClickInteractionPresenterDelegate;

@interface NCClickInteractionPresenter : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDelegate>

@property (readonly, nonatomic, getter=_clickInteraction) _UIClickInteraction *clickInteraction;
@property (readonly, nonatomic, getter=_containerView) UIView *containerView;
@property (readonly, nonatomic, getter=_portalView) UIView *portalView;
@property (readonly, weak, nonatomic, getter=_touchEater) NCTouchEaterGestureRecognizer *touchEater;
@property (readonly, nonatomic, getter=_presentedControl) NCClickInteractionPresentedControl *presentedControl;
@property (readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView;
@property (nonatomic, getter=_isHinting, setter=_setHinting:) BOOL hinting;
@property (nonatomic, getter=isPresented, setter=_setPresented:) BOOL presented;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, weak, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceViewVisibleRect;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) long long materialRecipe;
@property (weak, nonatomic) id<NCClickInteractionPresenterDelegate> delegate;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_tearDown;
- (void)contentSizeCategoryDidChange;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)_performPresentation;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_performCancel;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)_handleEatenTouch:(id)a0;
- (void)clickInteractionDidClickUp:(id)a0;
- (BOOL)clickInteractionShouldBegin:(id)a0;
- (void)clickInteractionDidEnd:(id)a0;
- (id)highlightEffectForClickInteraction:(id)a0;
- (void)_setUpSubviews;
- (BOOL)dismissModalFullScreenIfNeeded;
- (id)initWithTitle:(id)a0 sourceView:(id)a1 materialRecipe:(long long)a2;
- (void)presentModalFullScreen;
- (void)_configurePresentedControlIfNecessaryWithTitle:(id)a0;
- (void)_setUpPresentationIfNecessary;
- (void)_configureContainerViewIfNecessary;
- (void)_configurePortalViewIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialPresentedViewFrame;
- (void)_setUpContainerView;
- (void)_setUpPortalView;
- (void)_setUpBackgroundMaterialView;
- (void)_setUpPresentedControl;
- (double)_tensionForTransitionPresentation:(BOOL)a0 cancelled:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_finalPresentedViewFrame;
- (double)_frictionForTransitionPresentation:(BOOL)a0 cancelled:(BOOL)a1;
- (void)_animatePresentation:(BOOL)a0 cancelled:(BOOL)a1 completion:(id /* block */)a2;

@end
