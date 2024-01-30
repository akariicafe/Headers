@class NSXPCConnection;

@interface _PSHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)rankedHandlesFromCandidateHandles:(id)a0;

@end
