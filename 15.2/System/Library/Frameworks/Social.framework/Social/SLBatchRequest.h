@class NSMutableArray;

@interface SLBatchRequest : SLRequest {
    NSMutableArray *_requests;
}

- (void).cxx_destruct;
- (void)addRequest:(id)a0;
- (id)initWithServiceType:(id)a0 URL:(id)a1 parameters:(id)a2 requestMethod:(long long)a3;
- (id)preparedURLRequest;

@end
