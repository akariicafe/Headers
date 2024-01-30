@class NSString, NSMutableData;

@interface URLConnectionDelegate : NSObject <NSURLConnectionDelegate> {
    NSMutableData *fData;
    NSMutableData *fPostData;
    struct weak_ptr<ctu::Http::HttpRequestCallbackHandler> { struct HttpRequestCallbackHandler *__ptr_; struct __shared_weak_count *__cntrl_; } fHandler;
    struct shared_ptr<ctu::Http::HttpResponse> { struct HttpResponse *__ptr_; struct __shared_weak_count *__cntrl_; } fResponse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void).cxx_destruct;
- (struct shared_ptr<ctu::Http::HttpRequestCallbackHandler> { struct HttpRequestCallbackHandler *x0; struct __shared_weak_count *x1; })getHandler;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)dealloc;
- (id)initWithCallbackHandler:(struct shared_ptr<ctu::Http::HttpRequestCallbackHandler> { struct HttpRequestCallbackHandler *x0; struct __shared_weak_count *x1; })a0;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id).cxx_construct;

@end
