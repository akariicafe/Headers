@class WKWebView, _WKApplicationManifest;

@interface WBSApplicationManifestFetcher : NSObject {
    id /* block */ _completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    long long _state;
}

- (id)initWithWebView:(id)a0;
- (void)getApplicationManifestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
