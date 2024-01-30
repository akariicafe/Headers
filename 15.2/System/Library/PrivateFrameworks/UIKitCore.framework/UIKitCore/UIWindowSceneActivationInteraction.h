@class _UIWindowSceneActivationEffect, UIWindowSceneActivationConfiguration, UIPinchGestureRecognizer, _UIWindowSceneActivationAnimator, UIView, NSString;

@interface UIWindowSceneActivationInteraction : NSObject <UIInteraction_Internal, UIGestureRecognizerDelegate, _UIWindowSceneActivator_Internal, UIInteraction>

@property (copy, nonatomic) id /* block */ configurationProvider;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) UIWindowSceneActivationConfiguration *activeConfiguration;
@property (retain, nonatomic) _UIWindowSceneActivationEffect *activeEffect;
@property (retain, nonatomic) _UIWindowSceneActivationAnimator *animator;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGR;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_cancelInteraction;
- (void)_prepareSceneActivationConfiguration:(id)a0;
- (void)_handlePinchGesture:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (id)initWithConfigurationProvider:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)_shouldActivateForEndingPinch:(id)a0;
- (void)_prewarmAnimation;
- (void)_animateExpansionWithVelocity:(double)a0;
- (BOOL)_canAnimateSceneActivationWithConfiguration:(id)a0;
- (void)_requestSceneActivationWithConfiguration:(id)a0 animated:(BOOL)a1 sender:(id)a2 errorHandler:(id /* block */)a3;
- (BOOL)_supportsAssociation;
- (id)_targetedPreviewForContinuingEffectWithPreview:(id)a0;

@end
