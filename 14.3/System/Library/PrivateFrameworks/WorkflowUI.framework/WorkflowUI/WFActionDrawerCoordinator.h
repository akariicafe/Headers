@class NSString, WFActionDrawerResults, WFActionDrawerResultsController, UINavigationController, WFActionDrawerSiriSuggestionsViewController, WFActionDrawerViewController, WFActionDrawerState, UIViewController, WFDrawerController;
@protocol WFActionDrawerResultsControlling, WFActionDrawerCoordinatorDelegate;

@interface WFActionDrawerCoordinator : NSObject <UIPopoverPresentationControllerDelegate, WFActionDrawerStateConfigurable, WFActionDrawerStateRepresentable>

@property (retain, nonatomic) WFActionDrawerResults *siriSuggestionsResults;
@property (retain, nonatomic) WFActionDrawerResults *siriSuggestionsByIntentResults;
@property (weak, nonatomic) WFActionDrawerSiriSuggestionsViewController *siriSuggestionsViewController;
@property (weak, nonatomic) id<WFActionDrawerResultsControlling> actionDrawerResultsControllingDelegate;
@property (weak, nonatomic) UIViewController *documentationPopoverViewController;
@property (weak, nonatomic) id<WFActionDrawerCoordinatorDelegate> delegate;
@property (readonly, nonatomic) WFActionDrawerResultsController *resultsController;
@property (readonly, nonatomic) WFActionDrawerViewController *drawerViewController;
@property (weak, nonatomic) WFDrawerController *drawerController;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WFActionDrawerState *state;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)responderDidBeginEditing:(id)a0;
- (BOOL)moveToState:(id)a0 animated:(BOOL)a1;
- (id)initWithResultsController:(id)a0;
- (void)configureForDisplayingDrawerController:(id)a0 withViewControllers:(id)a1;
- (void)configureForDisplayingNavigationController:(id)a0 withViewControllers:(id)a1;
- (void)reloadSiriSuggestions;
- (void)appendAction:(id)a0;
- (id)presentDescriptionForAction:(id)a0 fromViewController:(id)a1 view:(id)a2 animated:(BOOL)a3;
- (id)presentResultsViewControllerWithTitle:(id)a0 results:(id)a1 visibility:(unsigned long long)a2 animated:(BOOL)a3;
- (void)presentAppsViewControllerAnimated:(BOOL)a0;
- (void)presentFavoritesViewControllerAnimated:(BOOL)a0;
- (void)presentResultsForAppWithBundleIdentifier:(id)a0;
- (void)presentResultsViewController:(id)a0 visibility:(unsigned long long)a1 animated:(BOOL)a2;
- (void)dismissDocumentationIfPresentedInPopoverAnimated:(BOOL)a0;
- (void)subscribeForTextEditingNotifications;

@end
