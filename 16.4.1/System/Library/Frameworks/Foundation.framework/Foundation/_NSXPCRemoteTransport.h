@class NSString, OS_xpc_remote_connection;

@interface _NSXPCRemoteTransport : NSObject <_NSXPCTransport> {
    OS_xpc_remote_connection *_connection;
    id /* block */ _errorHandler;
    id /* block */ _messageHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTargetQueue:(id)a0;
- (void)setErrorHandler:(id /* block */)a0;
- (void)sendNotification:(id)a0;
- (int)processIdentifier;
- (void)sendMessage:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (void)suspend;
- (void)setMessageHandler:(id /* block */)a0;
- (unsigned int)effectiveUserIdentifier;
- (id)sendMessageWithReplySync:(id)a0;
- (void)cancel;
- (void)dealloc;
- (int)auditSessionIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (id)initWithConnection:(id)a0;
- (void)activate;
- (void)resume;
- (id)initWithRemoteService:(id)a0 name:(id)a1 queue:(id)a2 mode:(unsigned long long)a3;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;

@end
