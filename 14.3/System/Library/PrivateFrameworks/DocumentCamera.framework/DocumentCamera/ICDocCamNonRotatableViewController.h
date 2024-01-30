@interface ICDocCamNonRotatableViewController : UIViewController

- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldAutorotate;
- (BOOL)_allowsAutorotation;
- (BOOL)_canShowWhileLocked;

@end
