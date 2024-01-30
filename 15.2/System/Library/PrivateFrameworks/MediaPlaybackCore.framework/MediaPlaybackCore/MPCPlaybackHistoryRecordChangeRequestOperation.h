@class MPCPlaybackHistoryRecordChangeRequest, NSOperationQueue;

@interface MPCPlaybackHistoryRecordChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) MPCPlaybackHistoryRecordChangeRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (void)_finishChangeRequestOperationWithError:(id)a0;

@end
