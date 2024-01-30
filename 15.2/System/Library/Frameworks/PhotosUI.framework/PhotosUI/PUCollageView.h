@class UIColor, NSArray, NSPointerArray, PXRoundedCornerOverlayView;

@interface PUCollageView : UIView

@property (readonly, nonatomic) long long _numberOfImageViews;
@property (readonly, nonatomic) NSArray *_imageViews;
@property (readonly, nonatomic) NSPointerArray *_imageSizes;
@property (retain, nonatomic) UIColor *cornersBackgroundColor;
@property (retain, nonatomic, setter=_setRoundedCornerOverlayView:) PXRoundedCornerOverlayView *_roundedCornerOverlayView;
@property (nonatomic) struct CGSize { double width; double height; } collageSize;
@property (nonatomic) double spacing;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double subitemCornerRadius;
@property (nonatomic) BOOL hasRoundedCorners;

+ (long long)maximumNumberOfItems;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })imageSizeForItemAtIndex:(long long)a0;
- (void)_updateImageViews;
- (void)_updateRoundedCornerOverlayView;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0 forItemAtIndex:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (void)setHasRoundedCorners:(BOOL)a0 withCornersBackgroundColor:(id)a1;

@end
