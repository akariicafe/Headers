@class NSMutableArray, NSNumber, WFContactPickerCoordinator, NSArray, NSSet, CNAutocompleteResultsTableViewController, NSString, CNContactStore, CNAutocompleteSearchManager, CNComposeRecipientTextView, CNAutocompleteFetchContext, NSLayoutConstraint;
@protocol WFRecipientFieldViewControllerDelegate;

@interface WFRecipientFieldViewController : UIViewController <CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer>

@property (retain, nonatomic) WFContactPickerCoordinator *contactPickerCoordinator;
@property (readonly, nonatomic) CNAutocompleteResultsTableViewController *autocompleteResultsController;
@property (retain, nonatomic) NSLayoutConstraint *composeHeaderHeightConstraint;
@property (retain, nonatomic) CNComposeRecipientTextView *composeTextView;
@property (readonly, nonatomic) CNAutocompleteFetchContext *fetchContext;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNAutocompleteSearchManager *searchManager;
@property (retain, nonatomic) NSMutableArray *searchResults;
@property (copy, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSNumber *lastSearchID;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSArray *entries;
@property (weak, nonatomic) id<WFRecipientFieldViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel:(id)a0;
- (id)init;
- (void)commitRemainingText;
- (void).cxx_destruct;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(unsigned long long)a2;
- (void)dealloc;
- (void)loadView;
- (void)done:(id)a0;
- (void)finishedTaskWithID:(id)a0;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeCorecipientSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForCorecipients;
- (void)autocompleteResultsController:(id)a0 didRequestInfoAboutRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (id)composeRecipientView:(id)a0 composeRecipientForAddress:(id)a1;
- (void)_updateFetchContextChosenAddresses;
- (void)composeHeaderView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)a0;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)a0;
- (void)viewDidLoad;
- (void)_resetSearchResults;
- (void)_presentContactViewControllerForRecipient:(id)a0;
- (void)_addSearchResults:(id)a0 forTask:(id)a1;
- (void)_startSearch:(id)a0;
- (void)_finishedSearching;
- (BOOL)hasActiveSearch;
- (void)_cancelActiveSearchClearingText:(BOOL)a0;

@end
