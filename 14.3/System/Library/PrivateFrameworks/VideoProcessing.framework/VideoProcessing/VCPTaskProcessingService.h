@class NSXPCConnection;

@interface VCPTaskProcessingService : NSObject <VCPTaskProcessingClientProtocol> {
    NSXPCConnection *_connection;
}

+ (id)service;

- (void).cxx_destruct;
- (void)requestImageProcessingTask:(Class)a0 forPixelBuffer:(struct __CVBuffer { } *)a1 withOptions:(id)a2 andCompletionHandler:(id /* block */)a3;
- (void)requestImageProcessingTask:(Class)a0 forAssetURL:(id)a1 withOptions:(id)a2 andCompletionHandler:(id /* block */)a3;
- (id)sandboxExtensionForURL:(id)a0 error:(id *)a1;
- (id)connection;

@end
