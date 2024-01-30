@class SBIsolatedSceneOrientationFollowingWrapperViewController, NSHashTable;

@interface SBIsolatedSceneOrientationFollowingContainerView : UIView <SBDeviceApplicationSceneOverlayView> {
    NSHashTable *_observers;
}

@property (readonly, weak, nonatomic) SBIsolatedSceneOrientationFollowingWrapperViewController *wrapperViewController;
@property (nonatomic) long long hostOrientation;
@property (nonatomic) BOOL shouldLayoutOverlayImmediatelyForContainerGeometryChange;
@property (readonly, nonatomic) BOOL needsCounterRotation;

- (void)addObserver:(id)a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)removeObserver:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wrapperViewController:(id)a1;
- (void)notifyObserversViewRotatedToOrientation:(long long)a0;

@end
