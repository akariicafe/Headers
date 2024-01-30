@class NSURL, NSURLSessionTask, AMSURLSession;

@interface AMSUINetworkImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSURLSessionTask *sessionTask;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) AMSURLSession *URLSession;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;

- (void)setQueuePriority:(long long)a0;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithURL:(id)a0 URLSession:(id)a1;
- (float)_sessionTaskPriorityForQueuePriority:(long long)a0;
- (void)_didCompleteTaskWithResult:(id)a0 error:(id)a1;
- (id)_eagerlyDecompressImage:(id)a0;

@end
