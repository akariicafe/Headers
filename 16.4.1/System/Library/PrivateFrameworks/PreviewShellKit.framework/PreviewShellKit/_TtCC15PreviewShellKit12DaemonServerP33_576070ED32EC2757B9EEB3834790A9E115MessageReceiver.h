@interface _TtCC15PreviewShellKit12DaemonServerP33_576070ED32EC2757B9EEB3834790A9E115MessageReceiver : NSObject <UVDaemonServiceProtocol> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ responder;
}

- (id)init;
- (void).cxx_destruct;
- (void)copyURLToAgentIdentifierPayload:(id)a0 usingData:(id)a1 replyHandler:(id /* block */)a2;
- (void)grantExecutePermissionToAgentIdentifierPayload:(id)a0 usingData:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendPreviewServiceMessage:(id)a0 replyHandler:(id /* block */)a1;

@end
