@class UILabel, CNAutocompleteFetchContext, WFContactPickerCoordinator, CNAutocompleteResultsTableViewController, NSMutableArray, UIButton, UIView, NSLayoutConstraint, NSString, NSSet, CNAutocompleteSearchManager, CNContactStore, NSArray, NSNumber, CNComposeRecipientTextView;
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
@property (copy, nonatomic) NSString *currentSearchTerm;
@property (retain, nonatomic) NSNumber *lastSearchID;
@property (retain, nonatomic) UIView *tableBackgroundView;
@property (retain, nonatomic) UILabel *contactAuthorizationMessageLabel;
@property (retain, nonatomic) UIButton *contactAuthorizationStatusButton;
@property (nonatomic) long long contactAuthorizationStatus;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSArray *entries;
@property (nonatomic) BOOL allowsCustomHandles;
@property (weak, nonatomic) id<WFRecipientFieldViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autocompleteResultsController:(id)a0 didRequestInfoAboutRecipient:(id)a1;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)finishedSearchingForCorecipients;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeCorecipientSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedTaskWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)done:(id)a0;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)composeRecipientView:(id)a0 composeRecipientForAddress:(id)a1;
- (void)composeHeaderView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)a0;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)a0;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(unsigned long long)a2;
- (void)commitRemainingText;
- (void)_updateFetchContextChosenAddresses;
- (void)_resetSearchResults;
- (void)_presentContactViewControllerForRecipient:(id)a0;
- (unsigned long long)preferredSearchResultTypes;
- (void)_addSearchResults:(id)a0 forTask:(id)a1;
- (void)_startSearch:(id)a0;
- (void)_finishedSearching;
- (BOOL)hasActiveSearch;
- (void)_cancelActiveSearchClearingText:(BOOL)a0;
- (void)requestContactAuthorization;
- (void)configureBackgroundView;
- (void)requestContactsAccessIfNeeded;

@end
