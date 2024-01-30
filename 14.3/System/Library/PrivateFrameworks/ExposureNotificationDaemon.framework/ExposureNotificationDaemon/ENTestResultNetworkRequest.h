@class NSURLSession, NSString, NSDictionary, NSURL, NSError, NSObject, NSURLSessionTask;
@protocol OS_dispatch_queue;

@interface ENTestResultNetworkRequest : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_URLSession;
    NSURLSessionTask *_URLSessionTask;
    id /* block */ _completionHandler;
}

@property (readonly, copy, nonatomic) NSURL *requestURL;
@property (copy, nonatomic) NSString *APIKey;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSDictionary *bodyJSON;

- (void).cxx_destruct;
- (void)resumeWithCompletionHandler:(id /* block */)a0;
- (void)_completeWithError:(id)a0;
- (void)invalidate;
- (id)initWithRequestURL:(id)a0 URLSession:(id)a1 queue:(id)a2;
- (id)errorForUnsuccessfulResponse:(id)a0 body:(id)a1;
- (id)handleResponse:(id)a0 body:(id)a1;
- (id)_createURLRequestWithError:(id *)a0;
- (void)_performURLRequest:(id)a0;
- (id)_dictionaryFromData:(id)a0 response:(id)a1 error:(id *)a2;
- (id)_errorForURLRequestError:(id)a0;
- (void)handleURLResponse:(id)a0 data:(id)a1 error:(id)a2;

@end
