@class NSString, HUAnimationApplier, UIInteractionProgress, HUAnimationSettings;

@interface HUInteractionProgressApplier : HUApplier <UIInteractionProgressObserver>

@property (nonatomic) double animationFromProgress;
@property (nonatomic) double animationToProgress;
@property (retain, nonatomic) HUAnimationApplier *inFlightAnimation;
@property (nonatomic) double previousInteractionProgress;
@property (nonatomic) BOOL waitingOnAnimationToComplete;
@property (readonly, nonatomic) UIInteractionProgress *interactionProgress;
@property (retain, nonatomic) HUAnimationSettings *significantProgressChangeAnimationSettings;
@property (retain, nonatomic) HUAnimationSettings *transitionAnimationSettings;
@property (nonatomic) BOOL boundProgressValues;
@property (nonatomic) BOOL completesAtTargetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applierWithInteractionProgress:(id)a0;
+ (id)applyInteractionProgress:(id)a0 withApplier:(id /* block */)a1 completion:(id /* block */)a2;

- (BOOL)cancel;
- (void)interactionProgress:(id)a0 didEnd:(BOOL)a1;
- (id)init;
- (BOOL)isInteractive;
- (void).cxx_destruct;
- (BOOL)complete:(BOOL)a0;
- (void)interactionProgressDidUpdate:(id)a0;
- (id)initWithInteractionProgress:(id)a0;
- (BOOL)start;
- (double)_currentInteractionProgress;
- (void)_updateCurrentProgress;
- (void)_completeSuccessfullyIfAnimationsComplete;
- (BOOL)_interactionProgressChangedSignificantly;

@end
