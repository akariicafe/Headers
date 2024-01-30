@class UIImage, UIImageView, UIView;

@interface SBSwitcherSnapshotImageView : UIView {
    UIImageView *_imageView;
    UIView *_scalingView;
    double _cornerRadius;
    unsigned long long _maskedCorners;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) BOOL usesNonuniformScaling;
@property (nonatomic) BOOL hasOpaqueContents;
@property (nonatomic) long long orientationForClassicLayout;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (double)_transformHorizontalScale;
- (void)_updateCornerRadius;
- (void)layoutSubviews;
- (double)_transformScale;
- (double)_transformVerticalScale;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })scalingTransform;
- (BOOL)_isUsingExternalClassicLayout;

@end
