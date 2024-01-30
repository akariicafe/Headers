@class NSMutableArray;

@interface _UIViewDeferredKeyframeAnimation : _UIViewDeferredAnimation {
    NSMutableArray *_animationFrames;
}

- (void)_finalize;
- (BOOL)isEmpty;
- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;
- (id)_animationFrames;
- (void)addAnimationFrameForValue:(id)a0;
- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (void).cxx_destruct;

@end
