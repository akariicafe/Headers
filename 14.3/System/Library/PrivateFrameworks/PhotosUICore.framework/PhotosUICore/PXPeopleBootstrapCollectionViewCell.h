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

- (BOOL)_isRTL;
- (void)_updateCellSizing;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
