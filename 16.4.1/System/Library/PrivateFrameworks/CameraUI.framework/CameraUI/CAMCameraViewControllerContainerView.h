@class UIView;

@interface CAMCameraViewControllerContainerView : UIView

@property (retain, nonatomic) UIView *viewfinderView;
@property (retain, nonatomic) UIView *customOverlayView;
@property (retain, nonatomic) UIView *additionalContentView;

+ (Class)layerClass;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_commonCAMCameraViewControllerContainerViewInitialization;
- (void)verifyViewOrdering;

@end
