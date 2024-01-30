@class NSData, NSString, NSError, AMSURLRequestEncoder, NSDate, AMSURLSession, NSURLRequest, NSURLSessionDataTask, NSHTTPURLResponse, NSNumber;

@interface WLKNetworkRequestOperation : WLKAsyncOperation

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (nonatomic) long long responseStatusCode;
@property (nonatomic) long long resourceFetchType;
@property (retain, nonatomic) AMSURLRequestEncoder *encoder;
@property (retain, nonatomic) AMSURLSession *session;
@property (copy, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long signpostIdentifier;
@property (copy, nonatomic) NSNumber *DSID;
@property (weak, nonatomic) id authenticationDelegate;
@property (readonly, nonatomic) long long options;

- (void)executionDidBegin;
- (id)shortDescription;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)originalExpirationDate;
- (void)processResponse;
- (void)_finishExecutionIfPossibleWithError:(id)a0;
- (void)_startNetworkRequest;
- (long long)_statusCodeForAMSResult:(id)a0 error:(id)a1;
- (void)configureSession;
- (void)finishExecutionIfPossible;
- (void)handleResult:(id)a0 error:(id)a1;
- (id)httpHeaderMaxAge;
- (id)httpHeaderResponseDate;
- (id)initWithURLRequest:(id)a0 options:(long long)a1;
- (void)prepareAndStartNetworkRequest;
- (void)prepareURLRequest:(id /* block */)a0;

@end
