@interface HKFitnessDiagnosticsRequestViewController : OBTextWelcomeController

@property (copy, nonatomic) id /* block */ completion;

+ (BOOL)needsRequestedPermission;
+ (void)presentInViewController:(id)a0 completion:(id /* block */)a1;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)shouldInlineButtonTray;
- (void)_disableDataCollection;
- (void)_enableDataCollection;
- (void)_showDataCollectionAdditionalInfo;

@end
