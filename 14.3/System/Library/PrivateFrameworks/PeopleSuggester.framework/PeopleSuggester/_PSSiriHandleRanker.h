@class NSXPCConnection;

@interface _PSSiriHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)rankedHandles:(id)a0 context:(id)a1;

@end
