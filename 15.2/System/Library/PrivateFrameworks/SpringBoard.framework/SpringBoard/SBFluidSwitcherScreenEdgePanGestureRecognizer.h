@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {
    long long _touchInterfaceOrientationWhenGestureBegan;
}

@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;

- (void)setState:(long long)a0;
- (long long)_touchInterfaceOrientation;
- (void).cxx_destruct;
- (id)viewForTouchHistory;
- (void)reset;

@end
