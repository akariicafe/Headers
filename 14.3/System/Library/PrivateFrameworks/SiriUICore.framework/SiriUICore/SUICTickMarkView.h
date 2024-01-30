@class NSTimer, NSLock, CADisplayLink;

@interface SUICTickMarkView : UIView {
    CADisplayLink *_displayLink;
    BOOL _shown;
    long long _currentPreferredFrameRate;
    long long _currentFrame;
    int _animState;
    NSTimer *_safetyTimer;
    BOOL _completionCalled;
    id /* block */ _completionBlock;
    NSLock *_completionLock;
    long long _fadeInFrames;
    long long _pauseFrames;
    long long _fadeOutFrames;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpDisplayLink;
- (struct CGImage { } *)imageMask:(BOOL)a0;
- (void)handleSafetyTimer:(id)a0;
- (void)tearDownDisplayLink;
- (void)startAnimationsForTickMark:(BOOL)a0 fadeInFrames:(long long)a1 pauseFrames:(long long)a2 fadeOutFrames:(long long)a3 completion:(id /* block */)a4;

@end
