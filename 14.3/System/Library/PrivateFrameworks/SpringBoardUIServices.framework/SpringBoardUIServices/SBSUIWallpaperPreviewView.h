@class SBFWallpaperView, NSString, _SBUIWallpaperInstructionView, UIView, UIViewPropertyAnimator, SBFLockScreenDateView, UIButton, _UILegibilityLabel, UILabel;
@protocol SBSUIWallpaperPreviewViewDelegate;

@interface SBSUIWallpaperPreviewView : UIView <SBFIrisWallpaperViewDelegate> {
    UIViewPropertyAnimator *_cropInstructionsAnimator;
    UIViewPropertyAnimator *_effectInstructionsAnimator;
    UIViewPropertyAnimator *_fadeOutInstructionsAnimator;
    _UILegibilityLabel *_irisInstructionsLabel1;
    _UILegibilityLabel *_irisInstructionsLabel2;
    UILabel *_effectStateLabel;
    _SBUIWallpaperInstructionView *_cropInstructionView;
    UIView *_gradientView;
    BOOL _irisPossible;
    BOOL _parallaxPossible;
}

@property (weak, nonatomic) id<SBSUIWallpaperPreviewViewDelegate> delegate;
@property (retain, nonatomic) SBFLockScreenDateView *dateView;
@property (readonly, nonatomic) SBFWallpaperView *wallpaperView;
@property (retain, nonatomic) UIButton *irisButton;
@property (retain, nonatomic) UIButton *parallaxButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *setButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wallpaperView:(id)a1 disableParallax:(BOOL)a2;
- (void)setWallpaperView:(id)a0;
- (void)displayInstructionsForEffect:(unsigned long long)a0 enabled:(BOOL)a1 animated:(BOOL)a2;
- (id)_makeButtonWithVisualEffectBlur;
- (void)_userDidTapOnIrisButton:(id)a0;
- (void)_userDidTapOnParallaxButton:(id)a0;
- (void)_userDidTapOnCancelButton:(id)a0;
- (void)_userDidTapOnSetButton:(id)a0;
- (void)_fadeOutInstructionsWithDelay:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_layoutGradientView;
- (void)_layoutStackedButtons;
- (void)_layoutIrisButton;
- (void)_layoutParallaxButton;
- (void)_layoutCancelButton;
- (void)_layoutSetButton;
- (void)_layoutWallpaperView;
- (void)_layoutIrisInstructionLabels;
- (BOOL)shouldEnableParallax;
- (double)_segmentedControlInset;
- (void)irisWallpaperViewPlaybackStateDidChange:(id)a0;
- (void)layoutSubviews;
- (void)_layoutDateView;
- (void)updateForChangedSettings:(id)a0;

@end
