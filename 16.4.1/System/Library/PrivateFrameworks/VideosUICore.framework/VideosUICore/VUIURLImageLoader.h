@class NSURLSession, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VUIURLImageLoader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, VUIImageLoader>

@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) NSMutableDictionary *loadOptionsByID;
@property (readonly, nonatomic) NSMutableDictionary *loadIDsByURL;
@property (readonly, nonatomic) NSMutableDictionary *taskOptionsByURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, getter=isImageRotationEnabled) BOOL imageRotationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)URLForObject:(id)a0;
- (void)_executeOnProcessingQueue:(id /* block */)a0;
- (void)cancelLoad:(id)a0;
- (id)imageKeyForObject:(id)a0;
- (id)loadImageForObject:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2 imageDirection:(long long)a3 requestLoader:(id)a4 completionHandler:(id /* block */)a5;

@end
