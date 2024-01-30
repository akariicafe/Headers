@class NSString, NSURL, NSURLSessionDataTask, UIImage, NSCache;

@interface MKPlaceCollectionImageDownloadOperation : NSOperation

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *cacheId;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSURLSessionDataTask *downloadTask;
@property (weak, nonatomic) NSCache *downloadCache;
@property (retain, nonatomic) UIImage *downloadedImage;

- (BOOL)isFinished;
- (id)initWithUrl:(id)a0 downloadCache:(id)a1 cacheId:(id)a2;
- (void)markOperationAsComplete;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;

@end
