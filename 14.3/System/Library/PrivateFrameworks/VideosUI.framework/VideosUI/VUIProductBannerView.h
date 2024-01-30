@class VUIComingSoonBannerCardView, IKViewElement, NSArray, NSString, VUILabel, VUISeparatorView, VUIProductBannerLayout, VUIFocusableTextView, CAGradientLayer, VUIProductBannerCastInfoView, _TVImageView, VUIMediaTagsView;

@interface VUIProductBannerView : UIView <VUIRentalExpirationLabelDelegate>

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) VUILabel *descComputationLabel;
@property (retain, nonatomic) VUILabel *tagsComputationLabel;
@property (nonatomic) double contentOffset;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIProductBannerLayout *layout;
@property (retain, nonatomic) _TVImageView *logoImageView;
@property (retain, nonatomic) VUILabel *logoTextView;
@property (retain, nonatomic) VUILabel *subTextView;
@property (retain, nonatomic) VUILabel *episodeInfoView;
@property (retain, nonatomic) _TVImageView *logoTextGradientView;
@property (retain, nonatomic) _TVImageView *coverArtImageView;
@property (retain, nonatomic) _TVImageView *decorationImageView;
@property (retain, nonatomic) _TVImageView *decorationImageGradientView;
@property (retain, nonatomic) NSArray *buttonViews;
@property (retain, nonatomic) VUIComingSoonBannerCardView *comingSoonView;
@property (retain, nonatomic) VUIFocusableTextView *descriptionTextView;
@property (retain, nonatomic) VUIProductBannerCastInfoView *castInfoView;
@property (retain, nonatomic) VUIMediaTagsView *tagsView;
@property (retain, nonatomic) VUIMediaTagsView *infoTagsView;
@property (retain, nonatomic) VUILabel *disclaimerTextView;
@property (retain, nonatomic) VUILabel *promoTextView;
@property (retain, nonatomic) VUILabel *availabilityTextView;
@property (retain, nonatomic) _TVImageView *availabilityImageView;
@property (nonatomic) BOOL prefersUberLayout;
@property (readonly, nonatomic) double topThreshold;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (struct CGSize { double x0; double x1; })_iOS_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_iOS_layoutButtonViewsWithWidth:(double)a0 origin:(struct CGPoint { double x0; double x1; })a1 isVerticalLayout:(BOOL)a2 computationOnly:(BOOL)a3;

@end
