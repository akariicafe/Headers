@class CPUIBannerViewButton, UIStackView, UIImageView, CPSAbridgableLabel;

@interface CPSGuidanceBannerView : CPSBannerView

@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) CPUIBannerViewButton *actionButton;
@property (retain, nonatomic) UIImageView *applicationIconImageView;
@property (retain, nonatomic) UIImageView *guidanceImageView;
@property (retain, nonatomic) CPSAbridgableLabel *guidanceTextLabel;
@property (retain, nonatomic) CPSAbridgableLabel *guidanceDetailTextLabel;
@property (nonatomic) long long currentInterfaceStyle;

- (void).cxx_destruct;
- (void)_updateLabels;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithBannerItem:(id)a0;
- (void)_setGuidanceImageViewForImageSet:(id)a0;
- (void)_updateBannerSelectedState;
- (void)updateBannerWithBannerItem:(id)a0;

@end
