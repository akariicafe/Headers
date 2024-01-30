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

- (void)setSpecifier:(id)a0;
- (void)reloadSpecifiers;
- (void)startPresentingForHandler:(id)a0 withRemoteController:(id)a1;
- (id)specifiers;
- (void)handleURL:(id)a0;
- (void)preflightNetworkConnectivityForHandler:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_viewModel;
- (void)_showRadarPromptForItem:(id)a0 action:(id)a1;
- (void)_dismissFlowWithError:(id)a0;
- (void)actionTapped:(id)a0;
- (id)detailSpecifiersForFollowUpItem:(id)a0;
- (id)followUpItemSpecifiers;

@end
