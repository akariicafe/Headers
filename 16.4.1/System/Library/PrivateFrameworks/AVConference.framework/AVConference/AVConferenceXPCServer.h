@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface AVConferenceXPCServer : NSObject {
    NSMutableArray *clientConnections;
    NSObject<OS_dispatch_queue> *incomingMessageQueue;
    NSObject<OS_dispatch_queue> *outgoingMessageQueue;
    NSObject<OS_dispatch_queue> *clientConnectionsQueue;
}

@property (readonly) NSObject<OS_xpc_object> *listener;
@property (readonly) NSMutableDictionary *registeredBlocks;

+ (id)AVConferenceXPCServerSingleton;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)appendPIDToDictionary:(id)a0 pid:(int)a1;
- (id)newNSDictionaryFromNSError:(id)a0;
- (void)registerBlockForService:(char *)a0 block:(id /* block */)a1 queue:(id)a2 eventLogLevel:(int)a3;
- (oneway void)release;
- (void)_xpc_start_listening_for_connections;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 toAllClientsWithContext:(id)a2;
- (id)newNSDictionaryFromXPCDictionary:(id)a0;
- (id)newNSErrorFromNSDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_xpc_handle_incoming_request:(id)a0;
- (void)_xpc_add_connection_to_list:(id)a0;
- (id)newClientDiedDictionary;
- (void)dealloc;
- (id)authorizedTokenData;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 context:(id)a2;
- (void)appendContextToDictionary:(id)a0 forConnection:(id)a1;
- (id)_xpc_get_connection_from_list_for_context:(id)a0;
- (void)registerBlockForService:(char *)a0 block:(id /* block */)a1;
- (void)deregisterFromService:(char *)a0;
- (void)_xpc_remove_connection_from_list:(id)a0;
- (id)init;
- (id)_xpc_get_connections_from_list_for_context:(id)a0;
- (id)_xpc_get_connection_from_list_for_connection:(id)a0;
- (id)autorelease;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 xpcArguments:(id)a2 context:(id)a3;
- (id)newNSDictionaryWidthNSDictionary:(id)a0;
- (void)_xpc_remove_connections_from_list;
- (void)registerBlockForService:(char *)a0 block:(id /* block */)a1 queue:(id)a2;
- (unsigned long long)retainCount;
- (id)newXPCDictionaryFromNSDictionary:(id)a0 forEvent:(id)a1;

@end
