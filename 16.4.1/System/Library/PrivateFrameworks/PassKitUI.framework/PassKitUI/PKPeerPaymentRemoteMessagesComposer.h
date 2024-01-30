@class UIViewController, NSString, MSSession, PKPeerPaymentController, PKPeerPaymentRequestToken, PKPeerPaymentMessageComposeController, PKPeerPaymentRecipient;

@interface PKPeerPaymentRemoteMessagesComposer : NSObject {
    PKPeerPaymentRecipient *_recipient;
    unsigned long long _sourceType;
    PKPeerPaymentMessageComposeController *_composeController;
    UIViewController *_presentingViewController;
    NSString *_memo;
    MSSession *_session;
    PKPeerPaymentRequestToken *_requestToken;
}

@property (readonly, nonatomic) PKPeerPaymentController *peerPaymentController;
@property (nonatomic) long long actionType;

- (void)_handleError:(id)a0;
- (void).cxx_destruct;
- (void)_confirmPaymentMessageInsertionWithQuote:(id)a0 completion:(id /* block */)a1;
- (void)_insertPaymentMessageWithQuote:(id)a0 completion:(id /* block */)a1;
- (void)_insertRequestMessageWithAmount:(id)a0 completion:(id /* block */)a1;
- (void)_presentPeerPaymentMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)_recipientFoundInContacts;
- (void)_showAlertForInvalidRecipientWithName:(id)a0 statusReason:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_showAlertForInvalidStateIfNeededWithCompletion:(id /* block */)a0;
- (id)initWithPeerPaymentController:(id)a0 presentingViewController:(id)a1 actionType:(long long)a2 sourceType:(unsigned long long)a3;
- (void)presentRemoteMessageComposerWithAmount:(id)a0 requestToken:(id)a1 memo:(id)a2 sessionID:(id)a3 overViewController:(id)a4 completion:(id /* block */)a5;
- (void)validateRecipientWithAddress:(id)a0 completion:(id /* block */)a1;

@end
