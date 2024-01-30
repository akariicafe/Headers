@class ADWebView;

@interface ADWebViewManager : NSObject

@property (retain, nonatomic) ADWebView *preallocatedWebView;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)preallocateWebViewWithBackgroundPriority;
- (id)creativeView;
- (id)_webViewForCreativeForVideo;
- (id)creativeViewForVideo;
- (id)_webViewForCreative;

@end
