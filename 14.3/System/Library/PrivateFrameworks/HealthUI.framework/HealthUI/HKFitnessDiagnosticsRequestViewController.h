@interface HKFitnessDiagnosticsRequestViewController : OBTextWelcomeController

@property (copy, nonatomic) id /* block */ completion;

+ (void)presentInViewController:(id)a0 completion:(id /* block */)a1;
+ (BOOL)needsRequestedPermission;

- (void).cxx_destruct;
- (BOOL)shouldInlineButtonTray;
- (void)viewDidLoad;
- (void)_showDataCollectionAdditionalInfo;
- (void)_enableDataCollection;
- (void)_disableDataCollection;

@end
