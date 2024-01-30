@class NSObject, NSString, CAEmitterLayer;
@protocol OS_dispatch_group, CKSendAnimationManager;

@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKPopRendererViewDelegate, CKImpactEffectAnimationProvider>

@property (retain, nonatomic) CAEmitterLayer *dustEmitter;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *throwAnimationGroup;
@property (copy, nonatomic) id /* block */ popAnimationCompletionBlock;
@property (weak, nonatomic) id<CKSendAnimationManager> animationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)_beginFocusAnimationWithContext:(id)a0;
- (void)_beginGentleAnimationWithContext:(id)a0;
- (void)_beginImpactAnimationWithContext:(id)a0;
- (void)_beginLoudAnimationsWithContext:(id)a0;
- (void)_beginPopAnimationWithContext:(id)a0;
- (void)_beginThrowAnimationWithContext:(id)a0;
- (void)_configureForVFD:(id)a0;
- (double)_throwAnimationDurationScaleFactorForThrownBalloonAttributes:(id)a0 finalBalloonFrames:(id)a1;
- (void)beginAnimationWithSendAnimationContext:(id)a0;
- (void)popRendererViewDidBegin:(id)a0;
- (void)popRendererViewDidFinish:(id)a0;
- (void)popRendererViewPlaySound:(id)a0;
- (void)stopAnimationWithSendAnimationContext:(id)a0;

@end
