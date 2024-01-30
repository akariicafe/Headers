@class NSURLRequest, SFStartNetworkSearchFeedback, NSURLSessionDownloadTask;

@interface STSImageDownloadOperation : NSOperation {
    NSURLSessionDownloadTask *_task;
    id /* block */ _begin;
    id /* block */ _progress;
    id /* block */ _completion;
    SFStartNetworkSearchFeedback *_feedback;
    double _startTime;
}

@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (readonly, nonatomic) NSURLRequest *request;

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)start;
- (void)_markAsCompleted;
- (id)initWithRequest:(id)a0 session:(id)a1 begin:(id /* block */)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)updateProgressWithTotalBytesWritten:(long long)a0 totalBytesExpectedToWrite:(long long)a1;
- (void)completedWithResponse:(id)a0 location:(id)a1 timingData:(id)a2 error:(id)a3;

@end
