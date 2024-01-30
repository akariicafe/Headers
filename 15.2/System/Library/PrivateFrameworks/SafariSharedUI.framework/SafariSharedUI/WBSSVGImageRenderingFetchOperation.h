@class WBSSVGImageRenderingRequest, NSString, NSTimer, _WKRemoteObjectInterface, NSMutableArray;

@interface WBSSVGImageRenderingFetchOperation : WBSWebViewMetadataFetchOperation <WBSSVGImageRenderingObserver> {
    NSMutableArray *_remainingURLs;
    NSTimer *_loadingTimeoutTimer;
    _WKRemoteObjectInterface *_svgImageRenderingObserverInterface;
}

@property (readonly, nonatomic) WBSSVGImageRenderingRequest *request;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)didCreateWebView;
- (void).cxx_destruct;
- (id)webViewConfiguration;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_htmlStringWithImageElementString:(id)a0;
- (void)didRenderImage:(id)a0;
- (id)_htmlStringWithSVGContent:(id)a0;
- (void)_loadingTimerDidTimeout:(id)a0;
- (id)_htmlStringWithURL:(id)a0;
- (void)_loadSVGFileURL:(id)a0;
- (void)_renderNextImage;
- (void)_didCompleteWithImage:(id)a0;
- (void)willClearWebView;
- (void)didFailFetch;
- (struct CGSize { double x0; double x1; })webViewSize;
- (void)startOffscreenFetching;

@end
