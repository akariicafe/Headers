@class NSString, WKWebView, _WKRemoteObjectInterface, NSMutableArray;
@protocol TouchIconFetcherWebProcessController;

@interface TouchIconFetcher : NSObject <TouchIconFetcherObserver> {
    WKWebView *_webView;
    BOOL _fetchingURLs;
    BOOL _invalidated;
    NSMutableArray *_completionBlocks;
    id<TouchIconFetcherWebProcessController> _activityProxy;
    _WKRemoteObjectInterface *_touchIconFetcherObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0;
- (id)_webProcessActivityProxy;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_setUpTouchIconFetcherObserver;
- (void)didFetchTouchIconURLs:(id)a0 forURL:(id)a1;
- (void)fetchTouchIconURLsWithCompletion:(id /* block */)a0;

@end
