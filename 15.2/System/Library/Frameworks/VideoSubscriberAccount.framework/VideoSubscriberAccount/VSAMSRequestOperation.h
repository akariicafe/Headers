@class NSOperationQueue, VSOptional, VSAMSRequest;

@interface VSAMSRequestOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) VSAMSRequest *request;

- (id)initWithRequest:(id)a0;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)urlForRequestType:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
