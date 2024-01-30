@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject

@property (retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue;
@property (retain, nonatomic) NSXPCConnection *serverConnection;

+ (id)sharedService;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
