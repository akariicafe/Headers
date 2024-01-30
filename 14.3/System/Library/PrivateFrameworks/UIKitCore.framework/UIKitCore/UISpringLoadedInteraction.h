@class NSString, UISpringLoadedInteractionContextImpl, UIDelayedAction, UIView;
@protocol UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect;

@interface UISpringLoadedInteraction : NSObject <UISpringLoadedInteractionBehaviorDelegate, UIInteraction_Internal, UIDragGestureRecognizerDelegate, UIInteraction>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UISpringLoadedInteractionContextImpl *context;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIDelayedAction *emphasizeAction;
@property (retain, nonatomic) UIDelayedAction *activateAction;
@property (nonatomic, setter=_setPossibleStateDuration:) double _possibleStateDuration;
@property (readonly, nonatomic) id<UISpringLoadedInteractionBehavior> interactionBehavior;
@property (readonly, nonatomic) id<UISpringLoadedInteractionEffect> interactionEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)springLoadedInteractionWithHandler:(id /* block */)a0;
+ (id)_blinkEffect;
+ (id)hysteresisBehaviorWithBeginningVelocity:(double)a0 cancelingVelocity:(double)a1;
+ (id)_defaultInteractionBehavior;

- (void)willMoveToView:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)_emphasizeSpringLoading:(id)a0;
- (void)_resetBehavior;
- (void)_activateSpringLoading:(id)a0;
- (void).cxx_destruct;
- (void)_reloadSpringLoadedInteractionBehavior;
- (void)_cancelActions;
- (void)_startActivateAction;
- (void)_startEmphasizeAction;
- (void)_springloadedStateChanged:(id)a0;
- (id)_dynamicGestureRecognizersForEvent:(id)a0;
- (id)initWithActivationHandler:(id /* block */)a0;
- (void)setState:(long long)a0;
- (BOOL)_shouldAllowInteractionWithContext:(id)a0;
- (id)initWithInteractionBehavior:(id)a0 interactionEffect:(id)a1 activationHandler:(id /* block */)a2;

@end
