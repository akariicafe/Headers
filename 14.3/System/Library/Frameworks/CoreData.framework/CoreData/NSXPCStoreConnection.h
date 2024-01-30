@class NSXPCConnection, NSXPCStore;

@interface NSXPCStoreConnection : NSObject {
    NSXPCStore *_store;
    NSXPCConnection *_connection;
}

- (void)disconnect;
- (void)reconnect;
- (id)initForStore:(id)a0;
- (void)dealloc;
- (void)sendMessageWithContext:(id)a0;
- (id)createConnectionWithOptions:(id)a0;
- (id)sendMessage:(id)a0 store:(id)a1 error:(id *)a2;

@end
