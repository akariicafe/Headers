@class BFFNavigationController, UIViewController, NSMutableSet, FLFollowUpAction, NSMutableArray;

@interface BFFFinishSetupViewController : UIViewController <BFFFinishSetupFlowHosting> {
    BOOL _setupInProgress;
    BFFNavigationController *_navigationController;
    FLFollowUpAction *_followUpAction;
    NSMutableArray *_flowIdentifiers;
    NSMutableSet *_completedFlowIdentifiers;
    NSMutableSet *_skippedFlowIdentifiers;
    UIViewController *_newRootViewController;
    id /* block */ _completion;
    id /* block */ _overrideFlowControllerGenerator;
}

+ (id)_keyValueDictionaryForURL:(id)a0;
+ (id)_orderedFlowIdentifiersFromFlowIdentifiers:(id)a0;

- (long long)preferredStatusBarStyle;
- (void)_complete;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)didSkipFlowInFinishSetup:(id)a0;
- (BOOL)didCompleteFlowInFinishSetup:(id)a0;
- (void)_startNextFlowIdentifier;
- (id)_flowControllerForNextFlowIdentifier;
- (BOOL)_presentPreconditionViewControllerIfNecessaryForFlowController:(id)a0;
- (void)_didSatisfyPreconditionsForFlowController:(id)a0;
- (void)_flowDidFinishForIdentifiers:(id)a0 result:(unsigned long long)a1;
- (void)_performExtendedInitializationForFlowController:(id)a0;
- (void)_didSatisfyInitializationForFlowController:(id)a0;
- (void)_pushViewControllerOntoNavigationController:(id)a0 completion:(id /* block */)a1;
- (void)_ensureNavigationControllerWithViewController:(id)a0 pushCompletion:(id /* block */)a1;
- (id)_flowControllerForFlowIdentifier:(id)a0;
- (void)processURL:(id)a0 completion:(id /* block */)a1;
- (void)setOverrideFlowControllerGenerator:(id /* block */)a0;

@end
