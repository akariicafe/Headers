@class UIView, NSString, WFActionDrawerResults, NSSet, WFActionDrawerCoordinator, WFActionDrawerSiriSuggestionsViewController, UISearchBar, WFActionDrawerSearchResultsViewController, WFDragController, WFActionDrawerState;
@protocol WFActionDrawerResultsControlling, NSObject;

@interface WFActionDrawerViewController : UIViewController <UISearchBarDelegate, WFDragControllerDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable>

@property (weak, nonatomic) UISearchBar *searchBar;
@property (weak, nonatomic) UIView *separatorView;
@property (readonly, nonatomic) long long activePane;
@property (retain, nonatomic) WFActionDrawerResults *workflowSuggestionResults;
@property (retain, nonatomic) WFDragController *currentDragController;
@property (retain, nonatomic) id<WFActionDrawerResultsControlling> actionDrawerResultsControllingDelegate;
@property (retain, nonatomic) id<NSObject> actionRegistryFilledNotificationObserver;
@property (readonly, weak, nonatomic) WFActionDrawerCoordinator *coordinator;
@property (readonly, nonatomic) WFActionDrawerSiriSuggestionsViewController *siriSuggestionsViewController;
@property (readonly, nonatomic) WFActionDrawerSearchResultsViewController *searchResultsViewController;
@property (retain, nonatomic) WFActionDrawerResults *siriSuggestionResults;
@property (copy, nonatomic) NSSet *siriSuggestionBundleIdentifiers;
@property (nonatomic) BOOL scrollsToTop;
@property (nonatomic) BOOL requiresOpaqueBackground;
@property (nonatomic) double bottomContentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WFActionDrawerState *state;

- (id)searchField;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)searchText;
- (id)initWithCoordinator:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)updateBackgroundColor;
- (void)startSearching;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)resetSearch;
- (void)dragController:(id)a0 didEnterViewController:(id)a1;
- (BOOL)moveToState:(id)a0 animated:(BOOL)a1;
- (void)transitionToChildViewController:(id)a0;
- (void)populateSuggestionsUsingWorkflow:(id)a0;
- (void)updateForActionAdded;
- (void)updateAdditionalSafeAreaInsets;
- (void)subscribeForActionRegistryFilledNotifications;
- (void)updateContentForSearchBar;
- (void)updateContentForSearchBarSkippingTransition:(BOOL)a0;

@end
