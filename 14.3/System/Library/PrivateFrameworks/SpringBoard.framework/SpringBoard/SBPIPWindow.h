@class NSArray;

@interface SBPIPWindow : SBWindow

@property (readonly, nonatomic) NSArray *containerViewControllers;

- (id)init;
- (void)setRootViewController:(id)a0;
- (BOOL)isActive;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)interfaceOrientationForContainerViewController:(id)a0;
- (id)_pipWindowRootVC;
- (void)addContainerViewController:(id)a0;
- (void)removeContainerViewController:(id)a0;
- (id)containerViewControllerForPictureInPictureViewController:(id)a0;
- (void)updateActiveInterfaceOrientationForManualPictureInPictureStart;

@end
