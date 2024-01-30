@protocol SBSecureAppViewControllerDelegate;

@interface SBSecureAppViewController : SBDashBoardHostedAppViewController

@property (weak, nonatomic) id<SBSecureAppViewControllerDelegate> delegate;

- (BOOL)handleEvent:(id)a0;
- (void)_updateDisplayLayoutElementForActivation:(id)a0;

@end
