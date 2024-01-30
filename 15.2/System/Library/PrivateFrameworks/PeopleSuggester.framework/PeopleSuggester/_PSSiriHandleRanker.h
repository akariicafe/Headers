@class NSXPCConnection;

@interface _PSSiriHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)rankedHandles:(id)a0 context:(id)a1;

@end
