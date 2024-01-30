@class NSURLRequest, NSURLSessionDataTask, NSURLSession;

@interface RUIHTTPRequest : NSObject {
    NSURLRequest *_request;
    NSURLSessionDataTask *_dataTask;
    NSURLSession *_urlSession;
}

@property (weak, nonatomic) id delegate;

+ (id)errorWithCode:(unsigned long long)a0;
+ (id)invalidResponseErrorWithResponse:(id)a0;
+ (id)serviceUnavailableError;
+ (id)nonSecureConnectionNotAllowedError;
+ (BOOL)anyRequestLoading;
+ (id)safeBaseURL;

- (BOOL)isLoading;
- (void)parseData:(id)a0;
- (id)sessionConfiguration;
- (id)request;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)loadRequest:(id)a0;
- (void)_finishedLoading;
- (id)urlSessionDelegate;
- (void)loadStatusChanged;
- (void)_preLoadCancel;
- (BOOL)receivedValidResponse:(id)a0 forRequest:(id)a1;
- (void)willParseData;
- (void)didParseData;
- (void)failWithError:(id)a0 forRequest:(id)a1;
- (void)_startedLoading;
- (void)shouldLoadRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_loadRequestMain:(id)a0;
- (id)handleWillLoadRequest:(id)a0;

@end
