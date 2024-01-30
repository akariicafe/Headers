@class UIView, NSString, UIImage, UIImageView, UIButton, UIVisualEffectView, PXRoundedCornerOverlayView, UILabel;
@protocol PXPeopleCollectionViewCellDelegate;

@interface PXPeopleCollectionViewCell : UICollectionViewCell <PXUIAssetBadgeViewDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unitRect;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *selectionView;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (retain, nonatomic) UIButton *favoriteBadge;
@property (retain, nonatomic) UIView *highlightOverlayView;
@property (retain, nonatomic) UIView *checkmarkView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIImageView *mirrorView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (nonatomic) BOOL blurApplied;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (readonly, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double textAlpha;
@property (nonatomic) BOOL titleUsesAllCaps;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, setter=setReordering:) BOOL isReordering;
@property (nonatomic) unsigned long long selectionStyle;
@property (weak, nonatomic) id<PXPeopleCollectionViewCellDelegate> delegate;
@property (nonatomic) BOOL ppt_fullImageLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_preferredSizeClass;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)_updateType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 normalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateSelection;
- (struct CGSize { double x0; double x1; })_avatarSizeForImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)_favoriteBadgePressed:(id)a0;
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;
- (id)_stretchableGradientImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 gradientColor:(id)a2;

@end
