@class NSString, NSURLSessionTaskMetrics, NSData, NSURLResponse, NSURLSessionTask, NSDictionary;

@interface AMSURLResult : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *logUUID;
@property (readonly, nonatomic) NSURLSessionTaskMetrics *taskMetrics;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (retain, nonatomic) id object;
@property (readonly, nonatomic) NSString *responseCorrelationId;
@property (readonly, nonatomic) long long responseStatusCode;
@property (readonly, nonatomic) NSDictionary *responseHeaders;

- (id)initWithTaskInfo:(id)a0 object:(id)a1;
- (id)initWithTask:(id)a0 response:(id)a1 data:(id)a2 object:(id)a3;
- (id)initWithResult:(id)a0;
- (void).cxx_destruct;

@end
