@class NSXPCConnection, NSXPCStore;

@interface NSXPCStoreConnection : NSObject {
    NSXPCStore *_store;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)initForStore:(id)a0;

@end
