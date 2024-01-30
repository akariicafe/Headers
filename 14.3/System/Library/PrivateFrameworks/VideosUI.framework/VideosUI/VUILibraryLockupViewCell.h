@class _TVImageView, VUILabel, NSString, VUIRentalExpirationLabel;

@interface VUILibraryLockupViewCell : UICollectionViewCell <VUIRentalExpirationLabelDelegate>

@property (retain, nonatomic) _TVImageView *imageView;
@property (nonatomic) double imageAspectRatio;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUIRentalExpirationLabel *expirationLabel;
@property (nonatomic) BOOL hideTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureImageViewArtworkForLockupCell:(id)a0 withMedia:(id)a1 width:(double)a2;
+ (void)configureLockupCell:(id)a0 withMedia:(id)a1 width:(double)a2 forMetrics:(BOOL)a3;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;

@end
