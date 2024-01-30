@class NSNumberFormatter, NSString, PXRoundedCornerOverlayView, UIImageView, UILabel, UIView, UIImage;

@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell {
    NSNumberFormatter *_quantityNumberFormatter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unitRect;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *actionIndicatorView;
@property (retain, nonatomic) UIView *selectionView;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (readonly, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long photoQuantity;
@property (nonatomic, getter=isActionIndicatorHidden) BOOL actionIndicatorHidden;
@property (nonatomic) double textAlpha;
@property (nonatomic) BOOL isFavorite;
@property (retain, nonatomic) UILabel *quantityLabel;
@property (nonatomic, setter=setReordering:) BOOL isReordering;

+ (double)preferredHeightForWidth:(double)a0 forAvatarPercentage:(double)a1 withSizeClass:(long long)a2 isFavorite:(BOOL)a3;

- (long long)_preferredSizeClass;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)_updateType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 normalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)avatarCenterYOffset;
- (id)_placeHolderColor;
- (void)traitCollectionDidChange:(id)a0;

@end
