@class NSURLSession, NSURLResponse, NSData, NSURLSessionDataTask, NSURLRequest, NSError;

@interface VUIURLRequestOperation : VUIAsynchronousOperation

@property (retain, nonatomic) NSURLRequest *request;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSURLResponse *response;
@property (copy, nonatomic) NSURLSession *session;
@property (copy, nonatomic) NSURLSessionDataTask *task;
@property (nonatomic) unsigned long long taskStartTime;
@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long elapsedTimeInMilliseconds;

- (id)initWithRequest:(id)a0;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (id)initWithRequest:(id)a0 session:(id)a1;
- (void)_handleResponse:(id)a0 responseData:(id)a1 error:(id)a2;

@end
