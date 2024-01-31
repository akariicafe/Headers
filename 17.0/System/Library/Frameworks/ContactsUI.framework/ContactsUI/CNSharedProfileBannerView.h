@class UIStackView, CNSharedProfileAnimationGenerator, NSArray, CNAvatarView, NSString, UIButton, CNSharedProfileStateOracle, UILabel, CNSharedProfileBannerStyle;
@protocol CNSharedProfileBannerViewDelegate;

@interface CNSharedProfileBannerView : UIView <CNUILikenessCachingRendererDelegate>

@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (retain, nonatomic) CNSharedProfileAnimationGenerator *animationGenerator;
@property (nonatomic) unsigned long long tappedAction;
@property (nonatomic) BOOL shouldPerformActionUponCacheInvalidation;
@property (weak, nonatomic) id<CNSharedProfileBannerViewDelegate> delegate;
@property (readonly, nonatomic) double estimatedHeight;
@property (retain, nonatomic) CNSharedProfileBannerStyle *style;
@property (nonatomic) BOOL isIgnored;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)avatarCacheDidUpdateForIdentifiers:(id)a0;
- (BOOL)isRTL;
- (id)init;
- (id)horizontalConstraints;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)hasTappedAction;
- (void)setUpAvatarView;
- (id)titleForAction:(unsigned long long)a0;
- (BOOL)isRevertAction:(unsigned long long)a0;
- (id)actionButtonTitleForAction:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })avatarSize;
- (id)contactDisplayName;
- (void)didTapActionButton;
- (void)didTapDismiss;
- (double)estimatedHorizontalHeight;
- (double)estimatedVerticalHeight;
- (void)invalidateAvatarCacheEntriesForContact:(id)a0;
- (void)performAnimationIfNeeded;
- (void)setUpActionButton;
- (void)setUpDismissButton;
- (void)setUpLabels;
- (void)setUpViews;
- (void)setUpWithSharedProfileStateOracle:(id)a0 tappedAction:(unsigned long long)a1 hasPerformedAnimation:(BOOL)a2;
- (void)startObservingAvatarCacheInvalidation;
- (id)subtitleForAction:(unsigned long long)a0 contactName:(id)a1;
- (id)subtitleForTappedAction:(unsigned long long)a0;
- (id)subtitleTextColorForTappedAction:(unsigned long long)a0;
- (void)updateContactForTappedAction;
- (void)updateUIForCurrentState;
- (id)verticalConstraintsWithAvatarView;
- (id)verticalConstraintsWithHiddenAvatarView;
- (id)xmarkImageWithColorConfiguration:(id)a0;

@end
