@class UIViewController, PSKeyboardNavigationSearchBar;
@protocol PSKeyboardNavigationSearchResultsController;

@interface PSKeyboardNavigationSearchController : UISearchController

@property (retain, nonatomic) PSKeyboardNavigationSearchBar *searchBar;
@property (retain, nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;

- (void)_escapeKeyPressed;
- (void).cxx_destruct;
- (id)initWithSearchResultsController:(id)a0;
- (void)_downArrowKeyPressed;
- (void)_upArrowKeyPressed;

@end
