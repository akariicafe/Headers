@class ASCOfferTheme, NSString, UIColor, ASCStarRatingView, ASCArtworkView, ASCOfferButton, ASCSkeletonLabel, ASCEditorsChoiceView, ASCAdTransparencyButtonView, UILabel;

@interface ASCAdLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCAdLockupPresenterView, ASCOfferPresenterView>

@property (retain, nonatomic) NSString *size;
@property (readonly, nonatomic) ASCArtworkView *iconArtworkView;
@property (readonly, nonatomic) ASCSkeletonLabel *titleLabel;
@property (readonly, nonatomic) ASCSkeletonLabel *subtitleLabel;
@property (readonly, nonatomic) ASCAdTransparencyButtonView *adTransparencyButton;
@property (readonly, nonatomic) ASCStarRatingView *starRatingView;
@property (readonly, nonatomic) UILabel *userRatingLabel;
@property (readonly, nonatomic) ASCOfferButton *offerButton;
@property (readonly, nonatomic) ASCEditorsChoiceView *editorsChoiceView;
@property (readonly, nonatomic) ASCSkeletonLabel *descriptionLabel;
@property (readonly, nonatomic) UILabel *headingLabelIfLoaded;
@property (readonly, nonatomic) UILabel *headingLabel;
@property (readonly, nonatomic) UILabel *offerStatusLabelIfLoaded;
@property (readonly, nonatomic) UILabel *offerStatusLabel;
@property (nonatomic, getter=isAdMarkerHidden) BOOL adMarkerHidden;
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (copy, nonatomic) UIColor *loadingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredIconSize;

+ (id)descriptionLabelFontForSize:(id)a0 compatibleWithTraitCollection:(id)a1;

- (void)setLoading:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)setHeading:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)setPrefersRightToLeftLayout:(BOOL)a0;
- (void)setIconImage:(id)a0 withDecoration:(id)a1;
- (void)addOfferTarget:(id)a0 action:(SEL)a1;
- (void)addAdTransparencyTarget:(id)a0 action:(SEL)a1;
- (void)setOfferEnabled:(BOOL)a0;
- (void)setOfferStatus:(id)a0;
- (void)setOfferInteractive:(BOOL)a0;
- (void)setOfferMetadata:(id)a0;
- (void)endOfferModalState;
- (id)saveOfferState;
- (void)beginOfferModalStateWithCancelBlock:(id /* block */)a0;
- (void)offerButton:(id)a0 willTransitionToMetadata:(id)a1 usingAnimator:(id)a2;
- (id)makeLayout;
- (void)setEditorsChoice:(BOOL)a0;
- (void)setProductRating:(float)a0;
- (void)setProductRatingBadge:(id)a0;
- (void)setProductDescription:(id)a0;
- (void)setAdTranparencyButtonHidden:(BOOL)a0;
- (void)removeOfferTarget:(id)a0 action:(SEL)a1;
- (void)removeAdTransparencyTarget:(id)a0 action:(SEL)a1;

@end
