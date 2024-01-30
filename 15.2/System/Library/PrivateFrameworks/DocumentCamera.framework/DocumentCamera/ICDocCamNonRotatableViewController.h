@interface ICDocCamNonRotatableViewController : UIViewController

- (BOOL)prefersStatusBarHidden;
- (BOOL)_canShowWhileLocked;
- (BOOL)_allowsAutorotation;
- (BOOL)shouldAutorotate;

@end
