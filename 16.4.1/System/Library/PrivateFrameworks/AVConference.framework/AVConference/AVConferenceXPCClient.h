@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface AVConferenceXPCClient : NSObject {
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *connectionQueue;
}

@property (readonly) NSObject<OS_xpc_object> *connection;
@property (readonly) NSMutableDictionary *registeredBlocks;
@property BOOL connectionPersists;

+ (id)AVConferenceXPCClientSingleton;

- (id)newNSDictionaryFromNSError:(id)a0;
- (void)registerBlockForService:(char *)a0 block:(id /* block */)a1 queue:(id)a2 eventLogLevel:(int)a3;
- (id)newNSDictionaryFromXPCDictionary:(id)a0;
- (id)newNSErrorFromNSDictionary:(id)a0;
- (void)dealloc;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1;
- (void)registerBlockForService:(char *)a0 block:(id /* block */)a1;
- (void)deregisterFromService:(char *)a0;
- (id)init;
- (id)sendMessageSync:(char *)a0;
- (void)registerBlockForService:(char *)a0 block:(id /* block */)a1 queue:(id)a2;
- (void)sendMessageAsync:(char *)a0;
- (void)closeConnectionToServer;
- (id)copyConnection;
- (id)createConnectionToServer;
- (id)newNSDictionaryFromNSDictionary:(id)a0;
- (id)newServerDiedDictionary;
- (id)newTimeoutDictionary;
- (id)newXPCDictionaryFromNSDictionary:(id)a0 error:(id *)a1;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 reply:(id /* block */)a2;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 reply:(id /* block */)a2 queue:(id)a3;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 xpcArguments:(id)a2 reply:(id /* block */)a3;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 xpcArguments:(id)a2 reply:(id /* block */)a3 queue:(id)a4;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 xpcArguments:(id)a2 reply:(id /* block */)a3 queue:(id)a4 replyLogLevel:(int)a5;
- (id)sendMessageSync:(char *)a0 arguments:(id)a1;
- (id)sendMessageSync:(char *)a0 arguments:(id)a1 xpcArguments:(id)a2;

@end
