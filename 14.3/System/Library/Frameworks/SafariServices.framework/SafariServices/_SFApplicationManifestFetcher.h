@class WKWebView, _WKApplicationManifest;

@interface _SFApplicationManifestFetcher : NSObject {
    id /* block */ _completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    long long _state;
}

- (void).cxx_destruct;
- (void)getApplicationManifestWithCompletionHandler:(id /* block */)a0;
- (id)initWithWebView:(id)a0;

@end
