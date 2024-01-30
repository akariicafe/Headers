@class NSString, NSArray, UIImageView, UIButton, SFAutomaticPasswordScrollViewContentView, UILayoutGuide, NSLayoutConstraint, UILabel, UIScrollView;

@interface SFAutomaticPasswordExplanationView : UIView <_UIScrollViewLayoutObserver, SFAutomaticPasswordScrollViewContentViewLayoutObserver, UIScrollViewDelegate> {
    BOOL _isPad;
    long long _keyboardType;
    UIScrollView *_scrollView;
    SFAutomaticPasswordScrollViewContentView *_scrollableContentView;
    UIImageView *_shadowImageView;
    NSLayoutConstraint *_strongPasswordButtonWidthConstraint;
    NSLayoutConstraint *_strongPasswordButtonHeightConstraint;
    NSLayoutConstraint *_useCustomPasswordButtonWidthConstraint;
    NSLayoutConstraint *_useCustomPasswordBaselineToBottomConstraint;
    NSArray *_wideShadowImageViewConstraints;
    NSArray *_narrowShadowImageViewConstraints;
    UILayoutGuide *_contentLayoutGuide;
    NSLayoutConstraint *_contentLayoutGuideBottomConstraint;
    UILayoutGuide *_scrollableContentCenterLayoutGuide;
    BOOL _requiresWideAppearance;
    double _wideContentMaximumPadding;
    NSLayoutConstraint *_wideContentLeadingConstraint;
    NSLayoutConstraint *_wideContentTrailingConstraint;
    NSLayoutConstraint *_narrowContentLeadingConstraint;
    NSLayoutConstraint *_narrowContentTrailingConstraint;
    NSLayoutConstraint *_iPadWidthConstraint;
    BOOL _scrollViewNeedsShadowCachedValue;
}

@property (readonly, nonatomic) UILabel *explanationLabel;
@property (readonly, nonatomic) UILabel *passwordRetrievalExpalantionLabel;
@property (readonly, nonatomic) UIButton *useStrongPasswordButton;
@property (readonly, nonatomic) UIButton *useOtherPasswordButton;
@property (nonatomic) long long keyboardAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)safeAreaInsetsDidChange;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithKeyboardType:(long long)a0;
- (void).cxx_destruct;
- (void)_scrollViewDidLayoutSubviews:(id)a0;
- (void)_createSubviews;
- (void)_createLayoutConstraints;
- (BOOL)_scrollViewNeedsShadow:(BOOL)a0;
- (void)_updateContentLayoutGuideBottomConstraint;
- (void)_updateMaximumPadding;
- (void)_updateShadowViewAlpha;
- (void)_updateStrongPasswordHeightConstraint;
- (void)_updateUseCustomPasswordBaselineToBottomConstraint;
- (void)_updateWideAppearanceRequirement;
- (void)automaticPasswordScrollContentViewDidLayout:(id)a0;

@end
