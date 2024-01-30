@class NSObject, NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SNAnalysisClient : NSObject {
    id /* block */ _connectionToServerGenerator;
    NSXPCConnection *_xpcConnectionToServer;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingInvalidationHandlers;
}

- (id)init;
- (void).cxx_destruct;

@end
