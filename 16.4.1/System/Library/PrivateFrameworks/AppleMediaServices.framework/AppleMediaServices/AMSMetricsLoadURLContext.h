@class NSData, NSError, NSURLSessionTaskMetrics, NSURLSession, NSDictionary, AMSURLRequestProperties, NSURLSessionTask, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSMetricsLoadURLContext : NSObject

@property (retain, nonatomic) NSDictionary *decodedResponseBody;
@property (retain, nonatomic) AMSURLRequestProperties *properties;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AMSProcessInfo *processInfo;
@property (retain, nonatomic) NSData *responseBody;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics;

- (void)setBagContract:(id)a0;
- (id)bagContract;
- (id)initWithTaskInfo:(id)a0 serverPayload:(id)a1;
- (id)initWithTask:(id)a0 metrics:(id)a1;
- (void).cxx_destruct;

@end
