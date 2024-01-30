@class NSString, _UIVelocityIntegrator, CADisplayLink;
@protocol UISpringLoadedInteractionBehaviorDelegate, UISpringLoadedInteractionContext;

@interface _UISpringLoadedHysteresisBehavior : NSObject <UISpringLoadedInteractionBehavior_Private>

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (weak, nonatomic) id<UISpringLoadedInteractionContext> context;
@property (nonatomic) double beginningVelocityThreshold;
@property (nonatomic) double cancelingVelocityThreshold;
@property (weak, nonatomic) id<UISpringLoadedInteractionBehaviorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_tick:(id)a0;
- (BOOL)shouldAllowInteraction:(id)a0 withContext:(id)a1;
- (void)setupDisplayLink;
- (void)interactionDidFinish:(id)a0;
- (void).cxx_destruct;

@end
