@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface VCPHomeKitAnalysisSession : NSObject <VCPHomeKitAnalysisSessionClientProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    struct CF<const opaqueCMFormatDescription *> { struct opaqueCMFormatDescription *value_; } _formatDescription;
    id /* block */ _resultsHandler;
    id /* block */ _interruptionHander;
}

+ (id)sessionWithProperties:(id)a0 andResultsHandler:(id /* block */)a1;
+ (id)sessionWithProperties:(id)a0 withResultsHandler:(id /* block */)a1 andInterruptionHandler:(id /* block */)a2;

- (id)connection;
- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (void)processVideoFragmentAssetData:(id)a0 withOptions:(id)a1 andCompletionHandler:(id /* block */)a2;
- (id)initWithProperties:(id)a0 withResultsHandler:(id /* block */)a1 andInterruptionHandler:(id /* block */)a2;
- (void)processMessageWithOptions:(id)a0 andCompletionHandler:(id /* block */)a1;
- (void)processResults:(id)a0 withReply:(id /* block */)a1;
- (void)processVideoFragmentAssetData:(id)a0 withOptions:(id)a1 andErrorHandler:(id /* block */)a2;

@end
