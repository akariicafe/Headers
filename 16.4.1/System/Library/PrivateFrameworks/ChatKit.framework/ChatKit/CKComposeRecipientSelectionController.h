@class UIStackView, UIView, TUSenderIdentity, NSArray, CKComposeSubscriptionSelectorButton, CTXPCServiceSubscriptionContext, NSString, UILabel;
@protocol CKComposeRecipientSelectionControllerDelegate;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate, CKComposeSubscriptionSelectorButtonDelegate>

@property (copy, nonatomic) id /* block */ sendBlock;
@property (retain, nonatomic) UIView *fromFieldContainerView;
@property (retain, nonatomic) UIView *fromFieldSeparator;
@property (retain, nonatomic) UILabel *fromTextLabel;
@property (retain, nonatomic) CKComposeSubscriptionSelectorButton *subscriptionSelectorButton;
@property (retain, nonatomic) UIStackView *fromFieldContentStackView;
@property (nonatomic) BOOL fromFieldIdentityChanged;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *selectedSubscriptionContext;
@property (readonly, nonatomic) TUSenderIdentity *selectedSenderIdentity;
@property (nonatomic) BOOL hasUserSetContextPreference;
@property (nonatomic, getter=isFirstAppear) BOOL firstAppear;
@property (nonatomic) BOOL contactPreferredContextSelected;
@property (weak, nonatomic) id<CKComposeRecipientSelectionControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *expandedRecipients;
@property (readonly, nonatomic) NSArray *proposedRecipients;
@property (readonly, nonatomic) NSString *selectedLastAddressedOrDefaultHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)addRecipient:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)recipients;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)CKComposeSubscriptionSelectorButtonwWasTapped:(id)a0;
- (BOOL)_updateBackfillForNewRecipients;
- (BOOL)shouldAtomizeToConversationName;
- (void)_atomizeToConversationNameIfNecessary:(unsigned long long)a0;
- (id)_bestSenderIdentityForRecipient:(id)a0;
- (id)_contactPreferredSenderIdentityForRecipient:(id)a0;
- (id)_defaultSubscriptionContext;
- (id)_defaultSubscriptionContextForiMessage;
- (unsigned long long)_fromFieldThemeForCurrentService;
- (id)_handlesForRecipients:(id)a0;
- (BOOL)_hasExistingConversationWithAddedRecipient:(id)a0;
- (BOOL)_isOniMessageService:(id)a0;
- (void)_lastAddressedHandleChangedNotification:(id)a0;
- (void)_layoutFromFieldShouldHide:(BOOL)a0;
- (void)_legacyAddRecipient:(id)a0;
- (id)_preferrediMessageAccountName;
- (void)_recoverConversationIfJunk:(id)a0;
- (BOOL)_shouldHideFromField;
- (id)_subscriptionContextForSimID:(id)a0 phoneNumber:(id)a1;
- (void)_updateContentsOfFromField;
- (void)_updateFromFieldIfNeeded;
- (void)_updateSubscriptionContextForRecipient:(id)a0 preferredService:(id)a1;
- (BOOL)alwaysShowSearchResultsTable;
- (void)atomizeAndInvokeBlock:(id /* block */)a0;
- (void)atomizeAndSendTimeoutHandler;
- (id)autocompleteResultIdentifier:(id)a0;
- (void)configureSubscriptionContextForRecipients:(id)a0;
- (id)conversationGUIDForRecipient:(id)a0;
- (id)conversationList;
- (void)conversationPreferredServiceDidChange;
- (BOOL)deviceHasMultipleSubscriptions;
- (BOOL)hasBackfilledConversation;
- (BOOL)hasMultipleActiveSharedSubscriptions;
- (BOOL)hasiMessageableContext;
- (BOOL)homogenizePreferredServiceForiMessage;
- (BOOL)isBeingPresentedInMacDetailsView;
- (id)menuForSubcriptionSelector;
- (void)presentAlertForSubscriptionContext;
- (void)presentContextSelectionAlertWithCompletion:(id /* block */)a0;
- (BOOL)recipientIsiMessagable:(id)a0;
- (void)recipientSelectionControllerDidChange;
- (BOOL)shouldInvalidateIDSRequests;
- (BOOL)shouldSuppressSearchResultsTable;
- (void)viewDidAppearDeferredSetup;

@end
