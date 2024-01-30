@class UIStackView, NSUUID, UIImageView, UIVisualEffectView, UILabel, NSLayoutConstraint, MKPlaceCollectionViewModel;

@interface MKPlaceCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *publisherLogoImageView;
@property (retain, nonatomic) UIImageView *collectionImageView;
@property (retain, nonatomic) UIStackView *metadataStackView;
@property (retain, nonatomic) UILabel *collectionLabel;
@property (retain, nonatomic) UILabel *savedCollectionLabel;
@property (retain, nonatomic) UIVisualEffectView *savedView;
@property (retain, nonatomic) UIImageView *checkMarkImageView;
@property (retain, nonatomic) NSLayoutConstraint *logoWidthConstraint;
@property (retain, nonatomic) MKPlaceCollectionViewModel *item;
@property (retain, nonatomic) NSUUID *updateIdentifier;

+ (id)reuseIdentifier;

- (void)setupCollectionImage;
- (void)setupShadows;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpCellUsingModel:(id)a0;
- (void)addPublisherLogoImage;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)addCollectionNameView;
- (void)configureWithModel:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)addSavedCollectionView;
- (void)setTextMetadata;
- (void)prepareForReuse;
- (void)setupCornerRadius;
- (void)setupStackView;
- (struct CGSize { double x0; double x1; })sizeForSavedPill;
- (void)setImageMetadata;

@end
