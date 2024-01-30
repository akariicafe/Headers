@class CDPDSecureChannelContext;

@interface CDPDSecureChannelController : NSObject {
    CDPDSecureChannelContext *_secureChannelContext;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)startCircleApplicationApprovalServerWithContext:(id)a0 completion:(id /* block */)a1;
- (void)joinCircle:(id /* block */)a0;
- (void)_processAndReplyWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)_startListeningWithProxy:(id)a0;

@end
