@class BTSDevice;

@interface BTSFitTestWelcomeController : UIViewController

@property (retain, nonatomic) BTSDevice *currentDevice;

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)powerChangedHandler:(id)a0;
- (void)continueToFitTest;
- (void)cancelFitTest;

@end
