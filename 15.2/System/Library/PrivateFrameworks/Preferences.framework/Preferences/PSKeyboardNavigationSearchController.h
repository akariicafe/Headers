@class UIViewController, PSKeyboardNavigationSearchBar;
@protocol PSKeyboardNavigationSearchResultsController;

@interface PSKeyboardNavigationSearchController : UISearchController

@property (retain, nonatomic) PSKeyboardNavigationSearchBar *searchBar;
@property (retain, nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;

- (void)_escapeKeyPressed;
- (id)initWithSearchResultsController:(id)a0;
- (void).cxx_destruct;
- (void)_downArrowKeyPressed;
- (void)_upArrowKeyPressed;

@end
