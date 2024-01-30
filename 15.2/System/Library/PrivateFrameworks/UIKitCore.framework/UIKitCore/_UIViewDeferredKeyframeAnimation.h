@class NSMutableArray;

@interface _UIViewDeferredKeyframeAnimation : _UIViewDeferredAnimation {
    NSMutableArray *_animationFrames;
}

- (void)_finalize;
- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (id)_animationFrames;
- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)addAnimationFrameForValue:(id)a0;

@end
