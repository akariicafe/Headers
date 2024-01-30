@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface VCPVoiceOverService : NSObject <VCPVoiceOverClientProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    int _nextRequestID;
}

+ (id)service;
+ (id)errorWithDescription:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (int)requestProcessingViaXPC:(id)a0 ofPixelBuffer:(struct __CVBuffer { } *)a1 withOptions:(id)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestProcessing:(id)a0 ofPixelBuffer:(struct __CVBuffer { } *)a1 withOptions:(id)a2 andCompletionHandler:(id /* block */)a3;
- (void)invalidate;
- (id)connection;

@end
