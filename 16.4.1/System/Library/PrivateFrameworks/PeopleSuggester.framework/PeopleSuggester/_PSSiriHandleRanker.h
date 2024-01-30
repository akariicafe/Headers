@class NSXPCConnection;

@interface _PSSiriHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)rankedHandles:(id)a0 context:(id)a1;

@end
