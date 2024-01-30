@class Protocol, NSString, NSSet, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface MADService : NSObject <MADServiceProtocol, VCPMediaAnalysisClientProtocol> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _requestID;
}

@property (class, readonly, nonatomic) NSString *serviceName;
@property (class, readonly, nonatomic) Protocol *serverProtocol;
@property (class, readonly, nonatomic) NSSet *allowedClasses;

+ (BOOL)isEntitled;
+ (id)service;
+ (void)configureServerInterface:(id)a0;

- (void)cancelAllRequests;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (id)initInternal;
- (void).cxx_destruct;
- (id)init;
- (int)performRequests:(id)a0 onImageURL:(id)a1 withIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (id)connection;
- (void)dealloc;
- (void)cancelRequestID:(int)a0;
- (void)resetPerformanceMeasurements;
- (void)startEntryPointWithQueryID:(unsigned long long)a0;
- (void)endEntryPoint;
- (int)performRequests:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 withOrientation:(unsigned int)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (id)sandboxExtensionForURL:(id)a0 error:(id *)a1;
- (int)renderCGImage:(struct CGImage { } *)a0 toCVPixelBuffer:(struct __CVBuffer **)a1;
- (int)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 withOrientation:(unsigned int)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onCIImage:(id)a1 withOrientation:(unsigned int)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 withOrientation:(unsigned int)a2 completionHandler:(id /* block */)a3;
- (int)performRequests:(id)a0 onImageURL:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)currentOutstandingTasks;
- (int)_performRequests:(id)a0 onIOSurface:(id)a1 withOrientation:(unsigned int)a2 assetLocalIdentifier:(id)a3 photoLibraryURL:(id)a4 completionHandler:(id /* block */)a5;
- (int)performRequests:(id)a0 onAssetWithLocalIdentifier:(id)a1 fromPhotoLibraryWithURL:(id)a2 completionHandler:(id /* block */)a3;
- (int)performRequests:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 withOrientation:(unsigned int)a2 assetLocalIdentifier:(id)a3 photoLibraryURL:(id)a4 completionHandler:(id /* block */)a5;
- (int)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 withOrientation:(unsigned int)a2 assetLocalIdentifier:(id)a3 photoLibraryURL:(id)a4 completionHandler:(id /* block */)a5;
- (int)performRequests:(id)a0 onAssetWithCloudIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (int)performRequestsWithCloudIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)queryPerformanceMeasurements;

@end
