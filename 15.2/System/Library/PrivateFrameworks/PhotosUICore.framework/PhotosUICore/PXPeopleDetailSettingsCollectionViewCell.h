@class NSString, UIImageView, UIImage, UILabel, UIView, NSNumberFormatter;

@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell {
    NSNumberFormatter *_quantityNumberFormatter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unitRect;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *actionIndicatorView;
@property (retain, nonatomic) UIView *selectionView;
@property (readonly, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long photoQuantity;
@property (nonatomic, getter=isActionIndicatorHidden) BOOL actionIndicatorHidden;
@property (nonatomic) double textAlpha;
@property (nonatomic) BOOL isFavorite;
@property (retain, nonatomic) UILabel *quantityLabel;

+ (double)preferredHeightForWidth:(double)a0 forAvatarPercentage:(double)a1 withSizeClass:(long long)a2 isFavorite:(BOOL)a3;

- (void)layoutSubviews;
- (long long)_preferredSizeClass;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)_updateType;
- (void)setImage:(id)a0 normalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)avatarCenterYOffset;
- (id)_placeHolderColor;

@end
