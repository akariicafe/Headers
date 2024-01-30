@class UIStackView, MKPlaceCompactCollectionOverlayView, UIImageView, MKPlaceCompactCollectionViewModel, UILabel, NSUUID, NSLayoutConstraint;

@interface MKPlaceCompactCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIStackView *metadataStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *collectionImageView;
@property (retain, nonatomic) MKPlaceCompactCollectionOverlayView *imageOverlayView;
@property (retain, nonatomic) MKPlaceCompactCollectionViewModel *item;
@property (retain, nonatomic) NSUUID *updateIdentifier;
@property (retain, nonatomic) NSLayoutConstraint *overlayHeightConstraint;

+ (id)reuseIdentifier;

- (void)setupShadows;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpCellUsingModel:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)configureWithModel:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)prepareForReuse;
- (void)setupCornerRadius;
- (void)setupBorderHighlight;
- (void)setupCompactCollectionImage;
- (void)setupCompactCollectionImageOverlay;
- (void)setupCompactCollectionData;
- (void)setupTitle;
- (void)setupSubTitle;

@end
