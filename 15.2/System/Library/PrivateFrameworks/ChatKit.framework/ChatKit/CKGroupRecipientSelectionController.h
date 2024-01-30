@class NSString, UIBarButtonItem;

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate>

@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)viewDidAppearDeferredSetup;
- (void).cxx_destruct;
- (double)topInsetForNavBar;
- (void)_frecencySearch;
- (void)recipientSelectionControllerDidChange;
- (BOOL)isBeingPresentedInMacDetailsView;
- (BOOL)homogenizePreferredServiceForiMessage;
- (void)recipientSelectionController:(id)a0 textDidChange:(id)a1;
- (void)_checkAvailabilityAndAddToken;
- (void)recipientSelectionControllerReturnPressed:(id)a0;
- (void)recipientSelectionControllerTabPressed:(id)a0;
- (void)recipientSelectionControllerDidChangeSize:(id)a0;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)a0;
- (void)_updateNavigationButton;
- (BOOL)_enableRecipientsAdditionBasedOnAvailability;
- (void)recipientSelectionControllerDidPushABViewController:(id)a0;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(id)a0;
- (void)recipientSelectionControllerShouldResignFirstResponder:(id)a0;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionController:(id)a0 didFinishAvailaiblityLookupForRecipient:(id)a1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldSuppressSearchResultsTable;
- (BOOL)alwaysShowSearchResultsTable;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsetsForRecipientSelectionController:(id)a0;
- (id)handlesForScreenTimePolicyCheck;
- (void)composeRecipientViewReturnPressed:(id)a0;
- (id)initWithConversation:(id)a0;

@end
