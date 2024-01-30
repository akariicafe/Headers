@interface CAMFullscreenViewfinderLayout : NSObject

@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } _safeAreaInsets;
@property (nonatomic) double frontCameraInset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceBounds;
@property (nonatomic) struct CGSize { double width; double height; } shutterIntrinsicSize;
@property (nonatomic) double screenScale;

- (void)_updateSafeAreaInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForShutterControl;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBottomControl:(id)a0 betweenShutterAndLeftControl:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBottomControl:(id)a0 betweenShutterAndRightControl:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBottomLeftControl:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBottomRightControl:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForControlStatusBar;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForShutterControl:(id)a0;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x2; })geometryForElapsedTimeView:(id)a0 viewportFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(long long)a2;
- (id)initWithReferenceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shutterIntrinsicSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewportFrameForAspectRatio:(long long)a0 accessoryAreaExpanded:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewportFrameForAspectRatio:(long long)a0 usingAppDrawer:(BOOL)a1 accessoryAreaExpanded:(BOOL)a2;
- (struct CGSize { double x0; double x1; })viewportSizeForAspectRatio:(long long)a0;

@end
