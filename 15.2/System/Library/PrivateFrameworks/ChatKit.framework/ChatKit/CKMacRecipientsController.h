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

- (void)viewDidLoad;
- (double)preferredMacToolbarHeight;
- (void)viewWillLayoutSubviews;
- (id)recipients;
- (BOOL)isEditable;
- (void)loadView;
- (void)refreshRecipients;
- (void).cxx_destruct;
- (void)_updateToFieldFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })detailsToolbarItemFrame;
- (void)_reloadCurrentRecipientData;
- (void)addRecipients:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceTimeJoinCallToolbarItemFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceTimeStartOrLaunchCallToolbarItemFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })innermostToolbarItemFrame;
- (void)_notifyDelegatesToFieldHeightHasChanged;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)a0;
- (void)_handleAddressBookChangedNotification:(id)a0;
- (void)_handleAddressBookPartialChangedNotification:(id)a0;
- (double)_toolbarHeightForNumberOfRows:(unsigned long long)a0;
- (void)updateScreenTimePolicy;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)a0;
- (BOOL)_shouldEnableScrolling;
- (void)dealloc;
- (id)handlesForScreenTimePolicyCheck;
- (void)reset;
- (id)composeRecipientView:(id)a0 contextMenuConfigurationForAtom:(id)a1;
- (unsigned long long)presentationOptionsForRecipient:(id)a0;
- (void)contactsManagerViewModelsDidChange:(id)a0;
- (id)initWithConversation:(id)a0;

@end
