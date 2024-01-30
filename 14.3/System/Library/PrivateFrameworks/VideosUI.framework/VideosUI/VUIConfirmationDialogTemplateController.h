@class NSTimer, VUIConfirmationDialogTemplateView;

@interface VUIConfirmationDialogTemplateController : UIViewController {
    BOOL _setTimer;
}

@property (readonly, nonatomic) NSTimer *dismissTimer;
@property (readonly, nonatomic) VUIConfirmationDialogTemplateView *templateView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_setupTimer;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)updateWithViewElement:(id)a0;
- (void)_dismissConfirmation:(id)a0;

@end
