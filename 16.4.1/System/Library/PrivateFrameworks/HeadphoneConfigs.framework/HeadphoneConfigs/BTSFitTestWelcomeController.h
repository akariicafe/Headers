@class BTSDevice;

@interface BTSFitTestWelcomeController : UIViewController

@property (retain, nonatomic) BTSDevice *currentDevice;

- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)cancelFitTest;
- (void)continueToFitTest;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)powerChangedHandler:(id)a0;

@end
