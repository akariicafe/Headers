@class NSString, UIImageView, UIImage, UILabel, UIView, UIButton;
@protocol PXPeopleCollectionViewCellDelegate;

@interface PXPeopleCollectionViewCell : UICollectionViewCell {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unitRect;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (retain, nonatomic) UIView *checkmarkBackgroundView;
@property (retain, nonatomic) UIView *highlightOverlayView;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (retain, nonatomic) UIView *favoriteBackgroundView;
@property (retain, nonatomic) UIButton *unfavoriteButton;
@property (retain, nonatomic) UIView *unfavoriteBackgroundView;
@property (readonly, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double textAlpha;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic) unsigned long long selectionStyle;
@property (weak, nonatomic) id<PXPeopleCollectionViewCellDelegate> peopleCellDelegate;
@property (nonatomic) BOOL ppt_fullImageLoaded;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)focusEffect;
- (void)setImage:(id)a0 normalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)toggleFavorite:(id)a0;
- (void)_updateSelection;
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;
- (void)_updateFocusRingForced:(BOOL)a0;

@end
