@class WKWebView;
@protocol SFInjectedJavaScriptWebProcessController;

@interface _SFInjectedJavaScriptController : NSObject {
    WKWebView *_webView;
    id<SFInjectedJavaScriptWebProcessController> _activityProxy;
}

- (void)runJavaScriptForActivity:(id)a0 withScript:(id)a1 object:(id)a2 invokeMethod:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (id)_webProcessActivityProxy;

@end
