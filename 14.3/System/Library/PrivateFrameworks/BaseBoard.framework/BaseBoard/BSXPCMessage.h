@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BSXPCMessage : NSObject {
    id /* block */ _replyHandler;
    NSObject<OS_dispatch_queue> *_replyQueue;
    int _invalidated;
    int _replied;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *payload;

+ (id)message:(long long)a0 withPacker:(id /* block */)a1 replyHandler:(id /* block */)a2 replyQueue:(id)a3;
+ (void)sendMessage:(long long)a0 toConnection:(id)a1 withMessagePacker:(id /* block */)a2 replyHandler:(id /* block */)a3 replyQueue:(id)a4;
+ (id)messageWithPayload:(id)a0;
+ (const char *)messageTypeKey;
+ (id)messageWithPacker:(id /* block */)a0 replyHandler:(id /* block */)a1 replyQueue:(id)a2;
+ (id)messageWithPacker:(id /* block */)a0;
+ (void)sendMessageWithPacker:(id /* block */)a0 toConnection:(id)a1 replyHandler:(id /* block */)a2 replyQueue:(id)a3;
+ (void)sendMessage:(long long)a0 toConnection:(id)a1 withMessagePacker:(id /* block */)a2;
+ (id)message:(long long)a0 withPacker:(id /* block */)a1;
+ (void)sendMessageWithPacker:(id /* block */)a0 toConnection:(id)a1;

- (BOOL)sendToConnection:(id)a0;
- (void)forcefullyInvokeReplyHandler:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(long long)a0 packer:(id /* block */)a1 replyHandler:(id /* block */)a2 replyQueue:(id)a3;
- (id)description;
- (id)sendSynchronouslyToConnection:(id)a0 error:(id *)a1;
- (BOOL)sendToConnection:(id)a0 replyQueue:(id)a1 replyHandler:(id /* block */)a2;

@end
