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
@property (nonatomic) BOOL stretchToFillBounds;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) BOOL allowStatusBarToOverlap;
@property (nonatomic) long long orientationForClassicLayout;

- (void)layoutSubviews;
- (id)initWithImage:(id)a0;
- (double)_transformVerticalScale;
- (double)_transformHorizontalScale;
- (double)_transformScale;
- (void)_updateCornerRadius;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })scalingTransform;
- (void).cxx_destruct;
- (BOOL)_isUsingExternalClassicLayout;

@end
