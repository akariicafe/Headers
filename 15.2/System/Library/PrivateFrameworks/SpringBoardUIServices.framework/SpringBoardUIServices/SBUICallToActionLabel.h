@class CAGradientLayer, NSString, NSTimer, SBUILegibilityLabel, NSMutableArray, _UILegibilitySettings;

@interface SBUICallToActionLabel : UIView <CAAnimationDelegate> {
    BOOL _disablesGradientFadeInAnimation;
}

@property (retain, nonatomic) SBUILegibilityLabel *label;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (retain, nonatomic) NSMutableArray *animationCompletionBlocks;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStart:(id)a0;
- (void)_createGradientLayer;
- (void)layoutSubviews;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)fadeOutWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)_preferredTextSizeChanged:(id)a0;
- (void)didMoveToSuperview;
- (id)_callToActionFont;
- (void)fadeIn;
- (void)_addAnimationCompletionBlockIfNecessary:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setText:(id)a0 forLanguage:(id)a1 animated:(BOOL)a2;
- (double)baselineOffset;
- (void)_resetGradientAndLabelBefore:(BOOL)a0;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_executePostAnimationCompletionBlocks;
- (void)fadeInImmediately:(BOOL)a0 completion:(id /* block */)a1;
- (void)_actuallyRunGradientAnimation;
- (void).cxx_destruct;
- (void)fadeInImmediately:(BOOL)a0;
- (void)_timerTriggered;
- (void)_runFadeAnimationForFadingOut:(BOOL)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)_updateLabelTextWithLanguage:(id)a0;
- (void)_createLabel;
- (void)cancelFadeInTimerIfNecessary;
- (void)_runGradientAnimation:(BOOL)a0;
- (void)_invalidateGradientAnimationTimer;
- (id)_fontWithTextStyle:(id)a0 symbolicTraits:(unsigned int)a1 withMaximumFontSizeCategory:(id)a2;
- (void)sizeToFit;
- (void)fadeOut;

@end
