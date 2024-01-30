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
- (id)newNSErrorFromNSDictionary:(id)a0;
- (void)registerBlockForService:(char *)a0 block:(id /* block */)a1 queue:(id)a2 eventLogLevel:(int)a3;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1;
- (id)init;
- (void)registerBlockForService:(char *)a0 block:(id /* block */)a1 queue:(id)a2;
- (void)dealloc;
- (id)sendMessageSync:(char *)a0;
- (void)registerBlockForService:(char *)a0 block:(id /* block */)a1;
- (void)sendMessageAsync:(char *)a0;
- (void)deregisterFromService:(char *)a0;
- (id)newNSDictionaryFromXPCDictionary:(id)a0;
- (id)sendMessageSync:(char *)a0 arguments:(id)a1;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 reply:(id /* block */)a2;
- (id)sendMessageSync:(char *)a0 arguments:(id)a1 xpcArguments:(id)a2;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 xpcArguments:(id)a2 reply:(id /* block */)a3;
- (id)createConnectionToServer;
- (id)newServerDiedDictionary;
- (void)closeConnectionToServer;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 reply:(id /* block */)a2 queue:(id)a3;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 xpcArguments:(id)a2 reply:(id /* block */)a3 queue:(id)a4;
- (id)newXPCDictionaryFromNSDictionary:(id)a0 error:(id *)a1;
- (id)copyConnection;
- (id)newNSDictionaryFromNSDictionary:(id)a0;
- (id)newTimeoutDictionary;

@end
