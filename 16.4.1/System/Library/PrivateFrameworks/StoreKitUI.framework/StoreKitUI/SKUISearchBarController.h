@class SKUISearchFieldController, NSString, SKUIClientContext, SKUISearchBarViewElement, SKUIFocusedTouchGestureRecognizer, UISearchBar, UIViewController;

@interface SKUISearchBarController : NSObject <SKUISearchFieldDelegate, UISearchBarDelegate> {
    SKUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;
    UISearchBar *_searchBar;
    SKUISearchFieldController *_searchFieldController;
    BOOL _usesSearchFieldController;
}

@property (retain, nonatomic) SKUISearchBarViewElement *searchBarViewElement;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) BOOL displaysSearchBarInNavigationBar;
@property (nonatomic) BOOL showsResultsForEmptyField;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (readonly, nonatomic) BOOL canBecomeActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)becomeActive;
- (void)dealloc;
- (void)resignActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)_cancelGestureAction:(id)a0;
- (void)_customizeSearchBar:(id)a0;
- (void)_customizeSearchFieldController:(id)a0;
- (void)_dispatchChangeEventWithText:(id)a0;
- (void)_dispatchSubmitEventWithText:(id)a0 URL:(id)a1 searchHintOriginalTerm:(id)a2 searchHintIndex:(id)a3;
- (id)_newSearchFieldController;
- (void)_removeCancelTouchGestureRecognizer;
- (id)_searchFieldController;
- (id)initWithSearchBarViewElement:(id)a0;
- (void)reloadAfterDocumentUpdate;
- (void)searchFieldController:(id)a0 requestSearch:(id)a1;
- (void)searchFieldController:(id)a0 searchBarDidChangeText:(id)a1;

@end
