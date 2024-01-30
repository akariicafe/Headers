@class NSXPCConnection;
@protocol AXDragSessionDelegate, AXDragSessionDragManager;

@interface AXDragSession : NSObject <_DUIClientSessionAccessibility> {
    NSXPCConnection *_connection;
    id<AXDragSessionDragManager> _manager;
    BOOL _resumed;
    BOOL _aborted;
}

@property (weak, nonatomic) id<AXDragSessionDelegate> delegate;

- (void)abort;
- (void)drop;
- (id)manager;
- (void)setManager:(id)a0;
- (oneway void)dragWillBeginWithReply:(id /* block */)a0;
- (oneway void)dragStatusDidChange:(id)a0;
- (oneway void)dragDidEndWithOperation:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)resume;
- (id)_serverSession;
- (void)cancel;
- (id)initWithDruidConnection:(id)a0;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 forRequestor:(id)a1 completion:(id /* block */)a2;

@end
