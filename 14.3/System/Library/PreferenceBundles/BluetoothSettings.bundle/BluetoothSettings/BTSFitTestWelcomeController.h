@class BTSDevice;

@interface BTSFitTestWelcomeController : UIViewController

@property (retain, nonatomic) BTSDevice *currentDevice;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)powerChangedHandler:(id)a0;
- (void)continueToFitTest;
- (void)cancelFitTest;

@end
