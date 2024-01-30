@class SBIsolatedSceneOrientationFollowingWrapperViewController;

@interface SBIsolatedSceneOrientationFollowingContainerView : UIView <SBDeviceApplicationSceneOverlayView>

@property (readonly, weak, nonatomic) SBIsolatedSceneOrientationFollowingWrapperViewController *wrapperViewController;
@property (nonatomic) long long hostOrientation;
@property (nonatomic) BOOL shouldLayoutOverlayImmediatelyForContainerGeometryChange;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wrapperViewController:(id)a1;

@end
