@class UIView;

@interface CAMCameraViewControllerContainerView : UIView

@property (retain, nonatomic) UIView *viewfinderView;
@property (retain, nonatomic) UIView *customOverlayView;
@property (retain, nonatomic) UIView *additionalContentView;

+ (Class)layerClass;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)_commonCAMCameraViewControllerContainerViewInitialization;
- (void)verifyViewOrdering;

@end
