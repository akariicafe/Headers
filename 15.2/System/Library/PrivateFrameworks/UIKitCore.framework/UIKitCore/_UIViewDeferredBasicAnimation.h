@class _UIViewAnimationFrame;

@interface _UIViewDeferredBasicAnimation : _UIViewDeferredAnimation {
    _UIViewAnimationFrame *_finalValue;
}

- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (id)_animationFrames;
- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)addAnimationFrameForValue:(id)a0;

@end
