@class NSMutableDictionary, NSDate, UITableView, CNAutocompleteFetchContext, CNAutocompleteResultsTableViewController, NSMutableArray, UIScrollView, NSString, EKEvent, CNAutocompleteSearchManager, UIKeyboard, CNComposeRecipient, NSOperationQueue, NSArray, CNComposeRecipientTextView, NSNumber;
@protocol EKEventAttendeePickerDelegate;

@interface EKEventAttendeePicker : UIViewController <CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNContactPickerDelegate, CNContactViewControllerPrivateDelegate, CNAutocompleteSearchConsumer> {
    NSArray *_recipients;
    CNComposeRecipientTextView *_composeRecipientView;
    UIScrollView *_recipientScrollView;
    UITableView *_searchResultsView;
    BOOL _showingSearchField;
    UIKeyboard *_keyboard;
    NSNumber *_lastSearchId;
    BOOL _ABAccessDenied;
    BOOL _shouldReenableAutomaticKeyboard;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrame;
    NSOperationQueue *_availabilityQueue;
    NSMutableDictionary *_recipientAddressesToRecipients;
    EKEvent *_event;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    BOOL _suppressAvailabilityRequests;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    CNAutocompleteSearchManager *_searchManager;
    NSMutableArray *_searchResults;
    CNAutocompleteResultsTableViewController *_autocompleteTableViewController;
    CNAutocompleteFetchContext *_fetchContext;
    CNComposeRecipient *_displayedRecipient;
}

@property (copy, nonatomic) NSString *searchAccountID;
@property (readonly, nonatomic) NSArray *addresses;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSString *remainingText;
@property (weak, nonatomic) id<EKEventAttendeePickerDelegate> addressValidationDelegate;
@property (nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL showAvailability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_addressForRecipient:(id)a0;
+ (BOOL)_participantHasResponded:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 event:(id)a1 calendar:(id)a2 overriddenEventStartDate:(id)a3 overriddenEventEndDate:(id)a4;
- (void)commitRemainingText;
- (void).cxx_destruct;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(unsigned long long)a2;
- (void)dealloc;
- (id)peoplePickerPrompt;
- (void)loadView;
- (void)finishedTaskWithID:(id)a0;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeCorecipientSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForCorecipients;
- (void)autocompleteResultsController:(id)a0 didRequestInfoAboutRecipient:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)contactViewControllerDidExecuteClearRecentsDataAction:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)searchWithText:(id)a0;
- (id)_searchManager;
- (void)_setRecipientsOnComposeView;
- (BOOL)_zeroKeyworkSearchEnabled;
- (void)searchForCorecipients;
- (void)scrollComposeViewToEnd;
- (void)_requestAvailabilityForRecipients:(id)a0;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (id)composeRecipientView:(id)a0 composeRecipientForAddress:(id)a1;
- (void)_setAtomPresentationOption:(unsigned long long)a0 forRecipient:(id)a1;
- (id)_lookUpRecipientForAddress:(id)a0;
- (void)_adjustLayoutOfSubviews;
- (id)_searchResultsView;
- (void)_showSearchResultsView;
- (void)_refreshSearchResults;
- (void)_hideSearchResultsViewAndCancelOutstandingSearches:(BOOL)a0;
- (void)_updateFetchContextChosenAddresses;
- (double)_maxScrollerHeight;
- (Class)_CNContactPickerViewController;
- (Class)_CNContactViewController;
- (void)_copyRecipientsFromComposeView;
- (void)viewLayoutMarginsDidChange;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)composeRecipientView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)presentationOptionsForRecipient:(id)a0;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)a0;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)a0;
- (void)viewDidLoad;

@end
