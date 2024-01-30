@class TBRemoteFetchAndCacheDataSource, NSDate;
@protocol TBFetchRequest, TBFetchResponse;

@interface TBRemoteFetchAndCacheOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (retain, nonatomic) id<TBFetchRequest> fetchRequest;
@property (retain, nonatomic) id<TBFetchResponse> response;
@property (retain, nonatomic) TBRemoteFetchAndCacheDataSource *dataSource;

- (void)finish;
- (BOOL)isReady;
- (BOOL)isFinished;
- (void)start;
- (id)initWithFetchRequest:(id)a0 dataSource:(id)a1;
- (void).cxx_destruct;
- (id)name;

@end
