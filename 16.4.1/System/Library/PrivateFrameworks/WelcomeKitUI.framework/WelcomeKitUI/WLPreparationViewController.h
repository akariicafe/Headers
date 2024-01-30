@class NSString, WLWelcomeController;

@interface WLPreparationViewController : OBSetupAssistantSpinnerController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
}

@property (nonatomic) BOOL showCancelButton;
@property (copy, nonatomic) id /* block */ cancellationBlock;
@property (copy, nonatomic) id /* block */ viewWillDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithWelcomeController:(id)a0;
- (void)showActivityIndicatorView;

@end
