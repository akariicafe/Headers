@class WKWebView, _WKApplicationManifest;

@interface _SFApplicationManifestFetcher : NSObject {
    id /* block */ _completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    long long _state;
}

- (void)getApplicationManifestWithCompletionHandler:(id /* block */)a0;
- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;

@end
