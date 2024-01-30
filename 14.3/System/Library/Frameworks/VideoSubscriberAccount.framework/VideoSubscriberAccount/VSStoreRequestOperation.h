@class SSRequest, VSOptional, VSStoreRequest;

@interface VSStoreRequestOperation : VSAsyncOperation {
    int _requestCompletionFlag;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) SSRequest *storeServicesRequest;
@property (copy, nonatomic) VSStoreRequest *request;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (BOOL)_isFirstToFinish;

@end
