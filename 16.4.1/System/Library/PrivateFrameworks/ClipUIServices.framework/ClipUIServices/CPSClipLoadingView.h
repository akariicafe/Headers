@class UIView, NSString, UIImage, CABackdropLayer, UIImageView, CPSButton, CPSVibrantLabel, CAGradientLayer, UILabel;

@interface CPSClipLoadingView : UIView {
    UIView *_backdropView;
    CABackdropLayer *_backdropLayer;
    UIView *_clipNameBackdropView;
    UIView *_clipNameContainerView;
    UILabel *_clipNameLabel;
    UIView *_clipNameProgressView;
    UIView *_errorContainerView;
    CPSVibrantLabel *_clipUnavailableLabel;
    CPSButton *_retryButton;
    id /* block */ _reloadHandler;
    id /* block */ _deferredActions;
    UIImageView *_heroImageView;
    UIView *_labelContainerView;
    BOOL _labelsNeedUpdate;
    BOOL _animationHasStarted;
    BOOL _loadingHasFailed;
    long long _progressChangeAnimationCount;
    UILabel *_poweredByLabel;
    CAGradientLayer *_gradientLayer;
    UIView *_gradientView;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) UIImage *backgroundImage;
@property (nonatomic, getter=isPoweredByThirdParty) BOOL poweredByThirdParty;
@property (readonly, nonatomic) float loadingProgress;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)a0 animated:(BOOL)a1;
- (id)_animationForTranslationY:(double)a0;
- (id)_backdropEffectRemovalAnimationForKeyPath:(id)a0;
- (id)_basicAnimationToDecreaseOpacity;
- (BOOL)_loadingIsComplete;
- (void)_reloadTapped:(id)a0;
- (void)_revealBackgroundAndLabels;
- (void)_showCompletionAnimation:(id /* block */)a0;
- (id)_springAnimationToDecreaseOpacity;
- (void)_startAnimationIfNeeded;
- (id)_textScaleUpSpringAnimation;
- (void)_updateConicGradientRotation;
- (void)_updateLoadingProgress;
- (void)finishLoadingWithCompletion:(id /* block */)a0;
- (void)setLoadingHasFailed:(BOOL)a0 animated:(BOOL)a1 reason:(id)a2 reloadHandler:(id /* block */)a3;
- (void)setLoadingProgress:(float)a0 completion:(id /* block */)a1;

@end
