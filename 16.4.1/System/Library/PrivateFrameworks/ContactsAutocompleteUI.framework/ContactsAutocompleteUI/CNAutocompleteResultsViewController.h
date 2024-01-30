@class CNAutocompleteResultsTableViewController, NSArray;

@interface CNAutocompleteResultsViewController : UIViewController

@property (retain, nonatomic) CNAutocompleteResultsTableViewController *resultsTableController;
@property (readonly, nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) BOOL showsSuggestions;

- (void)selectPreviousSearchResult;
- (id)initWithMode:(unsigned long long)a0;
- (void)selectNextSearchResult;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)removeRecipient:(id)a0;
- (BOOL)collapseSelectedRecipient;
- (BOOL)expandSelectedRecipient;
- (void)invalidateAddressTintColors;
- (void)invalidatePreferredRecipients;
- (BOOL)commitSelectionOfRecipient;

@end
