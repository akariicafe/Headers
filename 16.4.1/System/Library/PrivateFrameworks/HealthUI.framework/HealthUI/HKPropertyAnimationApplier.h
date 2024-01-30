@class NSMutableDictionary, CADisplayLink;

@interface HKPropertyAnimationApplier : NSObject {
    NSMutableDictionary *_animations;
    CADisplayLink *_displayLink;
}

- (void)_displayLinkFired:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)applyAnimation:(id)a0;
- (void)_applyAnimations;
- (void)_cleanupCompletedAnimations;
- (void)_startDisplayLinkIfNecessary;
- (void)_stopDisplayLinkIfNecessary;
- (void)cancelAnimationsForProperty:(id)a0;

@end
