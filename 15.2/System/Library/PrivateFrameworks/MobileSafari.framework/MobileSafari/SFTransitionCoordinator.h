@class NSString, NSMutableArray;
@protocol SFTransitionCoordinating;

@interface SFTransitionCoordinator : NSObject <SFTransitionCoordinating, SFTransitionContext> {
    NSMutableArray *_animations;
    NSMutableArray *_completionBlocks;
    long long _keyframeAnimationMode;
}

@property (readonly, nonatomic) id<SFTransitionCoordinating> publicCoordinator;
@property (readonly, nonatomic) BOOL requiresKeyframeAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isTransition;
@property (readonly, nonatomic) BOOL usesKeyframeAnimations;

- (void)addAnimations:(id /* block */)a0;
- (void)addCompletion:(id /* block */)a0;
- (void)addKeyframeWithRelativeStartTime:(double)a0 relativeDuration:(double)a1 animations:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performTransitionWithAnimation:(BOOL)a0 inContextOfContainerView:(id)a1;
- (void)disableKeyframeAnimations;
- (void)invokeAnimations;
- (void)invokeCompletion;

@end
