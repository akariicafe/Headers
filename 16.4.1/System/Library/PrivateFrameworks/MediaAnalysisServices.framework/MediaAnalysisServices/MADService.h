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
+ (void)configureServerInterface:(id)a0;
+ (id)service;

- (id)connection;
- (void)cancelAllRequests;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (id)initInternal;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelRequestID:(int)a0;
- (int)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 withOrientation:(unsigned int)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onImageURL:(id)a1 withIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)performRequests:(id)a0 onImageData:(id)a1 withUniformTypeIdentifier:(id)a2 andIdentifier:(id)a3 error:(id *)a4;
- (void)cacheHitWithQueryID:(unsigned long long)a0 cachedResultQueryID:(unsigned long long)a1;
- (void)endEntryPoint;
- (void)resetPerformanceMeasurements;
- (void)startEntryPointWithQueryID:(unsigned long long)a0;
- (int)performRequests:(id)a0 onAssetWithLocalIdentifier:(id)a1 fromPhotoLibraryWithURL:(id)a2 completionHandler:(id /* block */)a3;
- (int)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 withOrientation:(unsigned int)a2 assetLocalIdentifier:(id)a3 photoLibraryURL:(id)a4 completionHandler:(id /* block */)a5;
- (int)performRequests:(id)a0 onCIImage:(id)a1 withOrientation:(unsigned int)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 withOrientation:(unsigned int)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 withOrientation:(unsigned int)a2 assetLocalIdentifier:(id)a3 photoLibraryURL:(id)a4 completionHandler:(id /* block */)a5;
- (int)_performRequests:(id)a0 onIOSurface:(id)a1 withOrientation:(unsigned int)a2 assetLocalIdentifier:(id)a3 photoLibraryURL:(id)a4 completionHandler:(id /* block */)a5;
- (unsigned long long)currentOutstandingTasks;
- (int)performRequests:(id)a0 onAssetWithCloudIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (int)performRequests:(id)a0 onAssetWithIdentifier:(id)a1 identifierType:(unsigned long long)a2 fromPhotoLibraryWithURL:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)performRequests:(id)a0 onAssetWithIdentifier:(id)a1 identifierType:(unsigned long long)a2 fromPhotoLibraryWithURL:(id)a3 error:(id *)a4;
- (BOOL)performRequests:(id)a0 onAssetWithSyndicationIdentifier:(id)a1 error:(id *)a2;
- (int)performRequests:(id)a0 onImageData:(id)a1 withUniformTypeIdentifier:(id)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onImageURL:(id)a1 completionHandler:(id /* block */)a2;
- (int)performRequests:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 withOrientation:(unsigned int)a2 completionHandler:(id /* block */)a3;
- (int)performRequestsWithCloudIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)queryPerformanceMeasurements;
- (int)renderCGImage:(struct CGImage { } *)a0 toCVPixelBuffer:(struct __CVBuffer **)a1;
- (id)sandboxExtensionForURL:(id)a0 error:(id *)a1;

@end
