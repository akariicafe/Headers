@class NSString, OS_xpc_remote_connection;

@interface _NSXPCRemoteTransport : NSObject <_NSXPCTransport> {
    OS_xpc_remote_connection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTargetQueue:(id)a0;
- (void)sendMessage:(id)a0;
- (int)auditSessionIdentifier;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (unsigned int)effectiveGroupIdentifier;
- (struct { unsigned int x0[8]; })auditToken;
- (void)sendNotification:(id)a0;
- (id)initWithRemoteService:(id)a0 name:(id)a1 queue:(id)a2 mode:(unsigned long long)a3;
- (id)initWithConnection:(id)a0;
- (unsigned int)effectiveUserIdentifier;
- (id)sendMessageWithReplySync:(id)a0;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)setEventHandler:(id /* block */)a0;
- (void)activate;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (int)processIdentifier;
- (void)cancel;

@end
