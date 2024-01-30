@class NPKPeerPaymentConversationContext, NSString, PKPeerPaymentService, PKPeerPaymentController, NSObject, PKPeerPaymentRecipient, MSConversation;
@protocol OS_dispatch_queue, NPKPeerPaymentConversationManagerDelegate;

@interface NPKPeerPaymentConversationManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain, nonatomic) NSString *currentRecipientAddressLookup;
@property (weak, nonatomic) PKPeerPaymentController *currentPeerPaymentController;
@property (retain, nonatomic) PKPeerPaymentService *peerPaymentService;
@property (weak, nonatomic) id<NPKPeerPaymentConversationManagerDelegate> delegate;
@property (retain) MSConversation *activeConversation;
@property (readonly, nonatomic) NSString *senderPhoneOrEmail;
@property (readonly, nonatomic) NSString *recipientPhoneOrEmail;
@property (readonly, copy, nonatomic) NSString *recipientDisplayName;
@property (readonly, nonatomic) BOOL recipientFoundInContacts;
@property (readonly) PKPeerPaymentRecipient *recipient;
@property (retain, nonatomic) NPKPeerPaymentConversationContext *conversationContext;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_accountDidChange;
- (id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)a0;
- (id)_displayableErrorWithError:(id)a0;
- (void)_internalQueue_forceLookupRecipientInformation;
- (void)_internalQueue_lookupRecipientInformationWithAddress:(id)a0 senderAddress:(id)a1;
- (void)_internalQueue_performPaymentWithAmount:(id)a0 requestToken:(id)a1 completion:(id /* block */)a2;
- (void)_internalQueue_performRequestWithAmount:(id)a0 completion:(id /* block */)a1;
- (id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)a0;
- (id)_negativeBalanceErrorWithUnderlyingError:(id)a0;
- (id)_newPeerPaymentController;
- (id)_newPeerPaymentControllerWithQueue:(id)a0;
- (void)_postNotificationWithRecipient:(id)a0 error:(id)a1;
- (id)_sharedPeerPaymentWebService;
- (id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)a0 selectedAmount:(id)a1 recipient:(id)a2;
- (id)_unknownPaymentErrorWithUnderlyingError:(id)a0;
- (void)lookupRecipientInformationIfNecessary;
- (void)lookupRecipientInformationWithAddress:(id)a0 senderAddress:(id)a1;
- (void)performPaymentWithAmount:(id)a0 requestToken:(id)a1 completion:(id /* block */)a2;
- (void)performRequestWithAmount:(id)a0 completion:(id /* block */)a1;

@end
