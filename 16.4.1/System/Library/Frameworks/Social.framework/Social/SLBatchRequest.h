@class NSMutableArray;

@interface SLBatchRequest : SLRequest {
    NSMutableArray *_requests;
}

- (void)addRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceType:(id)a0 URL:(id)a1 parameters:(id)a2 requestMethod:(long long)a3;
- (id)preparedURLRequest;

@end
