@class NSXPCConnection;

@interface _PSHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (id)rankedHandlesFromCandidateHandles:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
