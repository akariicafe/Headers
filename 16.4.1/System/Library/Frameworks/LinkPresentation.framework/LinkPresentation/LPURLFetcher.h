@class NSString, NSURL, WKWebView, NSMutableData;

@interface LPURLFetcher : LPFetcher <_WKDataTaskDelegate> {
    id /* block */ _completionHandler;
    WKWebView *_webView;
    NSMutableData *_data;
    NSString *_MIMEType;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) Class responseClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)dataTask:(id)a0 didCompleteWithError:(id)a1;
- (void)dataTask:(id)a0 didReceiveData:(id)a1;
- (void)dataTask:(id)a0 didReceiveResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)_completedWithData:(id)a0 MIMEType:(id)a1 error:(id)a2;
- (void)_failedWithErrorCode:(long long)a0 underlyingError:(id)a1;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
