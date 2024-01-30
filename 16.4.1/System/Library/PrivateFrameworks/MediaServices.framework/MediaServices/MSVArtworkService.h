@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject

@property (retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue;
@property (retain, nonatomic) NSOperationQueue *serviceColorAnalysisOperationQueue;
@property (retain, nonatomic) NSXPCConnection *serverConnection;

+ (id)sharedService;

- (void)sendRequest:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sendRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
