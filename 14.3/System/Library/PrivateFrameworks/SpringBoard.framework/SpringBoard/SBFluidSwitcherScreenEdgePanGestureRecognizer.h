@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {
    long long _touchInterfaceOrientationWhenGestureBegan;
}

@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;

- (id)viewForTouchHistory;
- (void).cxx_destruct;
- (void)reset;
- (void)setState:(long long)a0;
- (long long)_touchInterfaceOrientation;

@end
