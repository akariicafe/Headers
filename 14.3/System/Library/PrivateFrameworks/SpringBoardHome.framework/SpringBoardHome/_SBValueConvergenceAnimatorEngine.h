@class NSMutableSet, CADisplayLink;

@interface _SBValueConvergenceAnimatorEngine : NSObject {
    NSMutableSet *_animators;
    CADisplayLink *_displayLink;
    NSMutableSet *_finishedAnimators;
}

+ (id)sharedEngine;

- (void)_onDisplayLink:(id)a0;
- (void)updateAnimator:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateDisplayLink;
- (void)_tearDownDisplayLink;
- (void)stopAnimator:(id)a0;
- (void)startAnimator:(id)a0;
- (void)_ensureDisplayLink;
- (BOOL)isRunningAnimator:(id)a0;

@end
