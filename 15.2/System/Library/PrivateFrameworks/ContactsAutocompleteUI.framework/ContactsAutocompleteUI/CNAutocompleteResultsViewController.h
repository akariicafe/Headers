@class CNAutocompleteResultsTableViewController, NSArray;

@interface CNAutocompleteResultsViewController : UIViewController

@property (retain, nonatomic) CNAutocompleteResultsTableViewController *resultsTableController;
@property (readonly, nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) BOOL showsSuggestions;

- (void)removeRecipient:(id)a0;
- (void)viewDidLoad;
- (id)initWithMode:(unsigned long long)a0;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void).cxx_destruct;
- (void)invalidateAddressTintColors;
- (void)invalidatePreferredRecipients;
- (BOOL)expandSelectedRecipient;
- (BOOL)collapseSelectedRecipient;
- (BOOL)commitSelectionOfRecipient;

@end
