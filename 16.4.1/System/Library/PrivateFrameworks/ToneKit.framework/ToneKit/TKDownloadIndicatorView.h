@class CAMediaTimingFunction, NSMutableArray, CADisplayLink;

@interface TKDownloadIndicatorView : UIView {
    float _initialAnimatedProgress;
    float _currentAnimatedProgress;
    double _progressAnimationEndTime;
    double _progressAnimationStartTime;
    BOOL _isAnimatingProgress;
    CADisplayLink *_displayLink;
    NSMutableArray *_progressAnimationCompletionHandlers;
    CAMediaTimingFunction *_progressAnimationTimingFunction;
}

@property (nonatomic) float progress;

+ (struct CGSize { double x0; double x1; })_intrinsicDownloadIndicatorViewSize;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)setProgress:(float)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleDisplayLinkDidFire:(id)a0;
- (void)_stopProgressAnimation;

@end
