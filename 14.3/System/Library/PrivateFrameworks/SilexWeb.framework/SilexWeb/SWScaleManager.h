@class NSString, WKWebView;

@interface SWScaleManager : NSObject <SWScaleManager>

@property (readonly, nonatomic) WKWebView *webView;
@property (nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0 scale:(double)a1;

@end
