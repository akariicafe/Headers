@class NSMutableDictionary, CADisplayLink;

@interface HKPropertyAnimationApplier : NSObject {
    NSMutableDictionary *_animations;
    CADisplayLink *_displayLink;
}

- (void)_displayLinkFired:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applyAnimation:(id)a0;
- (void)cancelAnimationsForProperty:(id)a0;
- (void)_startDisplayLinkIfNecessary;
- (void)_stopDisplayLinkIfNecessary;
- (void)_applyAnimations;
- (void)_cleanupCompletedAnimations;

@end
