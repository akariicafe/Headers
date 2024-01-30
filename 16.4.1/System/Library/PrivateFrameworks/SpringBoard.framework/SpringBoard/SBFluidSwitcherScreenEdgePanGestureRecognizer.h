@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {
    long long _touchInterfaceOrientationWhenGestureBegan;
}

@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;

- (id)viewForTouchHistory;
- (long long)_touchInterfaceOrientation;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)reset;

@end
