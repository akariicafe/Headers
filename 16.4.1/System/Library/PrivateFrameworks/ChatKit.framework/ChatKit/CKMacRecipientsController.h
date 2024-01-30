@class CKDetailsContactsManager, UIView, STConversationContext, NSString, CKManualUpdater, CKConversation, CNComposeRecipientTextView, UIScrollView;
@protocol CKMacRecipientsControllerDelegate;

@interface CKMacRecipientsController : CKViewController <CNComposeRecipientTextViewDelegate, CKDetailsContactsManagerDelegate>

@property (retain, nonatomic) STConversationContext *currentConversationContext;
@property (retain, nonatomic) CKDetailsContactsManager *contactsManager;
@property (nonatomic) BOOL allowedByScreenTime;
@property (retain, nonatomic) UIView *detailsPopoverPresentationSourceView;
@property (retain, nonatomic) UIScrollView *toFieldScrollView;
@property (retain, nonatomic) CKManualUpdater *addressBookNotificationUpdater;
@property (nonatomic) unsigned long long numberOfRowsInToField;
@property (weak, nonatomic) CKConversation *conversation;
@property (readonly, nonatomic) CNComposeRecipientTextView *toField;
@property (weak, nonatomic) id<CKMacRecipientsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEditable;
- (void)dealloc;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)recipients;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)reset;
- (void)loadView;
- (void)addRecipients:(id)a0;
- (id)handlesForScreenTimePolicyCheck;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)a0;
- (void)_handleAddressBookChangedNotification:(id)a0;
- (void)_handleAddressBookPartialChangedNotification:(id)a0;
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)a0;
- (void)_notifyDelegatesToFieldHeightHasChanged;
- (void)_reloadCurrentRecipientData;
- (BOOL)_shouldEnableScrolling;
- (void)_showContactCardForEntity:(id)a0 sourceView:(id)a1;
- (double)_toolbarHeightForNumberOfRows:(unsigned long long)a0;
- (void)_updateToFieldFrame;
- (id)composeRecipientView:(id)a0 contextMenuConfigurationForAtom:(id)a1;
- (void)composeRecipientView:(id)a0 disambiguateRecipientForAtom:(id)a1;
- (void)contactsManagerViewModelsDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })detailsToolbarItemFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceTimeJoinCallToolbarItemFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceTimeStartOrLaunchCallToolbarItemFrame;
- (id)initWithConversation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })innermostToolbarItemFrame;
- (double)preferredMacToolbarHeight;
- (unsigned long long)presentationOptionsForRecipient:(id)a0;
- (void)refreshRecipients;
- (void)updateScreenTimePolicy;

@end
