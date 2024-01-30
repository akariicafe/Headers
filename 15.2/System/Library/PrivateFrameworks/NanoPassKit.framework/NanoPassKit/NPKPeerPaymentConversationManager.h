@class NPKPeerPaymentConversationContext, NSString, PKPeerPaymentService, PKPeerPaymentController, NSObject, PKPeerPaymentRecipient, MSConversation;
@protocol OS_dispatch_queue;

@interface NPKPeerPaymentConversationManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain, nonatomic) NSString *currentRecipientAddressLookup;
@property (weak, nonatomic) PKPeerPaymentController *currentPeerPaymentController;
@property (retain, nonatomic) PKPeerPaymentService *peerPaymentService;
@property (retain) MSConversation *activeConversation;
@property (readonly, nonatomic) NSString *senderPhoneOrEmail;
@property (readonly, nonatomic) NSString *recipientPhoneOrEmail;
@property (readonly, copy, nonatomic) NSString *recipientDisplayName;
@property (readonly, nonatomic) BOOL recipientFoundInContacts;
@property (readonly) PKPeerPaymentRecipient *recipient;
@property (retain, nonatomic) NPKPeerPaymentConversationContext *conversationContext;

+ (id)sharedInstance;

- (void)_accountDidChange;
- (void).cxx_destruct;
- (id)init;
- (id)_sharedPeerPaymentWebService;
- (void)_internalQueue_lookupRecipientInformationWithAddress:(id)a0 senderAddress:(id)a1;
- (id)_newPeerPaymentController;
- (void)_internalQueue_performPaymentWithAmount:(id)a0 requestToken:(id)a1 completion:(id /* block */)a2;
- (id)_newPeerPaymentControllerWithQueue:(id)a0;
- (id)_displayableErrorWithError:(id)a0;
- (id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)a0 selectedAmount:(id)a1 recipient:(id)a2;
- (void)_postNotificationWithRecipient:(id)a0 error:(id)a1;
- (void)_internalQueue_performRequestWithAmount:(id)a0 completion:(id /* block */)a1;
- (void)_internalQueue_forceLookupRecipientInformation;
- (id)_negativeBalanceErrorWithUnderlyingError:(id)a0;
- (id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)a0;
- (id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)a0;
- (id)_unknownPaymentErrorWithUnderlyingError:(id)a0;
- (void)lookupRecipientInformationIfNecessary;
- (void)performPaymentWithAmount:(id)a0 requestToken:(id)a1 completion:(id /* block */)a2;
- (void)lookupRecipientInformationWithAddress:(id)a0 senderAddress:(id)a1;
- (void)performRequestWithAmount:(id)a0 completion:(id /* block */)a1;

@end
