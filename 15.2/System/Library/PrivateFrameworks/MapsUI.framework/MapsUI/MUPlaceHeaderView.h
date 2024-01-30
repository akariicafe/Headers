@class MKTransitInfoLabelView, NSString, MUImageView, UILabel, NSLayoutConstraint, UIButton;
@protocol MUPlaceHeaderViewModel, MUPlaceHeaderViewDelegate;

@interface MUPlaceHeaderView : UIView <MKActivityObserving> {
    MUImageView *_heroImageView;
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
    UIButton *_containmentLabel;
    UILabel *_verifiedLabel;
    MKTransitInfoLabelView *_transitInfoLabelView;
    id /* block */ _trailingConstraintProvider;
    NSLayoutConstraint *_titleTrailingConstraint;
    NSLayoutConstraint *_secondaryTitleTrailingConstraint;
}

@property (retain, nonatomic) id<MUPlaceHeaderViewModel> viewModel;
@property (weak, nonatomic) id<MUPlaceHeaderViewDelegate> delegate;
@property (nonatomic) BOOL suppressContainmentTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minimalModeHeight;

- (void)_contentSizeDidChange;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)_setupSubviews;
- (void)hideTitle:(BOOL)a0;
- (double)_trailingPadding;
- (void)_tappedEnclosingPlace;
- (id)_verifiedAttributedString;
- (void)_updateContainmentLineWithAttributedString;
- (id)initWithViewModel:(id)a0 trailingConstraintProvider:(id /* block */)a1;
- (void)reloadTrailingConstraint;

@end
