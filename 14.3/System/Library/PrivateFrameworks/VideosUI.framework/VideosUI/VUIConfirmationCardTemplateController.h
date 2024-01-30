@class NSTimer, VUIConfirmationCardView, IKViewElement;

@interface VUIConfirmationCardTemplateController : UIViewController {
    BOOL _setTimer;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (readonly, nonatomic) NSTimer *dismissTimer;
@property (readonly, nonatomic) VUIConfirmationCardView *cardView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_setupTimer;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateWithViewElement:(id)a0;
- (void)_dismissConfirmation:(id)a0;

@end
