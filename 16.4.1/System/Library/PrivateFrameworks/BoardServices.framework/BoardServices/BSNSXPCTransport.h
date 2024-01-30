@class NSString, BSXPCServiceConnection, NSArray, _BSNSXPCInvalidCallbackTracking, NSObject;
@protocol OS_dispatch_queue;

@interface BSNSXPCTransport : NSObject <BSNSXPCConnectionConfiguring, _NSXPCTransport> {
    BSXPCServiceConnection *_connection;
    NSString *_explanation;
    NSArray *_perMessageAttributes;
    id /* block */ _perMessageAssertionProvider;
    NSObject<OS_dispatch_queue> *_targetQueue;
    _BSNSXPCInvalidCallbackTracking *_configured_invalidCallbackTracking;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _messageOptions;
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
- (int)auditSessionIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (void)activate;
- (void).cxx_destruct;
- (void)resume;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (void)setPerMessageAssertionAttributes:(id)a0;

@end
