@class MPStoreModelRequest, MPModelResponse, NSOperation, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MPStoreModelRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSOperation *_childOperation;
    MPModelResponse *_response;
    double _startExecutingTimeStamp;
    NSObject<OS_dispatch_source> *_timeoutTimerSource;
}

@property (readonly, nonatomic) double remainingTimeInterval;
@property (copy, nonatomic) MPStoreModelRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)cancel;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)execute;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)assertRunningInAccessQueue;
- (void)_executeURLLoadWithRequest:(id)a0 storeBagDictionary:(id)a1 requestContext:(id)a2;
- (void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)a0 reason:(unsigned long long)a1 requestContext:(id)a2;
- (void)_executeURLLoadWithRequests:(id)a0 storeBagDictionary:(id)a1 requestContext:(id)a2;
- (void)_tearDownTimeoutTimerSource;
- (id)_URLLoadRequestWithRequest:(id)a0 requestContext:(id)a1;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (void)_finishWithResponse:(id)a0 error:(id)a1;
- (void)dispatchAsync:(id /* block */)a0;
- (void)_handleTimeout;
- (void)dispatchSync:(id /* block */)a0;
- (double)adjustTimeoutInterval:(double)a0;

@end
