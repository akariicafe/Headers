@class UIImageView, PXRoundedCornerOverlayView, UIView, PXPersonImageRequest, UIImage;

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (readonly, nonatomic) UIView *selectedCheckmarkView;
@property (readonly, nonatomic) UIView *unselectedCheckmarkView;
@property (readonly, nonatomic) UIImageView *badgeView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) struct CGSize { double width; double height; } checkmarkImageSize;
@property (nonatomic) BOOL confirmed;
@property (nonatomic) unsigned long long presentationStatus;
@property (retain, nonatomic) PXPersonImageRequest *imageRequest;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL isMergeCandidate;
@property (nonatomic) BOOL isVerified;

+ (id)cloudErrorBadgeImage;

- (void)layoutSubviews;
- (BOOL)_isRTL;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setImage:(id)a0 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateCellSizing;

@end
