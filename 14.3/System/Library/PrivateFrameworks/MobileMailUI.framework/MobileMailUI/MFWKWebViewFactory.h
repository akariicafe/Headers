@class EFQueue, WKProcessPool;

@interface MFWKWebViewFactory : NSObject

@property (retain, nonatomic) EFQueue *preallocatedWebViews;
@property (retain, nonatomic) WKProcessPool *processPool;

+ (id)sharedWebViewFactory;

- (id)webView;
- (id)init;
- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning:(id)a0;
- (id)_instantiateWebView;
- (void)preallocateWebViews;
- (void)preallocateWebViewIfNeeded;

@end
