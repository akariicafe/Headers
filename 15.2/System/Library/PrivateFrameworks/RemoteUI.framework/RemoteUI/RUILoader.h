@class NSString, NSURL, _RUILoaderSessionDelegateAdapter, RUIStyle, RUIParser;
@protocol RUIParserDelegate;

@interface RUILoader : RUIHTTPRequest <NSURLSessionTaskDelegate> {
    RUIParser *_parser;
    NSURL *_url;
    _RUILoaderSessionDelegateAdapter *_sessionDelegateAdapter;
}

@property (nonatomic) BOOL allowNonSecureHTTP;
@property (weak, nonatomic) id<RUIParserDelegate> parserDelegate;
@property (retain, nonatomic) RUIStyle *style;
@property (nonatomic) long long userInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)parseData:(id)a0;
- (id)sessionConfiguration;
- (void).cxx_destruct;
- (id)URL;
- (void)dealloc;
- (void)cancel;
- (void)loadRequest:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)loadXMLUIWithData:(id)a0 baseURL:(id)a1;
- (void)loadXMLUIWithRequest:(id)a0;
- (id)urlSessionDelegate;
- (BOOL)receivedValidResponse:(id)a0 forRequest:(id)a1;
- (void)didParseData;
- (void)failWithError:(id)a0 forRequest:(id)a1;
- (void)shouldLoadRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleShouldLoadRequestResult:(id)a0 completionHandler:(id /* block */)a1;
- (void)_finishLoadWithObjectModel:(id)a0 actionSignal:(id)a1 error:(id)a2;
- (void)_loadResources;
- (BOOL)anyWebViewLoading;
- (void)webViewFinishedLoading;
- (void)allWebViewsFinishedLoading;
- (void)loadXMLUIWithURL:(id)a0;

@end
