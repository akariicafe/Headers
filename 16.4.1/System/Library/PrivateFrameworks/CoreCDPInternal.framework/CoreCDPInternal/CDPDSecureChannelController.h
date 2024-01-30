@class CDPDSecureChannelContext;

@interface CDPDSecureChannelController : NSObject {
    CDPDSecureChannelContext *_secureChannelContext;
}

- (void)startCircleApplicationApprovalServerWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_processAndReplyWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)_startListeningWithProxy:(id)a0;
- (void)joinCircle:(id /* block */)a0;

@end
