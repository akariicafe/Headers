@class UIImage, UIView;

@interface PBFEditingZoomAnimationController : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewFrame;
@property (readonly, nonatomic) double previewCornerRadius;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) UIView *complicationsView;

- (void).cxx_destruct;
- (id)buildDimmingView;
- (id)buildZoomingViewWithPreviewImage:(id)a0 previewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 editingView:(id)a2 complicationsView:(id)a3;
- (id)initWithPreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewCornerRadius:(double)a1 previewImage:(id)a2 complicationsView:(id)a3;

@end
