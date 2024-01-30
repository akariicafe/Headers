@interface SBRootFolderDockAnimationViewController : UIViewController

@property (nonatomic) long long forcedInterfaceOrientation;

- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;

@end
