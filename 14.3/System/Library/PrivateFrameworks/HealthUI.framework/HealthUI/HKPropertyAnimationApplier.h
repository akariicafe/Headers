@class NSMutableDictionary, CADisplayLink;

@interface HKPropertyAnimationApplier : NSObject {
    NSMutableDictionary *_animations;
    CADisplayLink *_displayLink;
}

- (id)init;
- (void).cxx_destruct;
- (void)_displayLinkFired:(id)a0;
- (void)_startDisplayLinkIfNecessary;
- (void)_stopDisplayLinkIfNecessary;
- (void)_applyAnimations;
- (void)_cleanupCompletedAnimations;
- (void)applyAnimation:(id)a0;
- (void)cancelAnimationsForProperty:(id)a0;

@end
