@class NSString, UIImageView, UIImage, UIView;

@interface SBSwitcherSnapshotImageView : UIView <SBReusableView> {
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0;
- (void)prepareForReuse;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })scalingTransform;
- (double)_transformHorizontalScale;
- (double)_transformVerticalScale;
- (BOOL)_isUsingExternalClassicLayout;
- (void)layoutSubviews;
- (void)_updateCornerRadius;
- (double)_transformScale;
- (void).cxx_destruct;

@end
