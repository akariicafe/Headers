@class NSArray;

@interface SBPIPWindow : SBWindow

@property (readonly, nonatomic) NSArray *containerViewControllers;

- (void)setRootViewController:(id)a0;
- (void)removeActiveOrientationObserver:(id)a0;
- (void)removeContainerViewController:(id)a0;
- (void)addActiveOrientationObserver:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isActive;
- (long long)interfaceOrientationForContainerViewController:(id)a0;
- (void)hideContainersExcludingContainerForContentViewControllerAndTetheredOnes:(id)a0 animated:(BOOL)a1;
- (void)showAllContainersAnimated:(BOOL)a0;
- (void)acquireInterfaceOrientationLockForContainerViewController:(id)a0;
- (void)relinquishInterfaceOrientationLockForContainerViewController:(id)a0;
- (id)initWithPIPController:(id)a0;
- (id)_pipWindowRootVC;
- (void)addContainerViewController:(id)a0;
- (id)containerViewControllerForPictureInPictureContentViewController:(id)a0;
- (void)bringTetheredChildViewControllersToFront;
- (void)updateActiveInterfaceOrientationForManualPictureInPictureStart;

@end
