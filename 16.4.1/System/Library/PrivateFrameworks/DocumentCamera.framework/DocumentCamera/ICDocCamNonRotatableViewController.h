@interface ICDocCamNonRotatableViewController : UIViewController

- (BOOL)shouldAutorotate;
- (BOOL)prefersStatusBarHidden;
- (BOOL)_canShowWhileLocked;
- (BOOL)_allowsAutorotation;

@end
