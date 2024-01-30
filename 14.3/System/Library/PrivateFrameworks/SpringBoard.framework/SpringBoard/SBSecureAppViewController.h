@protocol SBSecureAppViewControllerDelegate;

@interface SBSecureAppViewController : SBDashBoardHostedAppViewController

@property (weak, nonatomic) id<SBSecureAppViewControllerDelegate> delegate;

- (void)configureDisplayLayoutElement:(id)a0;
- (BOOL)handleEvent:(id)a0;

@end
