@class NSXPCConnection;
@protocol WBSSafariBookmarksSyncAgentProtocol;

@interface WBSSafariBookmarksSyncAgentConnection : NSObject {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (readonly, nonatomic) id<WBSSafariBookmarksSyncAgentProtocol> remoteObjectProxy;

- (void)_connectionDidInvalidate;
- (id)init;
- (void)_setUpConnectionIfNeeded;
- (void).cxx_destruct;

@end
