@class WKWebView;

@interface _SFSharingLinkExtractor : NSObject {
    WKWebView *_webView;
}

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)fetchSharingLinkWithCompletionHandler:(id /* block */)a0;

@end
