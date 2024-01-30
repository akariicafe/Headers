@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface MRXPCConnection : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_defaultReplyQueue;
    NSMutableDictionary *_customXpcHandlers;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int uid;

- (void)sendMessage:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (id)initWithConnection:(id)a0 queue:(id)a1 defaultReplyQueue:(id)a2;
- (id)sendSyncMessageWithType:(unsigned long long)a0 error:(id *)a1;
- (void)removeCustomXPCHandler:(unsigned long long)a0;
- (void)dealloc;
- (void)sendMessageWithType:(unsigned long long)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void)addCustomXPCHandler:(id /* block */)a0 forKey:(unsigned long long)a1;
- (id)sendSyncMessage:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
