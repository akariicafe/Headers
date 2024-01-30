@class NSString, UIViewController, FLSpecifierTapHandler;
@protocol FLViewModel;

@interface FLPreferencesFollowUpItemListViewController : PSListController <FLSpecifierTapHandlerDelegate> {
    id<FLViewModel> _viewModel;
    FLSpecifierTapHandler *_actionHandler;
}

@property (retain, nonatomic) UIViewController *presentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleURL:(id)a0;
- (id)specifiers;
- (void)_dismissFlowWithError:(id)a0;
- (id)detailSpecifiersForFollowUpItem:(id)a0;
- (id)followUpItemSpecifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)_showRadarPromptForItem:(id)a0 action:(id)a1;
- (void)startPresentingForHandler:(id)a0 withRemoteController:(id)a1;
- (void)actionTapped:(id)a0;
- (void)preflightNetworkConnectivityForHandler:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)reloadSpecifiers;
- (id)_viewModel;

@end
