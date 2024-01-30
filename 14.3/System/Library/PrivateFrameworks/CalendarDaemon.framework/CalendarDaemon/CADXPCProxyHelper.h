@class CADDatabaseInitializationOptions, Protocol, NSXPCConnection;

@interface CADXPCProxyHelper : NSObject {
    NSXPCConnection *_connection;
    Protocol *_protocol;
    BOOL _synchronous;
}

@property (retain) CADDatabaseInitializationOptions *initializationOptions;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)_replaceReplyBlockInInvocation:(id)a0 retryingAfterInitializationWithContextHolder:(id)a1;
- (long long)replyBlockArgumentIndex:(id)a0;
- (void)_callReplyHandler:(id)a0 ofInvocation:(id)a1 withErrorCode:(long long)a2;
- (id)initWithXPCConnection:(id)a0 protocol:(id)a1 synchronous:(BOOL)a2;
- (BOOL)_shouldResendInitializationOptionsForInvocation:(id)a0;
- (id)_getReplyBlockFromInvocation:(id)a0;

@end
