@class NSString;

@interface BKUIPearlEnrollAnimationManager : NSObject <CAAnimationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)gaussianBlurWithRadius:(double)a0;
- (id)gaussianBlurWithRadius:(double)a0 normalizeEdges:(BOOL)a1 hardEdges:(BOOL)a2 quality:(id)a3 intermediateBitDepth:(id)a4;
- (void)runBasicAnimationOnLayer:(id)a0 withDuration:(double)a1 keyPath:(id)a2 fromValue:(id)a3 toValue:(id)a4 removedOnCompletion:(BOOL)a5 timingFunction:(id)a6 completion:(id /* block */)a7;
- (void)transitionTo:(id)a0 completion:(id /* block */)a1;

@end
