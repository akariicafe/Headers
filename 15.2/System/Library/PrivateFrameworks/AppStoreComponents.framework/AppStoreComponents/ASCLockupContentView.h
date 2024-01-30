@class UIColor, NSString, ASCArtworkView, ASCOfferButton, ASCLockupTheme, ASCSkeletonLabel, UILabel, ASCOfferTheme;

@interface ASCLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView>

@property (readonly, nonatomic) BOOL isOfferButtonOnlyLockup;
@property (readonly, nonatomic) ASCArtworkView *iconArtworkView;
@property (readonly, nonatomic) ASCSkeletonLabel *titleLabel;
@property (readonly, nonatomic) ASCSkeletonLabel *subtitleLabel;
@property (readonly, nonatomic) ASCOfferButton *offerButton;
@property (readonly, nonatomic) UILabel *headingLabelIfLoaded;
@property (readonly, nonatomic) UILabel *headingLabel;
@property (readonly, nonatomic) UILabel *offerStatusLabelIfLoaded;
@property (readonly, nonatomic) UILabel *offerStatusLabel;
@property (retain, nonatomic) NSString *size;
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (copy, nonatomic) ASCLockupTheme *lockupTheme;
@property (copy, nonatomic) UIColor *loadingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredIconSize;

+ (BOOL)isOfferButtonOnlyLockupForSize:(id)a0;
+ (BOOL)isOfferButtonFixedHeightForSize:(id)a0;

- (void)setLoading:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (void)setSubtitle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setHeading:(id)a0;
- (void)setTitle:(id)a0;
- (void)setPrefersRightToLeftLayout:(BOOL)a0;
- (void)setIconImage:(id)a0 withDecoration:(id)a1;
- (void)addOfferTarget:(id)a0 action:(SEL)a1;
- (void)setOfferEnabled:(BOOL)a0;
- (void)setOfferStatus:(id)a0;
- (void)setOfferInteractive:(BOOL)a0;
- (void)setOfferMetadata:(id)a0;
- (void)endOfferModalState;
- (id)saveOfferState;
- (void)beginOfferModalStateWithCancelBlock:(id /* block */)a0;
- (void)offerButton:(id)a0 willTransitionToMetadata:(id)a1 usingAnimator:(id)a2;
- (id)makeLayout;
- (void)removeOfferTarget:(id)a0 action:(SEL)a1;

@end
