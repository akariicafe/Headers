@class _UIViewAnimationFrame;

@interface _UIViewDeferredBasicAnimation : _UIViewDeferredAnimation {
    _UIViewAnimationFrame *_finalValue;
}

- (BOOL)isEmpty;
- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;
- (id)_animationFrames;
- (void)addAnimationFrameForValue:(id)a0;
- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (void).cxx_destruct;

@end
