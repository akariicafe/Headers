@class NSString, NSHTTPURLResponse, NSURLSessionTaskTransactionMetrics, NSDate, NSURLRequest, NSError;

@interface RCNetworkEvent : NSObject

@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (readonly, nonatomic) NSURLSessionTaskTransactionMetrics *metrics;
@property (readonly, nonatomic) NSError *error;

- (id)initWithResultType:(long long)a0 request:(id)a1 startDate:(id)a2 operationID:(id)a3 requestID:(id)a4 response:(id)a5 metrics:(id)a6 error:(id)a7;
- (void).cxx_destruct;

@end
