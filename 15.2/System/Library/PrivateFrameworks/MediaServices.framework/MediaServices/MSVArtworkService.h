@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject

@property (retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue;
@property (retain, nonatomic) NSXPCConnection *serverConnection;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)sendRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
