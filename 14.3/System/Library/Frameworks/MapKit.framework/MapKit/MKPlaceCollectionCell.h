@class UIStackView, NSUUID, UIImageView, UIVisualEffectView, UILabel, MKPlaceCollectionViewModel, UIFont;

@interface MKPlaceCollectionCell : UICollectionViewCell {
    UIFont *_savedPillFont;
}

@property (retain, nonatomic) UIImageView *publisherLogoImageView;
@property (retain, nonatomic) UIImageView *collectionImageView;
@property (retain, nonatomic) UIStackView *metadataStackView;
@property (retain, nonatomic) UILabel *collectionLabel;
@property (retain, nonatomic) UILabel *collectionSecondaryLabel;
@property (retain, nonatomic) UILabel *savedCollectionLabel;
@property (retain, nonatomic) UIVisualEffectView *savedView;
@property (retain, nonatomic) UIStackView *savedStackView;
@property (retain, nonatomic) UIImageView *checkMarkImageView;
@property (retain, nonatomic) MKPlaceCollectionViewModel *item;
@property (retain, nonatomic) NSUUID *updateIdentifier;

+ (id)reuseIdentifier;

- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupCornerRadius;
- (void)setUpCellUsingModel:(id)a0;
- (void)setupCollectionImage;
- (void)setupStackView;
- (struct CGSize { double x0; double x1; })sizeForSavedPill;
- (void)addPublisherLogoImage;
- (void)addCollectionNameView;
- (void)initializeCollectionSecondaryLabel;
- (void)addSavedCollectionView;
- (void)setTextMetadata;
- (void)addAndSetSecondaryLabel;
- (void)setImageMetadata;
- (void)configureWithModel:(id)a0;
- (void)prepareForReuse;
- (BOOL)canBecomeFirstResponder;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
