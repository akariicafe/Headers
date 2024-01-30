@class NSString, AARequest, AAResponse, AKAppleIDSession, NSObject, NSMutableData, NSHTTPURLResponse, NSURLConnection;
@protocol OS_dispatch_queue;

@interface AARequester : NSOperation <NSURLConnectionDelegate> {
    AARequest *_request;
    AAResponse *_response;
    NSURLConnection *_urlConnection;
    id /* block */ _handler;
    NSMutableData *_data;
    NSHTTPURLResponse *_httpResponse;
    Class _responseClass;
    BOOL _canceled;
    AKAppleIDSession *_appleIDSession;
    BOOL _shouldRetry;
}

@property (nonatomic, getter=isExecuting) BOOL isExecuting;
@property (getter=isFinished) BOOL finished;
@property (getter=isCanceled) BOOL canceled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void).cxx_destruct;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)start;
- (void)_callHandler;
- (void)_kickOffRequest:(id)a0;
- (void)__unsafe_callHandler;
- (id)initWithRequest:(id)a0 handler:(id /* block */)a1;

@end
