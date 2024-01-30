@class NSURLSession, RMConfigurationStatusUpdater, NSObject;
@protocol OS_dispatch_queue;

@interface RMAssetResolver : NSObject <RMAssetResolver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSURLSession *URLSession;
@property (readonly, nonatomic) RMConfigurationStatusUpdater *statusUpdater;

- (id)userAgent;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURLSession:(id)a0;
- (id)initWithURLSessionConfiguration:(id)a0;
- (id)_dataURLForAsset:(id)a0 reference:(id)a1 queryParameters:(id)a2;
- (id)_createRequestWithURL:(id)a0 acceptType:(id)a1;
- (BOOL)_validateAsset:(id)a0 reference:(id)a1 didFinishWithResponse:(id)a2 data:(id)a3 error:(id *)a4;
- (id)dataTaskWithAsset:(id)a0 queryParameters:(id)a1 statusUpdater:(id)a2 completionHandler:(id /* block */)a3;
- (id)downloadTaskWithAsset:(id)a0 queryParameters:(id)a1 statusUpdater:(id)a2 completionHandler:(id /* block */)a3;
- (void)resolveAssets:(id)a0 statusUpdater:(id)a1 completionHandler:(id /* block */)a2;

@end
