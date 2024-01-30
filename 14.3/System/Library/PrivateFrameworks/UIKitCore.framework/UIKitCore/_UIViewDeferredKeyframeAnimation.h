@class NSMutableArray;

@interface _UIViewDeferredKeyframeAnimation : _UIViewDeferredAnimation {
    NSMutableArray *_animationFrames;
}

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)_finalize;
- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (void)addAnimationFrameForValue:(id)a0;
- (id)_animationFrames;
- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;

@end
