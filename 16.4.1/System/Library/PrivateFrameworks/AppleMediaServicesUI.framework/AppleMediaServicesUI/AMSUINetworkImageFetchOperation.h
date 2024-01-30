@class NSURL, NSURLSessionTask, AMSURLSession;

@interface AMSUINetworkImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSURLSessionTask *sessionTask;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) AMSURLSession *URLSession;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)setQueuePriority:(long long)a0;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)start;
- (void).cxx_destruct;
- (void)_didCompleteTaskWithResult:(id)a0 error:(id)a1;
- (id)_eagerlyDecompressImage:(id)a0;
- (float)_sessionTaskPriorityForQueuePriority:(long long)a0;
- (id)initWithURL:(id)a0 URLSession:(id)a1;

@end
